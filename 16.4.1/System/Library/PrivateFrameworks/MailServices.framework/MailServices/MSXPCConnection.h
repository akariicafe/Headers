@class Protocol, EFPromise, NSXPCInterface, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface MSXPCConnection : NSXPCConnection {
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    EFPromise *_connectionPromise;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    long long _resumeCount;
    _Atomic BOOL _locallyInvalidated;
}

@property (readonly, retain, nonatomic) Protocol *protocol;
@property (nonatomic) BOOL shouldLaunchMobileMail;

- (id)initWithProtocol:(id)a0;
- (id)remoteObjectInterface;
- (int)processIdentifier;
- (void)setRemoteObjectInterface:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)exportedInterface;
- (void)suspend;
- (id /* block */)invalidationHandler;
- (void)setInvalidationHandler:(id /* block */)a0;
- (unsigned int)effectiveUserIdentifier;
- (void)dealloc;
- (int)auditSessionIdentifier;
- (void)setInterruptionHandler:(id /* block */)a0;
- (unsigned int)effectiveGroupIdentifier;
- (void)setExportedObject:(id)a0;
- (id)_connectionForPromise:(id)a0;
- (id /* block */)interruptionHandler;
- (void)_finishPromise:(id)a0 withConnection:(id)a1 error:(id)a2;
- (void)_invalidatePromise:(id)a0;
- (void)_invokeInterruptionHandlerForPromise:(id)a0;
- (void)setExportedInterface:(id)a0;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (id)remoteObjectProxy;
- (id)description;
- (void)invalidate;
- (id)exportedObject;
- (void)_queue_invokeInvalidationHandler;
- (id)_connection;
- (void).cxx_destruct;
- (void)resume;
- (void)_sendInvocation:(id)a0 remoteInterface:(id)a1 remoteProxy:(id)a2 errorHandler:(id /* block */)a3;

@end
