@class MCSession, NSString, MCNearbyServiceAdvertiser, MCPeerID;

@interface DEDRequestAdvertiser : NSObject <MCSessionDelegate, MCNearbyServiceAdvertiserDelegate>

@property (retain) MCSession *session;
@property (retain) MCPeerID *peerID;
@property (retain) MCNearbyServiceAdvertiser *advertiser;
@property (retain, nonatomic) NSString *hostIdentifier;
@property (copy, nonatomic) id /* block */ onPeerJoin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)advertiser:(id)a0 didReceiveInvitationFromPeer:(id)a1 withContext:(id)a2 invitationHandler:(id /* block */)a3;
- (id)displayName;
- (void)sendRecord:(id)a0 toPeer:(id)a1;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4;
- (void)broadcastRecord:(id)a0;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3;
- (id)encodeRequestRecordAsJSON:(id)a0;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2;
- (void)stop;
- (void)start;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void).cxx_destruct;

@end
