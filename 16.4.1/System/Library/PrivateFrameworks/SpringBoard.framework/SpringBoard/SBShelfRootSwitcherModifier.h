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

- (id)multitaskingModifierForEvent:(id)a0;
- (double)floatingDockHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (id)keyboardSuppressionMode;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)floorModifierForGestureEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (long long)tintStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (void)didMoveToParentModifier:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)appLayoutsToResignActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (void)setDelegate:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)a0;
- (void)_rebuildContainerBounds;
- (id)orderedVisibleAppLayoutsForShelfExpansionModifier:(id)a0;

@end
