@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)onqueue_invalidate;
- (void)onqueue_connectionInterrupted;
- (void)dealloc;
- (void)onqueue_ensureXPCStarted;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)_activate;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)onqueue_activate;
- (id)exportedInterface;
- (void)invalidated;
- (void)onqueue_invalidated;
- (void)_invalidate;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)interrupted;
- (id)machServiceName;
- (void)onqueue_interrupted;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (id)remoteObjectInterface;
- (void)onqueue_ensureConnectionEstablished;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInvalidated;
- (void)connectionEstablished;

@end
