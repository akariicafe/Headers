@class NWPath, NEIKEv2Session, NSArray, NWPathEvaluator, NEIKEv2Server, NSDictionary, NEIKEv2MOBIKE, NSObject, NEUserNotification, NWResolver, NEIKEv2Rekey;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider

@property (retain) NSArray *ikeConfig;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;
@property (retain) NSDictionary *options;
@property struct NEVirtualInterface_s { } *virtualInterface;
@property BOOL isIfCellular;
@property BOOL hasNAT;
@property (retain) NEIKEv2Server *server;
@property (retain) NWResolver *resolver;
@property (retain) NSObject<OS_dispatch_source> *resolverWaitTimer;
@property (retain) NEIKEv2Rekey *rekey;
@property (retain) NSObject<OS_dispatch_semaphore> *getSocketSemaphore;
@property (retain) NEIKEv2MOBIKE *mobikeHandle;
@property (copy) id /* block */ startTunnelCompletionHandler;
@property (copy) id /* block */ stopTunnelCompletionHandler;
@property (copy) id /* block */ dnsResolverCompletionHandler;
@property BOOL dispose;
@property long long tunnelKind;
@property BOOL sessionDidConnect;
@property BOOL mobikeCapable;
@property (retain) NWPath *path;
@property BOOL authenticationPrompted;
@property (retain) NEUserNotification *g_notification;
@property BOOL isObserving;
@property (retain) NEIKEv2Session *session;
@property unsigned long long ifIndex;
@property long long pathStatus;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property unsigned int flags;
@property (retain) NWPathEvaluator *scopedPathEvaluator;

- (void)wake;
- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)setTunnelNetworkSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)reset:(BOOL)a0;
- (void)dealloc;
- (id)description;
- (void)observerHelperHandler:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)stringForTunnelKind;
- (void)ignoreSigPipe;
- (void)invokeCancelTunnel:(int)a0;
- (BOOL)NEIKEv2ProviderAuthenticate:(id)a0;
- (int)tunnelBringup;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resolveServerAddressIfNeeded:(id /* block */)a0;
- (void)startIKEv2TunnelWithOptions:(id)a0;
- (long long)tunnelTeardown;
- (void)stopIKEv2TunnelWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)tryAlternateServerAddresses;
- (void)watchIKESocketChange;
- (void)startRekeyTimer:(BOOL)a0;
- (void)handleAdditionalServerAddressesNotification:(id)a0;
- (int)handleRedirectNotification:(id)a0;
- (void)setupIKEv2CallbackBlocks;
- (void)startTunnelWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopTunnelWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)invokeStartTunnelCompletionHandler:(id)a0;
- (void)handleInterfaceDown;
- (void)handleInterfaceChange:(BOOL)a0;
- (void)handleDNSResolution;
- (void)handleConfigChange;
- (void)handleDefaultPathChange;
- (void)handleScopedPathChange;
- (id)createPacketTunnelNetworkSettings;
- (void)wakeIKEv2;

@end
