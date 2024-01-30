@class NSXPCInterface, MSXPCConnection;

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _selectorLock;
    struct __CFDictionary { } *_knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    id /* block */ _errorHandler;
}

@property (retain, nonatomic, setter=___setNSXPCRemoteObjectProxy:) id ___nsxpc_remoteObjectProxy;

- (BOOL)conformsToProtocol:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithConnection:(id)a0 interface:(id)a1 errorHandler:(id /* block */)a2;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
