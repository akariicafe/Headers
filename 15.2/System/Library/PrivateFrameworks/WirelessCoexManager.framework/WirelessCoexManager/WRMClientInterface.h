@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface WRMClientInterface : NSObject {
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
    id /* block */ mNotificationBlock;
}

- (id)init;
- (void)unregisterClient;
- (void)dealloc;
- (void)registerClient:(int)a0 queue:(id)a1 notificationHandler:(id /* block */)a2;
- (void)unregisterClientWithNotificationBlockRelease;

@end
