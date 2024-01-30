@class SBSwitcherShelf, SBAppLayout;

@interface SBShelfZoomTransitionModifier : SBTransitionSwitcherModifier {
    unsigned long long _direction;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBSwitcherShelf *_shelf;
    SBAppLayout *_centerWindowAppLayout;
    SBAppLayout *_fullScreenSpaceAppLayout;
    SBAppLayout *_centerWindowBeingReplacedAppLayout;
}

- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)contentPageViewScaleForAppLayout:(id)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct SBSwitcherShelfPresentationAttributes { BOOL x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned long long x2; unsigned long long x3; })presentationAttributesForShelf:(id)a0;
- (id)transitionDidEnd;
- (id)hiddenAppLayoutsInShelf:(id)a0;
- (id)initWithTransitionID:(id)a0 direction:(unsigned long long)a1 fromAppLayout:(id)a2 toAppLayout:(id)a3 shelf:(id)a4;
- (BOOL)_isEffectivelyInShelf;
- (BOOL)_shouldDimLayoutRole:(long long)a0 inAppLayout:(id)a1 forZoomDirection:(unsigned long long)a2;

@end
