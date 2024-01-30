@class SBSwitcherModifier, SBAppLayout;

@interface SBContinuousExposeRootSwitcherModifier : SBFullScreenFluidSwitcherRootSwitcherModifier {
    SBAppLayout *_currentAppLayout;
    SBAppLayout *_effectiveAppLayoutOnStage;
    BOOL _isStripTonguePresented;
    SBSwitcherModifier *_initialFloorModifierForWindowDrag;
}

- (id)multitaskingModifierForEvent:(id)a0;
- (id)appLayoutOnStage;
- (BOOL)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (long long)_effectiveEnvironmentMode;
- (id)gestureModifierForGestureEvent:(id)a0;
- (id)floorModifierForGestureEvent:(id)a0;
- (BOOL)shouldUseNonuniformSnapshotScalingForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)lowEndHardwareModifier;
- (struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long x0; unsigned long long x1; })continuousExposeStripTongueAttributes;
- (id)removalModifierForRemovalEvent:(id)a0;
- (BOOL)shouldUseWallpaperGradientTreatment;
- (id)handleEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)highlightModifierForHighlightEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)a0;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)a0;
- (void).cxx_destruct;
- (id)handleContinuousExposeStripEdgeProtectTongueEvent:(id)a0;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)a0;

@end
