@class SBAppLayout;

@interface SBSplitViewToSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    long long _transitioningLayoutRole;
    SBAppLayout *_splitViewAppLayout;
    SBAppLayout *_slideOverAppLayout;
    unsigned long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_fromMainAppLayoutGoingIntoSlideOver;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 transitioningLayoutRole:(long long)a1 splitViewAppLayout:(id)a2 slideOverAppLayout:(id)a3 direction:(unsigned long long)a4;

@end
