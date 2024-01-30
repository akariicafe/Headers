@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier {
    BOOL _hasPerformedInitialSetup;
}

- (id)handleMainTransitionEvent:(id)a0;
- (id)gestureModifierForGestureEvent:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (void)_setup;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)lowEndHardwareModifier;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)handleEvent:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (void)setDelegate:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)handleRemovalEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)multitaskingModifier;
- (id)_reduceMotionModifier;
- (void)_handleTransitionEvent:(id)a0;
- (id)handleInlineTransitionEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)floorModifier;
- (id)handleReduceMotionChangedEvent:(id)a0;
- (void)_updateMultitaskingModifierWithEvent:(id)a0;
- (void)_updateFloorModifierWithTransitionEvent:(id)a0;
- (void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)a0;
- (void)_updateLowEndHardwareModifier;
- (id)transitionModifierForInlineTransitionEvent:(id)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (id)_swipeToKillModifierKeyForAppLayout:(id)a0;
- (id)handleInsertionEvent:(id)a0;
- (void)verifyInternalIntegrityAfterHandlingEvent:(id)a0;

@end
