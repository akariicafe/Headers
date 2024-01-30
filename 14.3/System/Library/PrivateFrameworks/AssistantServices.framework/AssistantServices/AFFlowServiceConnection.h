@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFFlowServiceConnection : NSObject {
    NSXPCConnection *_connection;
    unsigned long long _pendingTransactionCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)_init;
- (id)_connection;
- (void)_clearConnection;
- (void)invokeMethodOnRemoteWithBlock:(id /* block */)a0 onError:(id /* block */)a1;

@end
