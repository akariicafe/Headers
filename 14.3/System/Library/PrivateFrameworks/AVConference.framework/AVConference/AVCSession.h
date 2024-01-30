@class AVCSessionParticipant, NSString, VCXPCClientShared, NSArray, NSData, NSMutableDictionary, NSDictionary, NSObject, AVCSessionConfiguration;
@protocol OS_dispatch_queue, AVCSessionDelegate;

@interface AVCSession : NSObject <AVCSessionParticipantDelegate, AVCSessionParticipantControlProtocol> {
    NSString *_transportToken;
    id _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_uuid;
    int _activeConfigurationCount;
}

@property (retain, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) AVCSessionConfiguration *configuration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (readonly, nonatomic) NSMutableDictionary *remoteParticipantsMap;
@property (readonly, nonatomic) NSMutableDictionary *participantsToAdd;
@property (readonly, nonatomic) AVCSessionParticipant *localParticipant;
@property (readonly, nonatomic) VCXPCClientShared *xpcConnection;
@property (readonly, nonatomic) long long sessionToken;
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (nonatomic) id<AVCSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSData *negotiationData;
@property (nonatomic, getter=isAudioMuted) BOOL audioMuted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property (nonatomic) float volume;
@property (readonly, nonatomic) NSData *frequencyLevels;

- (void)addParticipant:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)addParticipants:(id)a0;
- (void)start;
- (void)removeParticipant:(id)a0;
- (void)updateConfiguration:(id)a0;
- (void)removeParticipants:(id)a0;
- (void)registerBlocksForNotifications;
- (void)stopWithError:(id)a0;
- (void)participant:(id)a0 audioEnabled:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)participant:(id)a0 videoEnabled:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)participant:(id)a0 audioPaused:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)participant:(id)a0 videoPaused:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)deregisterFromNotifications;
- (void)setupNotificationQueue:(id)a0;
- (id)newNSErrorWithErrorDictionary:(id)a0;
- (void)participant:(id)a0 mediaPrioritiesDidChange:(id)a1;
- (id)initPrivateWithTransportToken:(id)a0 configuration:(id)a1 negotiationData:(id)a2 delegate:(id)a3 queue:(id)a4;
- (BOOL)validateParticipantToAdd:(id)a0;
- (BOOL)validateParticipantToRemove:(id)a0;
- (void)validateParticipantConfiguration;
- (id)initWithTransportToken:(id)a0 configuration:(id)a1 negotiationData:(id)a2 delegate:(id)a3 queue:(id)a4;
- (id)initWithTransportToken:(id)a0 configuration:(id)a1 delegate:(id)a2 queue:(id)a3;
- (void)beginParticipantConfiguration;
- (void)endParticipantConfiguration;
- (void)participant:(id)a0 frequencyLevelsDidChange:(id)a1;

@end
