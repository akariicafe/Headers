@class MCSession, NSString, NSMutableArray, MCPeerID;
@protocol RSPeerToPeerConnectionControllerDataSource, RSPeerToPeerConnectionControllerDelegate;

@interface RSPeerToPeerConnectionController : NSObject <MCSessionDelegate>

@property (retain, nonatomic) MCPeerID *localPeerID;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) NSMutableArray *alreadyConnectedPeerIDs;
@property (weak, nonatomic) id<RSPeerToPeerConnectionControllerDataSource> dataSource;
@property (weak, nonatomic) id<RSPeerToPeerConnectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)abort;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4;
- (void)prepareForConnection;
- (void)sendState:(id)a0 withInfo:(id)a1 toPeer:(id)a2;
- (void)attemptConnectionWithPeer:(id)a0 successBlock:(id /* block */)a1;
- (BOOL)_shouldInteractWithPeer:(id)a0;
- (id)_stateDataWithRequestType:(unsigned long long)a0 stateContent:(id)a1 info:(id)a2;
- (void)_sendData:(id)a0 toPeers:(id)a1;
- (void)requestState:(id)a0 fromPeer:(id)a1;
- (id)_connectedPeerWithDisplayName:(id)a0;

@end
