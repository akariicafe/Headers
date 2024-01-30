@class _TtC8TSCharts23TSCHChartGridLayoutItem, TSCHChartReferenceLineLabelsLayoutItem, TSCHChartAxisLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    TSCHChartAxisLayoutItem *_topHorizontalAxis;
    TSCHChartAxisLayoutItem *_bottomHorizontalAxis;
    TSCHChartAxisLayoutItem *_leftVerticalAxis;
    TSCHChartAxisLayoutItem *_rightVerticalAxis;
    _TtC8TSCharts23TSCHChartGridLayoutItem *_gridLayoutItem;
    unsigned long long _relayoutDepth;
    BOOL _inOutwardLayout;
}

@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *rightRefLineLabels;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *topRefLineLabels;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (Class)p_axisLayoutItemClassForAxisID:(id)a0;
- (void)buildSubTree;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })i_currentBufferAreaUnitRect;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (void)layoutInward;
- (void)layoutOutward;
- (void)p_arrangeSizedChildren;
- (double)p_dataSetNameLabelPadding;
- (void)p_updateMinHitSizes;
- (id)renderersWithRep:(id)a0;

@end
