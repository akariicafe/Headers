@class SBAppLayout;

@interface SBExternalInlineAppExposeTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
