@interface NewsUI2.LocalDraftsDeviceListener : NSObject <MCNearbyServiceBrowserDelegate, MCSessionDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate> {
    void /* unknown type, empty encoding */ localFiles;
    void /* unknown type, empty encoding */ deviceInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ previewServiceType;
    void /* unknown type, empty encoding */ myPeerId;
    void /* unknown type, empty encoding */ serviceBrowser;
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
}

- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4;
- (void)browser:(id)a0 didNotStartBrowsingForPeers:(id)a1;
- (void)browser:(id)a0 foundPeer:(id)a1 withDiscoveryInfo:(id)a2;
- (void)browser:(id)a0 lostPeer:(id)a1;
- (void)session:(id)a0 didReceiveCertificate:(id)a1 fromPeer:(id)a2 certificateHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
