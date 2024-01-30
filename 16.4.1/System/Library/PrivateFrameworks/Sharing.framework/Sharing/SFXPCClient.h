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

- (void)onqueue_connectionInvalidated;
- (id)remoteObjectInterface;
- (void)onqueue_ensureXPCStarted;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)onqueue_connectionInterrupted;
- (void)invalidated;
- (id)exportedInterface;
- (void)interrupted;
- (void)onqueue_connectionEstablished;
- (void)_activate;
- (void)onqueue_invalidated;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)dealloc;
- (void)onqueue_interrupted;
- (void)onqueue_ensureConnectionEstablished;
- (void)connectionEstablished;
- (void)onqueue_activate;
- (id)init;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)onqueue_invalidate;

@end
