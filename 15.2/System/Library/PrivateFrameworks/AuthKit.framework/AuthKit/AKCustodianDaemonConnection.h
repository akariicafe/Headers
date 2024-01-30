@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AKCustodianDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithListenerEndpoint:(id)a0;
- (void)_connectionInvalidationHandler;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_connectionInterruptionHandler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
