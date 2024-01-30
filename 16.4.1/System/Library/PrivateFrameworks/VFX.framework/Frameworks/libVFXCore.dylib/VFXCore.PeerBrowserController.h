@interface VFXCore.PeerBrowserController : NSObject <MCNearbyServiceBrowserDelegate> {
    void /* unknown type, empty encoding */ _availablePeers;
    void /* unknown type, empty encoding */ _livePeers;
    void /* unknown type, empty encoding */ _testingPeers;
    void /* unknown type, empty encoding */ browser;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ _currentState;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ onConnectionRequested;
}

- (void)browser:(id)a0 didNotStartBrowsingForPeers:(id)a1;
- (void)browser:(id)a0 foundPeer:(id)a1 withDiscoveryInfo:(id)a2;
- (void)browser:(id)a0 lostPeer:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
