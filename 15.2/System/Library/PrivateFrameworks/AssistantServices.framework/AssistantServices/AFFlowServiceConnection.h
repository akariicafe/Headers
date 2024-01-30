@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFFlowServiceConnection : NSObject {
    NSXPCConnection *_connection;
    unsigned long long _pendingTransactionCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedConnection;

- (void)_clearConnection;
- (id)_connection;
- (void)invokeMethodOnRemoteWithBlock:(id /* block */)a0 onError:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_init;

@end
