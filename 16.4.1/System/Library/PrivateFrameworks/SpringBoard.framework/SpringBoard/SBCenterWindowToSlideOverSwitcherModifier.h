@class SBAppLayout;

@interface SBCenterWindowToSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    long long _floatingConfiguration;
    unsigned long long _kind;
    SBAppLayout *_fullScreenWithCenterAppLayout;
    SBAppLayout *_movingAppLayout;
    SBAppLayout *_fullScreenWithoutCenterAppLayout;
    SBAppLayout *_outgoingCenterWindowAppLayout;
    SBAppLayout *_outgoingFloatingAppLayout;
    BOOL _isInSecondStageOfDosidoAnimation;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)wantsSlideOverTongue;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (id)handleTimerEvent:(id)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)visibleAppLayouts;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForLayoutRole:(long long)a0 inAppLayout:(id)a1 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a2;
- (struct SBSwitcherShelfPresentationAttributes { BOOL x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned long long x2; unsigned long long x3; })presentationAttributesForShelf:(id)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)_shouldBlurAndStretchLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 fromFloatingAppLayout:(id)a3 toFloatingAppLayout:(id)a4 toFloatingConfiguration:(long long)a5 direction:(unsigned long long)a6;

@end
