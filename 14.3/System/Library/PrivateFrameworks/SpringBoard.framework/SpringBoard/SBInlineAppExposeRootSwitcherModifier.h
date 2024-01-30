@class NSString;

@interface SBInlineAppExposeRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier {
    long long _layoutRole;
    BOOL _overlay;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } fullscreenCornerRadii;

- (id)removalModifierForRemovalEvent:(id)a0;
- (void).cxx_destruct;
- (id)insertionModifierForInsertionEvent:(id)a0;
- (id)multitaskingModifierForEvent:(id)a0;
- (id)userScrollingModifierForScrollEvent:(id)a0;
- (id)_newMultitaskingModifier;
- (double)floatingDockHeight;
- (id)floorModifierForTransitionEvent:(id)a0;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)a0;
- (id)transitionModifierForInlineTransitionEvent:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 layoutRole:(long long)a1 overlay:(BOOL)a2;

@end
