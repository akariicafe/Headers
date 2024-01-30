@interface SBFullScreenFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

- (id)multitaskingModifierForEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (long long)_effectiveEnvironmentMode;
- (id)gestureModifierForGestureEvent:(id)a0;
- (Class)_defaultMultitaskingModifierClass;
- (id)floorModifierForGestureEvent:(id)a0;
- (id)_newMultitaskingModifier;
- (id)lowEndHardwareModifier;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)_entityRemovalModifierForMainTransitionEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)a0;
- (id)shelfModifierForTransitionEvent:(id)a0;

@end
