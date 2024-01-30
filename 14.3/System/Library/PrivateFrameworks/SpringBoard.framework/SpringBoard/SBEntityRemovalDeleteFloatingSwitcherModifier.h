@class SBAppLayout;

@interface SBEntityRemovalDeleteFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _floatingConfiguration;
}

@property (nonatomic) BOOL blursFromAppLayout;

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (double)shadowOpacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (id)transitionWillBegin;
- (id)transitionDidEnd;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)_opacitySettings;
- (BOOL)_isIndexFromAppLayout:(unsigned long long)a0;
- (BOOL)_isIndexToAppLayout:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 floatingConfiguration:(long long)a3;

@end
