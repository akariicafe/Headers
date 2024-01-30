@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction

+ (BOOL)isValidForTransitionRequest:(id)a0;

- (BOOL)_canBeInterrupted;
- (void)_sendActivationResultWithError:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;

@end
