@class NSXPCInterface, MSXPCConnection;

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _selectorLock;
    struct __CFDictionary { } *_knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    id /* block */ _errorHandler;
}

@property (retain, nonatomic, setter=___setNSXPCRemoteObjectProxy:) id ___nsxpc_remoteObjectProxy;

- (id)remoteObjectProxy;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithConnection:(id)a0 interface:(id)a1 errorHandler:(id /* block */)a2;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
