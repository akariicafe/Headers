@protocol CBPairingAgentParentDelegate, CBPairingAgentDelegate;

@interface CBPairingAgent : NSObject

@property (weak, nonatomic) id<CBPairingAgentParentDelegate> parentManager;
@property (weak, nonatomic) id<CBPairingAgentDelegate> delegate;
@property (nonatomic) BOOL useOOBMode;

- (void)handlePairingCompleted:(id)a0;
- (void)dealloc;
- (id)initWithParentManager:(id)a0;
- (void)updateRegistration;
- (void)pairPeer:(id)a0;
- (void)unpairPeer:(id)a0 options:(id)a1;
- (BOOL)isPeerCloudPaired:(id)a0;
- (BOOL)isPeerPaired:(id)a0;
- (void)unpairPeer:(id)a0;
- (void)handlePairingRequested:(id)a0;
- (BOOL)isPeerMagicPaired:(id)a0;
- (id)retrievePairedPeers;
- (void)setOOBPairingEnabled:(BOOL)a0 forPeer:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)pairPeer:(id)a0 useMITM:(BOOL)a1;
- (void)handlePairingMessage:(unsigned short)a0 args:(id)a1;
- (id)retrieveOOBDataForPeer:(id)a0;
- (void)handleUnpaired:(id)a0;
- (void)respondToPairingRequest:(id)a0 type:(long long)a1 accept:(BOOL)a2 data:(id)a3;
- (void)pairPeer:(id)a0 options:(id)a1;

@end
