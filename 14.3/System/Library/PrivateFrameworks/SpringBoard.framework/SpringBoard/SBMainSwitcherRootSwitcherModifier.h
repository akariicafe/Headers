@interface SBMainSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

- (id)gestureModifierForGestureEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)_createNewDefaultFloorModifier;

@end
