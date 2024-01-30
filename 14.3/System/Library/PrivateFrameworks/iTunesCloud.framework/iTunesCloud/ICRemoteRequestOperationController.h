@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICRemoteRequestOperationController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _numberOfActiveRequests;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;
}

@property (class, readonly) ICRemoteRequestOperationController *sharedRemoteRequestOperationController;

- (void)_invalidateClientConnection;
- (void).cxx_destruct;
- (id)_clientConnection;
- (id)_init;
- (void)_clientConnectionInvalidationTimerDidExpire;
- (void)_scheduleInvalidationOfClientConnection;
- (void)_willBeginExecutingRemoteRequestOperation;
- (void)_cancelClientConnectionInvalidationTimer;
- (void)_didEndExecutingRemoteRequestOperation;
- (void)performRemoteRequestOperationWithExecutionContext:(id)a0 completionHandler:(id /* block */)a1;

@end
