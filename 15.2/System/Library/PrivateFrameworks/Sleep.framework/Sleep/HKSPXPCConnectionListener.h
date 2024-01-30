@class NSXPCListener, NSArray, HKSPXPCClient, HKSPXPCConnectionInfo, NSMutableSet, NSString;
@protocol HKSPXPCConnectionListenerDelegate;

@interface HKSPXPCConnectionListener : NSObject <NSXPCListenerDelegate, BSDescriptionProviding>

@property (readonly, nonatomic) HKSPXPCConnectionInfo *connectionInfo;
@property (readonly, nonatomic) NSXPCListener *connectionListener;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } clientLock;
@property (readonly, nonatomic) NSMutableSet *connectedClientSet;
@property (weak, nonatomic) id<HKSPXPCConnectionListenerDelegate> delegate;
@property (readonly, nonatomic) NSArray *connectedClients;
@property (readonly, nonatomic) HKSPXPCClient *currentClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listenerWithConnectionInfo:(id)a0;

- (void)startListening;
- (void)removeClientConnection:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)performRemoteBlockOnClients:(id /* block */)a0;
- (id)_currentClientForConnection:(id)a0;
- (void)_didInterruptConnection;
- (void)performRemoteBlockOnClients:(id /* block */)a0 passingTest:(id /* block */)a1;
- (void)_didInvalidateConnection:(id)a0;
- (void)addClientConnection:(id)a0 clientLink:(id)a1;
- (id)_clientIdentifierProviderForClientLink:(id)a0;
- (id)succinctDescription;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithConnectionInfo:(id)a0;
- (id)_clientWithConnection:(id)a0 clientLink:(id)a1;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)performRemoteBlock:(id /* block */)a0 onClient:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (id)connectedClientsWithPID:(int)a0;
- (id)initWithConnectionInfo:(id)a0 connectionListener:(id)a1;
- (void)_lock_logConnectedClients;

@end
