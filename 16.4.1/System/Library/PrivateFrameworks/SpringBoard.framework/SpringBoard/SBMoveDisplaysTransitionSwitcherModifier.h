@class SBTransitionSwitcherModifierMoveDisplaysContext, SBAppLayout;

@interface SBMoveDisplaysTransitionSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *remainingAppLayout;
@property (readonly, nonatomic) BOOL remainingAppLayoutNeedsLayout;
@property (readonly, nonatomic) SBTransitionSwitcherModifierMoveDisplaysContext *moveDisplaysContext;

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionDidEnd;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)visibleAppLayouts;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)transitionWillUpdate;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)_appLayoutsContainingMovingDisplayItems;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionEvent:(id)a0;

@end
