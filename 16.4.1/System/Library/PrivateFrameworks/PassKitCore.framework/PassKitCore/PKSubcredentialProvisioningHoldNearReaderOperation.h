@class NSString;

@interface PKSubcredentialProvisioningHoldNearReaderOperation : PKSubcredentialProvisioningPairingSessionOperation <PKAppletSubcredentialPairingSessionDelegate> {
    BOOL _operationWasCancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performOperation;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithSubcredential:(id)a1 registrationData:(id)a2;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)a0;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithError:(id)a1;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)cancelOperation;
- (BOOL)canCancelOperation;
- (void)startPairing;

@end
