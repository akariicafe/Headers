@interface SBTransientOverlayDismissWorkspaceTransaction : SBMainWorkspaceTransaction

+ (BOOL)isValidForTransitionRequest:(id)a0;

- (void)_begin;
- (void)_didComplete;
- (void)_sendActivationResultWithError:(id)a0;

@end
