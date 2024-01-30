@class NSXPCListenerEndpoint, NSString, NSXPCConnection, ACAccountStoreClientSideListener;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    ACAccountStoreClientSideListener *_clientSideListener;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (nonatomic) BOOL notificationsEnabled;

- (void)_locked_configureRemoteAccountStoreWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)remoteObjectProxy;
- (void)_setConnectionInterrupted;
- (id)initWithListenerEndpoint:(id)a0 delegate:(id)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_locked_connection:(id)a0 setNotificationsEnabled:(BOOL)a1;
- (id)_connection;
- (void)_setConnectionInvalidated;
- (void)_locked_connection:(id)a0 setEffectiveBundleID:(id)a1;

@end
