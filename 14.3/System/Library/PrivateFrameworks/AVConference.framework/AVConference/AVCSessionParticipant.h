@class NSString, NSDictionary, VCXPCClientShared, NSData, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, AVCSessionParticipantDelegate;

@interface AVCSessionParticipant : NSObject <AVCSessionParticipantControlProtocol> {
    id _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCXPCClientShared *_connection;
    unsigned long long spatialAudioSourceID;
    NSMutableDictionary *_participantConfig;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (nonatomic) long long videoToken;
@property (nonatomic) unsigned long long spatialAudioSourceID;
@property (retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property (readonly, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL configurationInProgress;
@property (nonatomic) BOOL hasPendingChanges;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) id<AVCSessionParticipantDelegate> delegate;
@property (nonatomic) float audioPosition;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (readonly, nonatomic) unsigned long long participantID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSData *negotiationData;
@property (nonatomic, getter=isAudioMuted) BOOL audioMuted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property (nonatomic) float volume;
@property (readonly, nonatomic) NSData *frequencyLevels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)registerBlocksForNotifications;
- (BOOL)isConnectedToSession;
- (void)deregisterFromNotifications;
- (void)setupNotificationQueue:(id)a0;
- (void)setupConfig;
- (void)setStateVideoEnabled:(BOOL)a0;
- (id)newNSErrorWithErrorDictionary:(id)a0;
- (void)setStateAudioEnabled:(BOOL)a0;
- (void)setStateAudioPaused:(BOOL)a0;
- (void)setStateVideoPaused:(BOOL)a0;
- (id)initWithParticipantID:(unsigned long long)a0 data:(id)a1 delegate:(id)a2 queue:(id)a3;

@end
