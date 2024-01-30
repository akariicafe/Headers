@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
    id<AKAuthorizationClientProtocol> _contextManager;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_connectionInvalidationHandler;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)a0 exportedInterface:(id)a1;
- (void)_connectionInterruptionHandler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
