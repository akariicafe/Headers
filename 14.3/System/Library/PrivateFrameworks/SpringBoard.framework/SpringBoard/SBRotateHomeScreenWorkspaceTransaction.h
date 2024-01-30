@class NSString, SBDismissOverlaysAnimationController;

@interface SBRotateHomeScreenWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
    SBDismissOverlaysAnimationController *_animationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)begin;
- (void).cxx_destruct;

@end
