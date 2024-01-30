@class NSString, MCNearbyServiceBrowser;

@interface RSPeerToPeerClientController : RSPeerToPeerConnectionController <MCNearbyServiceBrowserDelegate>

@property (retain, nonatomic) MCNearbyServiceBrowser *serviceBrowser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)abort;
- (void)browser:(id)a0 didNotStartBrowsingForPeers:(id)a1;
- (void)browser:(id)a0 foundPeer:(id)a1 withDiscoveryInfo:(id)a2;
- (void)browser:(id)a0 lostPeer:(id)a1;
- (void)prepareForConnection;

@end
