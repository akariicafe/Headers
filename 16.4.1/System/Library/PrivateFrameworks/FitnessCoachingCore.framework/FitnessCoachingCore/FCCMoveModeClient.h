@class FCCXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface FCCMoveModeClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FCCXPCClient *_xpcClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)_postMoveModeNotification:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 xpcClient:(id)a1;
- (void)postMoveModeNotification:(id)a0 completion:(id /* block */)a1;

@end
