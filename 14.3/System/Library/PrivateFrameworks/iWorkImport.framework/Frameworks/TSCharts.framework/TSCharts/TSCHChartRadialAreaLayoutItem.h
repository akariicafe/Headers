@interface TSCHChartRadialAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (Class)bodyLayoutItemClass;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)renderersWithRep:(id)a0;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (void)buildSubTree;

@end
