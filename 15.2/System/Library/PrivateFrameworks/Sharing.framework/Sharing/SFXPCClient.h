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

- (void)onqueue_ensureXPCStarted;
- (id)remoteObjectInterface;
- (void)onqueue_interrupted;
- (void)onqueue_activate;
- (void)onqueue_connectionEstablished;
- (void)onqueue_ensureConnectionEstablished;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)_invalidate;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_invalidated;
- (void)onqueue_invalidate;
- (void)onqueue_connectionInterrupted;
- (void)connectionEstablished;
- (void)invalidated;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_activate;
- (id)exportedInterface;
- (void)dealloc;
- (void)interrupted;

@end
