@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDInGameAnalytics : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)interface;
+ (id)_sharedInstance;
+ (void)gamePlayDidBeginWithCompletion:(id /* block */)a0;
+ (void)gamePlayDidEndWithReason:(long long)a0 andSessionID:(id)a1;
+ (void)sendHeartbeatForSessionWithID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_connect;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
