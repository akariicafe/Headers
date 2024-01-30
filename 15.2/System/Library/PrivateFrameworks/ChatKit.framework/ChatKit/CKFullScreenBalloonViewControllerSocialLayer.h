@interface CKFullScreenBalloonViewControllerSocialLayer : CKFullScreenBalloonViewControllerPhone

- (BOOL)shouldShowVotingView;
- (BOOL)wantsWindowedPresentation;
- (BOOL)preserveModalPresentationStyle;
- (BOOL)constrainToPresentingVCBounds;
- (BOOL)forceWindowedPresentation;

@end
