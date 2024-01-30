@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCSessionManager : NSObject <VCSessionDelegate> {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *sessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)addNSError:(id)a0 toXPCArgumentDictionary:(id)a1;

- (void)vcSession:(id)a0 participantID:(id)a1 remoteVideoPausedDidChange:(BOOL)a2;
- (id)init;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteVideoEnabledDidChange:(BOOL)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 audioEnabled:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)registerBlocksForService;
- (void)dealloc;
- (void)vcSession:(id)a0 participantID:(id)a1 didDetectError:(id)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 videoPaused:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (id)sessionForUUID:(id)a0;
- (void)deregisterBlocksForService;
- (void)vcSession:(id)a0 didStopWithError:(id)a1;
- (void)vcSession:(id)a0 addParticipantWithID:(id)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSession:(id)a0 participantID:(id)a1 videoEnabled:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 spatialAudioSourceIDDidChange:(unsigned long long)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 didChangeMediaPriority:(unsigned char)a2 description:(id)a3;
- (id)sessionForStreamToken:(unsigned int)a0;
- (void)vcSession:(id)a0 participantID:(id)a1 audioPaused:(BOOL)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)vcSession:(id)a0 updateConfiguration:(id)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteAudioPausedDidChange:(BOOL)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteAudioEnabledDidChange:(BOOL)a2;
- (id)participantConfigFromXPCDictionary:(id)a0;
- (void)vcSession:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)vcSession:(id)a0 removeParticipantWithID:(id)a1 didSucceed:(BOOL)a2 error:(id)a3;

@end
