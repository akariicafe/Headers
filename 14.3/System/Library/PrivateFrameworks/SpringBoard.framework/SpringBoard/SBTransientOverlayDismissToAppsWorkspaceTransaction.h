@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction

+ (BOOL)isValidForTransitionRequest:(id)a0;

- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_sendActivationResultWithError:(id)a0;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;

@end
