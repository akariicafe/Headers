@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
    id<AKAuthorizationClientProtocol> _contextManager;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)init;
- (void).cxx_destruct;
- (id)initWithListenerEndpoint:(id)a0 exportedInterface:(id)a1;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_connection;

@end
