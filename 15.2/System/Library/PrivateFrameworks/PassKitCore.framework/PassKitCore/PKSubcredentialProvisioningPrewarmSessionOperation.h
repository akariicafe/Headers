@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _operationWasCancelled;
}

- (void)performOperation;
- (void)startPrewarming;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (id)issuerName;
- (BOOL)canCancelOperation;
- (void)cancelOperation;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;

@end
