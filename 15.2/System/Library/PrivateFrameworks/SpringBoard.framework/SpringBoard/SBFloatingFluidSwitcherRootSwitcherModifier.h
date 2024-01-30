@class SBAppLayout;

@interface SBFloatingFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

@property (retain, nonatomic) SBAppLayout *activeAppLayout;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerViewBounds;

- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)lowEndHardwareModifier;
- (id)topMostLayoutElements;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (void)setDelegate:(id)a0;
- (id)handleEvent:(id)a0;
- (id)floorModifierForGestureEvent:(id)a0;
- (Class)_defaultMultitaskingModifierClass;
- (id)_newMultitaskingModifier;
- (void).cxx_destruct;
- (id)init;
- (id)gestureModifierForGestureEvent:(id)a0;
- (id)shelfModifierForTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)highlightModifierForHighlightEvent:(id)a0;
- (id)transientlyVisibleSlideOverTongueModifierForEvent:(id)a0;
- (void)_updateContainerViewBounds;
- (id)_entityRemovalModifierForEvent:(id)a0;

@end
