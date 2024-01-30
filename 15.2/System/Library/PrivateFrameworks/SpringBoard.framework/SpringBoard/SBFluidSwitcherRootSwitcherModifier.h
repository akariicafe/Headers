@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier {
    BOOL _hasPerformedInitialSetup;
}

- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)a0;
- (id)handleRemovalEvent:(id)a0;
- (void)_setup;
- (id)lowEndHardwareModifier;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (void)setDelegate:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleEvent:(id)a0;
- (id)floorModifierForGestureEvent:(id)a0;
- (id)_handleEvent:(id)a0;
- (id)gestureModifierForGestureEvent:(id)a0;
- (id)shelfModifierForTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (id)handleInsertionEvent:(id)a0;
- (id)multitaskingModifier;
- (id)handleHighlightEvent:(id)a0;
- (id)_reduceMotionModifier;
- (id)handleGestureEvent:(id)a0;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (id)floorModifier;
- (id)highlightModifierForHighlightEvent:(id)a0;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)a0;
- (id)handleReduceMotionChangedEvent:(id)a0;
- (void)_updateMultitaskingModifierWithEvent:(id)a0;
- (void)_updateFloorModifierWithTransitionEvent:(id)a0;
- (void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)a0;
- (void)_updateLowEndHardwareModifier;
- (void)_updateTransientlyVisibleSlideOverTongueModifierWithEvent:(id)a0;
- (void)_updateFloorModifierWithGestureEvent:(id)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (id)_swipeToKillModifierKeyForAppLayout:(id)a0;
- (id)_highlightModifierKeyForAppLayout:(id)a0;
- (id)handleUpdateFocusedAppLayoutEvent:(id)a0;
- (void)verifyInternalIntegrityAfterHandlingEvent:(id)a0;
- (void)_updateFloorModifierWithProposedFloorModifier:(id)a0;
- (id)transientlyVisibleSlideOverTongueModifierForEvent:(id)a0;
- (id)transitionModifierForInlineTransitionEvent:(id)a0;
- (id)transientlyVisibleSlideOverTongueModifier;

@end
