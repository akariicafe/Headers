@class SBMixedGridSwitcherModifier, SBAppLayout;

@interface SBHomeGestureToMixedGridSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    long long _startingEnvironmentMode;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    struct CGPoint { double x; double y; } _liftOffTranslation;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)_dismissForEmptySwitcherResponseName;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (id)initWithTransitionID:(id)a0 mixedGridModifier:(id)a1 selectedAppLayout:(id)a2 startingEnvironmentMode:(long long)a3 liftOfVelocity:(struct CGPoint { double x0; double x1; })a4 liftOffTranslation:(struct CGPoint { double x0; double x1; })a5 floatingAppLayout:(id)a6 floatingConfiguration:(long long)a7;
- (id)_newMixedGridModifier;
- (id)_appLayoutToScrollTo;
- (id)_firstFloatingAppLayout:(id)a0;
- (void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id /* block */)a0;

@end
