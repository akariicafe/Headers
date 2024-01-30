@class _TtC8TSCharts23TSCHChartGridLayoutItem;

@interface TSCHChartRadialAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem

@property (retain, nonatomic) _TtC8TSCharts23TSCHChartGridLayoutItem *gridLayoutItem;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void).cxx_destruct;
- (void)buildSubTree;
- (id)renderersWithRep:(id)a0;
- (Class)bodyLayoutItemClass;
- (void)layoutInward;
- (void)layoutOutward;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;

@end
