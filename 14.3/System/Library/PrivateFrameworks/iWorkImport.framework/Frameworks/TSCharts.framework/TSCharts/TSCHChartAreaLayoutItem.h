@class TSCHChartReferenceLineLabelsLayoutItem, TSCHChartAxisLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    TSCHChartAxisLayoutItem *mTopHorizontalAxis;
    TSCHChartAxisLayoutItem *mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem *mLeftVerticalAxis;
    TSCHChartAxisLayoutItem *mRightVerticalAxis;
    unsigned long long mRelayoutDepth;
    BOOL mInOutwardLayout;
}

@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *rightRefLineLabels;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *topRefLineLabels;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)renderersWithRep:(id)a0;
- (void)buildSubTree;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })i_currentBufferAreaUnitRect;
- (double)p_dataSetNameLabelPadding;
- (Class)p_axisLayoutItemClassForAxisID:(id)a0;
- (void)p_arrangeSizedChildren;
- (void)p_updateMinHitSizes;

@end
