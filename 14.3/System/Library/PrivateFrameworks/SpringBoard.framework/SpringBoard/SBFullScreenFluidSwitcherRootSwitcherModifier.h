@interface SBFullScreenFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

- (id)gestureModifierForGestureEvent:(id)a0;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)a0;
- (id)_entityRemovalModifierForMainTransitionEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)lowEndHardwareModifier;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)_newMultitaskingModifier;
- (long long)_effectiveEnvironmentMode;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (Class)_defaultMultitaskingModifierClass;

@end
