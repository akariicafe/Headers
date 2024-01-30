@class SBSwitcherModifier;

@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
- (id)_newMultitaskingModifier;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (long long)gestureType;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)initWithStartingEnvironmentMode:(long long)a0 multitaskingModifier:(id)a1;

@end
