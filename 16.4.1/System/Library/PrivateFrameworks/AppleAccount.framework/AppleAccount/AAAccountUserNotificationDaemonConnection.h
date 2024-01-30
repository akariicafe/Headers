@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AAAccountUserNotificationDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)initWithListenerEndpoint:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (id)_connection;
- (void).cxx_destruct;

@end
