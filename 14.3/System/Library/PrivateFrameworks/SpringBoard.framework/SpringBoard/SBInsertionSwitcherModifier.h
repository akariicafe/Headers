@class SBAppLayout;

@interface SBInsertionSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _isSimulatingPreInsertionState;
    struct CGPoint { double x; double y; } _contentOffsetBeforeInsertion;
}

@property (readonly, nonatomic) unsigned long long phase;

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (id)handleInsertionEvent:(id)a0;
- (void)_performBlockBySimulatingPreInsertionState:(id /* block */)a0;

@end
