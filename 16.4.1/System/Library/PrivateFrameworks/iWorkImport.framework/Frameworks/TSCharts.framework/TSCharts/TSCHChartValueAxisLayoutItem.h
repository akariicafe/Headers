@class TSCHChartValueAxisLabelsLayoutItem;

@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem

@property (retain, nonatomic) TSCHChartValueAxisLabelsLayoutItem *axisValueLabelsLayoutItem;

- (void).cxx_destruct;
- (void)buildSubTree;
- (void)p_layoutLabelsNow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)a0;

@end
