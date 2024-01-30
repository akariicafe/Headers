@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioClientManager : NSObject {
    NSMutableDictionary *_clientList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;

- (void)registerBlocksForService;
- (void)dealloc;
- (id)init;
- (id)getAudioClientWithProcessId:(id)a0 create:(BOOL)a1;
- (id)handleDisconnectWithXPCArguments:(id)a0;
- (void)handleMutedTalkerNotification:(unsigned int)a0;
- (id)handleNewClientWithXPCArguments:(id)a0 error:(id *)a1;
- (id)handleRegisterMutedTalkerNotificationForAudioClient:(id)a0 error:(id *)a1;
- (id)handleUnregisterMutedTalkerNotificationForAudioClient:(id)a0 error:(id *)a1;
- (void)registerForMutedTalkerNotfications;
- (void)secureMicrophoneEngagedNotification;
- (void)unregisterBlocksForService;
- (void)unregisterFromMutedTalkerNotfications;

@end
