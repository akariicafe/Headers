@class NSString;

@interface PKSubcredentialProvisioningPairingSessionOperation : PKSubcredentialProvisioningSessionOperation <PKAppletSubcredentialPairingSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pairingSession;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)a0;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)a0 withError:(id)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithSubcredential:(id)a1 registrationData:(id)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishProbingTerminalWithResult:(BOOL)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithError:(id)a1;

@end
