@class SBAppLayout;

@interface SBDragAndDropGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    BOOL _floatingSwitcherVisible;
    SBAppLayout *_fullScreenAppLayout;
}

- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)a0 floatingSwitcherVisible:(BOOL)a1 fullScreenAppLayout:(id)a2;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;
- (id)handleSwitcherDropEvent:(id)a0;

@end
