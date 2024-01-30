@interface ICQUpgradePhotosOptimizeEnableFlowManager : ICQUpgradeFlowManager

- (BOOL)needsNetwork;
- (void)_performPageButtonActionWithParameters:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldPresentRemoteFlow;

@end
