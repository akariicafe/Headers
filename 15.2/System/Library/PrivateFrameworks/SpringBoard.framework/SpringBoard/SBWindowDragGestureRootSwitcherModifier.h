@class SBAppLayout;

@interface SBWindowDragGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    SBAppLayout *_currentAppLayout;
    SBAppLayout *_currentFloatingAppLayout;
    long long _currentFloatingConfiguration;
    struct CGPoint { double x; double y; } _gestureVelocity;
}

- (id)handleTransitionEvent:(id)a0;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)handleGestureEvent:(id)a0;
- (id)initWithSelectedAppLayout:(id)a0 currentAppLayout:(id)a1 currentFloatingAppLayout:(id)a2 currentFloatingConfiguration:(long long)a3;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end
