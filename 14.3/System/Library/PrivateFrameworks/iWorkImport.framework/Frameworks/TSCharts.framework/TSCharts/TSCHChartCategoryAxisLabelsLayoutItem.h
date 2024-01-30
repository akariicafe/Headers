@interface TSCHChartCategoryAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem

- (id)initWithParent:(id)a0;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;
- (unsigned long long)numberOfLabelsForAxis:(id)a0;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)a0 axis:(id)a1;
- (id)labelStringForAxis:(id)a0 index:(unsigned long long)a1;
- (id)selectionPathLabelType;
- (struct CGPoint { double x0; double x1; })axisAnchorForPosition:(int)a0 degrees:(float)a1 area:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 unrotatedSize:(struct CGSize { double x0; double x1; })a3 unitSpaceValue:(double)a4;
- (struct CGPoint { double x0; double x1; })labelAnchorForPosition:(int)a0 degrees:(float)a1;

@end
