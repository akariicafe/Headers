@interface VFXCore.PeerAdvertiserController : NSObject <MCNearbyServiceAdvertiserDelegate> {
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ advertiser;
    void /* unknown type, empty encoding */ onInitialReceive;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ didStart;
    void /* unknown type, empty encoding */ wantsToStart;
}

- (void)advertiser:(id)a0 didReceiveInvitationFromPeer:(id)a1 withContext:(id)a2 invitationHandler:(id /* block */)a3;
- (void)advertiser:(id)a0 didNotStartAdvertisingPeer:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
