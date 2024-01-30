@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _operationWasCancelled;
}

- (BOOL)canCancelOperation;
- (void)startPrewarming;
- (void)performOperation;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (id)issuerName;
- (void)cancelOperation;

@end
