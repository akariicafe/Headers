@class SBAppLayout;

@interface SBFloatingFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

@property (retain, nonatomic) SBAppLayout *activeAppLayout;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerViewBounds;

- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)topMostLayoutElements;
- (id)gestureModifierForGestureEvent:(id)a0;
- (id)init;
- (id)removalModifierForRemovalEvent:(id)a0;
- (id)lowEndHardwareModifier;
- (void).cxx_destruct;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)transitionModifierForMainTransitionEvent:(id)a0;
- (id)handleEvent:(id)a0;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)_newMultitaskingModifier;
- (void)setDelegate:(id)a0;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (Class)_defaultMultitaskingModifierClass;
- (id)_entityRemovalModifierForEvent:(id)a0;

@end
