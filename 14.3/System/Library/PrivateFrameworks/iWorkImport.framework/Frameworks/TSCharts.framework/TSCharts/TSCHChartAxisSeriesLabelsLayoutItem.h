@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem

- (id)initWithParent:(id)a0;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;
- (unsigned long long)numberOfLabelsForAxis:(id)a0;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)a0 axis:(id)a1;
- (id)labelStringForAxis:(id)a0 index:(unsigned long long)a1;
- (BOOL)showLabelsForAxis:(id)a0;
- (unsigned long long)strideInLayoutArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectionPathLabelType;

@end
