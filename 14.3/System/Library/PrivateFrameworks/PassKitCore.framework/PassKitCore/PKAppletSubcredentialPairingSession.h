@class NSString, DAKeyPairingSession;
@protocol PKAppletSubcredentialPairingSessionDelegate;

@interface PKAppletSubcredentialPairingSession : PKDASession <DAKeyPairingDelegate>

@property (retain, nonatomic) DAKeyPairingSession *session;
@property (weak, nonatomic) id<PKAppletSubcredentialPairingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createSessionWithDelegate:(id)a0;

- (id)startPairingWithKeyDisplayName:(id)a0 pairingPassword:(id)a1;
- (void)didFinishPreWarmWithResult:(id)a0;
- (void)didStartPairing;
- (void)keyPairingSession:(id)a0 didFinishPairingWithKey:(id)a1 trackingRequest:(id)a2 error:(id)a3;
- (void)didFinishFirstTransactionForSession:(id)a0 error:(id)a1;
- (void)didFinishProbingWithResult:(BOOL)a0;
- (id)trackSubcredential:(id)a0 withReceipt:(id)a1;
- (id)probeTerminalForPairingStatus;
- (id)prewarmWithIssuerName:(id)a0;

@end
