@class SBAppLayout;

@interface SBDropApplicationSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (id)transitionWillBegin;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
