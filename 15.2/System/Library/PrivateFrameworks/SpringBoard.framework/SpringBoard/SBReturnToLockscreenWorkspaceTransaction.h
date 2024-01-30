@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {
    SBApplicationSceneEntity *_fromAppSceneEntity;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
}

- (void)_didComplete;
- (void)_animationDidFinish;
- (id)initWithTransitionRequest:(id)a0 toLockScreenEnvironment:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)_setupAnimation;
- (void)_animationWillBegin:(BOOL)a0;
- (id)debugDescription;

@end
