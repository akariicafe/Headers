@class SBAppLayout;

@interface SBCenterWindowPagePresentationSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_centerWindowAppLayout;
    SBAppLayout *_fullScreenAppLayout;
    BOOL _isMorph;
}

- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1 isMorph:(BOOL)a2;

@end
