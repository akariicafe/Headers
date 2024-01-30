@interface SBRotateScenesWorkspaceTransaction : SBAppToAppWorkspaceTransaction

- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (BOOL)_shouldResignActiveForAnimation;

@end
