@class NSString, NSMutableSet, NSHashTable, FBScene;

@interface UIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding> {
    NSHashTable *_assertions;
    NSMutableSet *_eligibleScenes;
    FBScene *_updatingScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)amendSceneSettings:(id)a0 forScene:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_setDeactivationReasons:(unsigned long long)a0 onScene:(id)a1 withSettings:(id)a2 reason:(id)a3;
- (id)succinctDescriptionBuilder;
- (id)assertions;
- (void)removeAssertion:(id)a0;
- (id)newAssertionWithReason:(long long)a0;
- (void)_trackScene:(id)a0;
- (void)addAssertion:(id)a0 withTransitionContext:(id)a1;
- (void)endTrackingScene:(id)a0;
- (BOOL)_isEligibleScene:(id)a0;
- (unsigned long long)_deactivationReasonsForScene:(id)a0 withSettings:(id)a1;
- (BOOL)_areEligibleSettings:(id)a0;
- (void)_untrackScene:(id)a0;
- (void)beginTrackingScene:(id)a0;
- (id)eligibleScenes;
- (id)succinctDescription;
- (BOOL)_isEligibleScene:(id)a0 withSettings:(id)a1;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_updateScenesWithTransitionContext:(id)a0 reason:(id)a1;
- (void).cxx_destruct;

@end
