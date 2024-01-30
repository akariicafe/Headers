@class TSCHChartValueAxisLabelsLayoutItem;

@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem

@property (readonly, nonatomic) TSCHChartValueAxisLabelsLayoutItem *axisValueLabelsLayoutItem;

- (void).cxx_destruct;
- (id)renderersWithRep:(id)a0;
- (void)buildSubTree;
- (void)p_layoutLabelsNow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })protected_layoutSpaceRectForAllLabels;

@end
