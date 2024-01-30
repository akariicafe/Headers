@class SBAppLayout;

@interface SBEntityRemovalDeclineFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _floatingConfiguration;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_layoutSettings;
- (void).cxx_destruct;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)_isIndexFromAppLayout:(unsigned long long)a0;
- (BOOL)_isIndexToAppLayout:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 floatingConfiguration:(long long)a3;

@end
