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

- (id /* block */)invalidationHandler;
- (id)exportedObject;
- (void)setRemoteObjectInterface:(id)a0;
- (id)remoteObjectInterface;
- (void)setExportedInterface:(id)a0;
- (id)_connection;
- (int)auditSessionIdentifier;
- (id)remoteObjectProxy;
- (id)initWithProtocol:(id)a0;
- (void)_invokeInterruptionHandlerForPromise:(id)a0;
- (void)setExportedObject:(id)a0;
- (void)setInterruptionHandler:(id /* block */)a0;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)description;
- (void)_sendInvocation:(id)a0 remoteInterface:(id)a1 remoteProxy:(id)a2 errorHandler:(id /* block */)a3;
- (id)_connectionForPromise:(id)a0;
- (void).cxx_destruct;
- (void)_invalidatePromise:(id)a0;
- (void)suspend;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (void)resume;
- (id)exportedInterface;
- (void)dealloc;
- (void)_finishPromise:(id)a0 withConnection:(id)a1 error:(id)a2;
- (int)processIdentifier;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)setInvalidationHandler:(id /* block */)a0;

@end
