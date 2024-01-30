@class NSSet, SBDisplayItem, SBAppLayout;

@interface SBMainSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier {
    struct CGSize { double width; double height; } _fullScreenCardSize;
    struct CGSize { double width; double height; } _floatingCardSize;
    long long _environmentMode;
    BOOL _floatingSwitcherVisible;
    BOOL _isInPeekState;
    SBAppLayout *_appLayout;
    SBAppLayout *_floatingAppLayout;
    long long _floatingConfiguration;
    NSSet *_previousDisplayItems;
    NSSet *_displayItems;
    SBDisplayItem *_lastGesturedDisplayItem;
    SBDisplayItem *_lastPulsedDisplayItem;
}

- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)floorModifierForGestureEvent:(id)a0;
- (void).cxx_destruct;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)a0 fromAppLayouts:(id)a1;
- (id)init;
- (id)gestureModifierForGestureEvent:(id)a0;
- (id)shelfModifierForTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (BOOL)_correctFloorModifierToHandleEvent;
- (void)_setCardSizesWithEvent:(id)a0;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (void)_ensureModifier:(id)a0 startsInFinalStateOfEvent:(id)a1;
- (id)_newMultitaskingModifierForEnvironmentMode:(long long)a0;
- (id)_createNewDefaultFloorModifier;
- (id)highlightModifierForHighlightEvent:(id)a0;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)a0;

@end
