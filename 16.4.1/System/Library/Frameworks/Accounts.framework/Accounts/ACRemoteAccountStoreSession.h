@class NSXPCListenerEndpoint, NSString, NSXPCConnection, ACAccountStoreClientSideListener;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    ACAccountStoreClientSideListener *_clientSideListener;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (nonatomic) BOOL notificationsEnabled;

- (void)_locked_connection:(id)a0 setNotificationsEnabled:(BOOL)a1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_setConnectionInvalidated;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_setConnectionInterrupted;
- (void)_locked_configureRemoteAccountStoreWithConnection:(id)a0;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)a0 delegate:(id)a1;
- (id)init;
- (id)remoteObjectProxy;
- (id)_connection;
- (void)_locked_connection:(id)a0 setEffectiveBundleID:(id)a1;
- (void).cxx_destruct;

@end
