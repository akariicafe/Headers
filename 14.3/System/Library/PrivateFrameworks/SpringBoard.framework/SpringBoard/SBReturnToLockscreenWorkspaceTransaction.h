@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {
    SBApplicationSceneEntity *_fromAppSceneEntity;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
}

- (id)_setupAnimation;
- (void).cxx_destruct;
- (void)_didComplete;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(BOOL)a0;
- (id)initWithTransitionRequest:(id)a0 toLockScreenEnvironment:(id)a1;
- (id)debugDescription;

@end
