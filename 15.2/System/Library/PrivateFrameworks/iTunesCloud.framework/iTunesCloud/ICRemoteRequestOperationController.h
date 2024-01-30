@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICRemoteRequestOperationController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _numberOfActiveRequests;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;
}

@property (class, readonly, nonatomic) ICRemoteRequestOperationController *sharedRemoteRequestOperationController;

- (void)_clientConnectionInvalidationTimerDidExpire;
- (void)_scheduleInvalidationOfClientConnection;
- (void)_cancelClientConnectionInvalidationTimer;
- (void)performRemoteRequestOperationWithExecutionContext:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_willBeginExecutingRemoteRequestOperation;
- (id)_init;
- (void)_didEndExecutingRemoteRequestOperation;
- (void)_invalidateClientConnection;
- (id)_clientConnection;

@end
