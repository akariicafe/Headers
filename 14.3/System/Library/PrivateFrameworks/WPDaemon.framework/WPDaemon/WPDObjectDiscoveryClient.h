@class WPDObjectDiscoveryData, WPDObjectDiscoveryManager, WPDSearchPartyAgent;

@interface WPDObjectDiscoveryClient : WPDClient

@property BOOL pendingSent;
@property (weak) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (retain) WPDSearchPartyAgent *spAgent;
@property (readonly) WPDObjectDiscoveryData *keyAddressAndPayload;
@property unsigned long long keyRequestID;
@property unsigned long long tokenRequestID;

- (void)stopSPBeaconing;
- (void)stopAdvertising:(id)a0;
- (void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)a0;
- (void)sendTestRequest:(id)a0;
- (void).cxx_destruct;
- (void)notifyClientObjectDiscoveryStateChange:(long long)a0;
- (void)dealloc;
- (void)updateSPNearbyTokens;
- (void)registerWithDaemon:(id)a0 forProcess:(id)a1 machName:(id)a2 holdVouchers:(long long)a3;
- (id)generateStateDump;
- (void)notifyClientStateChange:(long long)a0 Restricted:(BOOL)a1;
- (void)endTestMode;
- (void)completeSPBeaconingWithSuccess:(BOOL)a0;
- (void)completeSPNearbyTockensWithSuccess:(BOOL)a0;
- (id)initWithXPCConnection:(id)a0 server:(id)a1;
- (void)destroy;
- (void)startAdvertising:(id)a0;
- (void)updateSPBeaconing;
- (void)startSPBeaconing;

@end
