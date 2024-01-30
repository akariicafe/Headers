@class NSString, NSXPCListener, NSMutableArray;
@protocol TCSServerXPC;

@interface TCSServer : NSObject <TCSServerXPC, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    NSMutableArray *_connections;
}

@property (weak, nonatomic) id<TCSServerXPC> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeConnection:(id)a0;
- (void)_addConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)callStatusChanged:(id)a0;
- (id)init;
- (void)disconnectCall:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasValidConnection;
- (void)_enumerateConnectionsWithBlock:(id /* block */)a0;
- (void)callConnected:(id)a0;
- (void)ensureUplinkMuted;
- (void)getCall:(id /* block */)a0;
- (void)getLogEntryForCallWithUniqueProxyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)queryIsTinCannable:(id)a0;
- (void)remoteUplinkMuteChanged:(id)a0;
- (void)sessionViewControllerViewDidAppear;
- (void)setUplinkMuted:(BOOL)a0 for:(id)a1 completion:(id /* block */)a2;

@end
