@class SBMainDisplaySceneLayoutViewController;

@interface SBSceneLayoutWhitePointAdaptationController : NSObject {
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
}

+ (id)sharedInstance;
+ (id)_defaultAnimationSettings;
+ (double)_defaultAnimationDuration;
+ (BOOL)_isInteractiveUpdateEnabled;
+ (id)_harmonySettings;

- (void)updateWhitePointAdaptationStrengthWithFromApplicationSceneEntities:(id)a0 toApplicationSceneEntities:(id)a1 fromPercentage:(double)a2 toPercentage:(double)a3 animationSettings:(id)a4 interactive:(BOOL)a5;
- (void)updateWhitePointAdaptationStrength;
- (void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)a0 animationTransitionContext:(id)a1;
- (void)updateWhitePointAdaptationStrengthWithAnimationSettings:(id)a0;
- (void).cxx_destruct;
- (id)_applicationSceneHandleForLayoutElement:(id)a0;
- (void)_updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)a0 fromPercentage:(double)a1 toPercentage:(double)a2 animationSettings:(id)a3 cancelled:(BOOL)a4 interactive:(BOOL)a5;
- (void)_updateWhitePointAdaptationStrengthWithAnimationSettings:(id)a0;
- (id)init;
- (id)_deviceSceneHandlesFromEntities:(id)a0;
- (id)_whitePointAdaptivityStylesForLayoutState;
- (void)_updateWhitePointAdaptationStrengthWithFromApplicationScenes:(id)a0 toApplicationScenes:(id)a1 fromPercentage:(double)a2 toPercentage:(double)a3 animationSettings:(id)a4 interactive:(BOOL)a5;
- (long long)_whitePointAdaptivityStyleForLayoutElement:(id)a0;

@end
