@class Protocol, NSString, NSObject, NSMutableArray;
@protocol NSXPCProxyCreating, OS_os_log, OS_dispatch_queue, EMRemoteProxyGenerator;

@interface EMRemoteConnection : NSObject <EFLoggable, EMRemoteConnectionRecoveryAssertionDelegate, EMXPCProxyCreating> {
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFDictionary { } *_knownSelectors;
    NSMutableArray *_resetHandlers;
    NSMutableArray *_recoveryHandlers;
    NSMutableArray *_pendingReattempts;
    id<NSXPCProxyCreating> _currentProxy;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _proxyLock;
    BOOL _waitingForRecovery;
    _Atomic unsigned int _activeVouchers;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) id<EMRemoteProxyGenerator> generator;
@property (readonly) Protocol *protocol;
@property (readonly) id reattemptingRemoteObjectProxy;
@property (readonly) id remoteObjectProxy;
@property (readonly) BOOL prefersImmediateActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)proxy;
- (void)dealloc;
- (void)recover;
- (void).cxx_destruct;
- (void)reset;
- (id)_methodSignatureForRemoteSelector:(SEL)a0;
- (BOOL)_respondsToRemoteSelector:(SEL)a0;
- (void)_reattemptInvocation:(id)a0 withProxy:(id)a1 originalError:(id)a2;
- (void)_sendInvocation:(id)a0 withProxy:(id)a1;
- (void)addRecoveryHandler:(id /* block */)a0;
- (void)addResetHandler:(id /* block */)a0;
- (id)initWithProtocol:(id)a0 proxyGenerator:(id)a1;
- (id)proxyCreator:(id *)a0;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(id /* block */)a0;
- (id)requestRecoveryAssertion;
- (void)voucherInitialized;
- (void)voucherInvalidated;

@end
