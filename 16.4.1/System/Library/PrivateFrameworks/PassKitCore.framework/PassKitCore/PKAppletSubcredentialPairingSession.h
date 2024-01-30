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

- (void)didStartPairing;
- (void)didFinishFirstTransactionForSession:(id)a0 error:(id)a1;
- (void)didFinishPreWarmWithResult:(id)a0;
- (void)didFinishProbingWithBrandCode:(unsigned long long)a0 error:(id)a1;
- (void)keyPairingSession:(id)a0 didFinishPairingWithKey:(id)a1 trackingRequest:(id)a2 error:(id)a3;
- (id)prewarmWithManufacturerIdentifier:(id)a0;
- (id)probeTerminalForPairingStatus;
- (id)startPairingWithKeyDisplayName:(id)a0 pairingPassword:(id)a1 radioTechnologies:(unsigned long long)a2;
- (id)trackSubcredential:(id)a0 slotIdentifier:(id)a1 confidentialMailboxData:(id)a2 ephemeralPublicKey:(id)a3 withReceipt:(id)a4;

@end
