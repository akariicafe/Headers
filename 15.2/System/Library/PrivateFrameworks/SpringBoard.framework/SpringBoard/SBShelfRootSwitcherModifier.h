@class NSString;

@interface SBShelfRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier <SBShelfExpansionSwitcherModifierDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _portraitContainerBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _landscapeContainerBounds;
    BOOL _isRoutingFrameForIndexToFloating;
}

@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) unsigned long long appearanceState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (nonatomic) unsigned long long animationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tintStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (id)appLayoutsToResignActive;
- (id)keyboardSuppressionMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultBoundsForAppLayout:(id)a0 interfaceOrientation:(long long)a1;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (void)setDelegate:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)floorModifierForGestureEvent:(id)a0;
- (double)floatingDockHeight;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)a0;
- (id)orderedVisibleAppLayoutsForShelfExpansionModifier:(id)a0;
- (void)_rebuildContainerBounds;

@end
