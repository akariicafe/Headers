@class FCCNotificationSuppressionStore, FCCXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface FCCNotificationSuppressionClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FCCNotificationSuppressionStore *_store;
    FCCXPCClient *_xpcClient;
}

- (id)initWithQueue:(id)a0 store:(id)a1 xpcClient:(id)a2;
- (void)addNotificationSuppressionRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)notificationsSuppressed;
- (void)removeNotificationSuppressionRequest:(id)a0 completion:(id /* block */)a1;
- (void)_removeNotificationSuppressionRequest:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_addNotificationSuppressionRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
