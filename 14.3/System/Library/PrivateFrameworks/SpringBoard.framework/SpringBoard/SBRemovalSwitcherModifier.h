@class SBSwitcherModifier, NSSet, SBAppLayout;

@interface SBRemovalSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    long long _reason;
    SBSwitcherModifier *_multitaskingModifier;
    BOOL _simulatingPostRemovalState;
    unsigned long long _indexToScrollToAfterRemoval;
    unsigned long long _indexOfAppLayoutPriorToRemoval;
    NSSet *_visibleAppLayoutsPriorToRemoval;
    unsigned long long _phase;
}

- (id)visibleAppLayouts;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (id)handleRemovalEvent:(id)a0;
- (id)initWithAppLayout:(id)a0 reason:(long long)a1;
- (id)handleInsertionEvent:(id)a0;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)a0;

@end
