@class _TtC8TSCharts23TSCHChartGridLayoutItem;

@interface TSCHChartRadialAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem

@property (retain, nonatomic) _TtC8TSCharts23TSCHChartGridLayoutItem *gridLayoutItem;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (Class)bodyLayoutItemClass;
- (void)buildSubTree;
- (void)layoutInward;
- (void)layoutOutward;
- (id)renderersWithRep:(id)a0;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;

@end
