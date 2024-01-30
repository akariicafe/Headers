@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCSessionManager : NSObject <VCSessionDelegate> {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *sessions;
@property (nonatomic) BOOL sharingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)addNSError:(id)a0 toXPCArgumentDictionary:(id)a1;

- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)dealloc;
- (void)releaseSession:(id)a0;
- (id)init;
- (id)sessionForUUID:(id)a0;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteMediaStateDidChange:(unsigned int)a2 forMediaType:(unsigned int)a3;
- (id)participantConfigFromXPCDictionary:(id)a0;
- (id)sessionForStreamToken:(unsigned int)a0;
- (void)vcSession:(id)a0 addParticipantWithID:(id)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSession:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)vcSession:(id)a0 didStopWithError:(id)a1;
- (void)vcSession:(id)a0 downlinkRateAdaptationDidChangeWithInfo:(id)a1;
- (void)vcSession:(id)a0 oneToOneModeEnabled:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSession:(id)a0 participantID:(id)a1 audioEnabled:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 audioPaused:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 didChangeMediaPriority:(unsigned char)a2 description:(id)a3;
- (void)vcSession:(id)a0 participantID:(id)a1 didDetectError:(id)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 mediaStateDidChange:(unsigned int)a2 forMediaType:(unsigned int)a3 didSucceed:(BOOL)a4 error:(id)a5;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteAudioEnabledDidChange:(BOOL)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteAudioPausedDidChange:(BOOL)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteScreenEnabledDidChange:(BOOL)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteVideoEnabledDidChange:(BOOL)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteVideoPausedDidChange:(BOOL)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 screenEnabled:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 videoEnabled:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 videoPaused:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)vcSession:(id)a0 removeParticipantWithID:(id)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSession:(id)a0 updateConfiguration:(id)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSession:(id)a0 uplinkRateAdaptationDidChangeWithInfo:(id)a1;
- (void)vcSessionShouldReconnect:(id)a0;

@end
