@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioClientManager : NSObject {
    NSMutableDictionary *_clientList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;

- (id)handleNewClientWithXPCArguments:(id)a0 error:(id *)a1;
- (void)unregisterBlocksForService;
- (id)handleDisconnectWithXPCArguments:(id)a0;
- (void)handleMutedTalkerNotification:(unsigned int)a0;
- (void)registerForMutedTalkerNotfications;
- (id)handleRegisterMutedTalkerNotificationForAudioClient:(id)a0 error:(id *)a1;
- (void)secureMicrophoneEngagedNotification;
- (void)unregisterFromMutedTalkerNotfications;
- (id)init;
- (id)handleUnregisterMutedTalkerNotificationForAudioClient:(id)a0 error:(id *)a1;
- (void)registerBlocksForService;
- (void)dealloc;
- (id)getAudioClientWithProcessId:(id)a0 create:(BOOL)a1;

@end
