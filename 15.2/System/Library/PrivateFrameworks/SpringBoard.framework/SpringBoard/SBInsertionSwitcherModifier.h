@class SBAppLayout;

@interface SBInsertionSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _isSimulatingPreInsertionState;
    struct CGPoint { double x; double y; } _contentOffsetBeforeInsertion;
}

@property (readonly, nonatomic) unsigned long long phase;

- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (id)initWithAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)handleInsertionEvent:(id)a0;
- (void)_performBlockBySimulatingPreInsertionState:(id /* block */)a0;

@end
