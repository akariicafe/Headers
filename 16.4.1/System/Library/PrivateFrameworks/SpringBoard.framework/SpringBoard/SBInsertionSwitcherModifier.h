@class SBAppLayout;

@interface SBInsertionSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _isSimulatingPreInsertionState;
    struct CGPoint { double x; double y; } _contentOffsetBeforeInsertion;
}

@property (readonly, nonatomic) unsigned long long phase;

- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (id)initWithAppLayout:(id)a0;
- (void).cxx_destruct;
- (void)_performBlockBySimulatingPreInsertionState:(id /* block */)a0;
- (id)handleInsertionEvent:(id)a0;

@end
