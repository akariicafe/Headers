@class SBAppLayout;

@interface SBContinuousExposeDragAndDropGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_appLayout;
}

- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)initWithStartingEnvironmentMode:(long long)a0 appLayout:(id)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end
