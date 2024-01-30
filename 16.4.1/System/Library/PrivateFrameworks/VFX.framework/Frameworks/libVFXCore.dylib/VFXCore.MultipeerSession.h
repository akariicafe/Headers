@interface VFXCore.MultipeerSession : NSObject <MCSessionDelegate> {
    void /* unknown type, empty encoding */ mcSession;
    void /* unknown type, empty encoding */ localPeer;
    void /* unknown type, empty encoding */ controllers;
    void /* unknown type, empty encoding */ onSessionWillDisconnectEventSource;
    void /* unknown type, empty encoding */ onClientDeclineEventSource;
    void /* unknown type, empty encoding */ discoveryInfoByID;
    void /* unknown type, empty encoding */ _peers;
}

- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
