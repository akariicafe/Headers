@class SBSwitcherModifier;

@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)_newMultitaskingModifier;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;
- (id)initWithStartingEnvironmentMode:(long long)a0 multitaskingModifier:(id)a1;

@end
