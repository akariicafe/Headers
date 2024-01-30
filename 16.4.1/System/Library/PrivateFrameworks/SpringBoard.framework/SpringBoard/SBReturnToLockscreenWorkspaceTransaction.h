@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {
    SBApplicationSceneEntity *_fromAppSceneEntity;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
}

- (void)_animationWillBegin:(BOOL)a0;
- (id)_setupAnimation;
- (void)_didComplete;
- (id)debugDescription;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_animationDidFinish;
- (id)initWithTransitionRequest:(id)a0 toLockScreenEnvironment:(id)a1;
- (void).cxx_destruct;

@end
