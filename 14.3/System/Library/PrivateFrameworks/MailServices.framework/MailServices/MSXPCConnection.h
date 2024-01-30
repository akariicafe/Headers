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
    unsigned int _state;
}

@property (readonly, retain, nonatomic) Protocol *protocol;
@property (nonatomic) BOOL shouldLaunchMobileMail;

- (void)setExportedInterface:(id)a0;
- (int)auditSessionIdentifier;
- (void).cxx_destruct;
- (void)setInterruptionHandler:(id /* block */)a0;
- (id)initWithProtocol:(id)a0;
- (void)dealloc;
- (id)remoteObjectProxy;
- (id)exportedObject;
- (unsigned int)effectiveUserIdentifier;
- (int)processIdentifier;
- (id)description;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)exportedInterface;
- (id /* block */)interruptionHandler;
- (id)_connection;
- (id)_connectionForPromise:(id)a0;
- (void)setExportedObject:(id)a0;
- (unsigned int)effectiveGroupIdentifier;
- (void)resume;
- (void)_finishPromise:(id)a0 withConnection:(id)a1 error:(id)a2;
- (void)setInvalidationHandler:(id /* block */)a0;
- (id)remoteObjectInterface;
- (void)setRemoteObjectInterface:(id)a0;
- (void)_invalidatePromise:(id)a0;
- (void)_invokeInterruptionHandlerForPromise:(id)a0;
- (void)suspend;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)invalidate;
- (void)_sendInvocation:(id)a0 remoteInterface:(id)a1 remoteProxy:(id)a2 errorHandler:(id /* block */)a3;
- (id /* block */)invalidationHandler;

@end
