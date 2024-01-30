@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCXPCClientShared : AVConferenceXPCClient {
    NSObject<OS_dispatch_queue> *_registeredBlocksQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *registeredUUIDServiceBlocks;

- (id)init;
- (void)dealloc;
- (void)deregisterFromNotifications;
- (void)registerBlockWithUUID:(id)a0 service:(char *)a1 block:(id /* block */)a2;
- (void)deregisterWithUUID:(id)a0 service:(char *)a1;

@end
