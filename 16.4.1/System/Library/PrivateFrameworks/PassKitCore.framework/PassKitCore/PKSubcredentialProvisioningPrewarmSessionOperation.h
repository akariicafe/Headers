@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _operationWasCancelled;
}

- (void)performOperation;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)cancelOperation;
- (void)startPrewarming;
- (id)_manufacturerIdentifier;
- (BOOL)canCancelOperation;

@end
