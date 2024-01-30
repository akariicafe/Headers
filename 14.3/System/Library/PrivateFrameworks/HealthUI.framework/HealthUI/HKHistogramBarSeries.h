@interface HKHistogramBarSeries : HKBarSeries

@property (nonatomic) unsigned long long numberOfColumns;

- (double)barWidthForVisibleBarCount:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimumSpacing:(double)a2;
- (id)initWithFillStyle:(id)a0 numberOfColumns:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;

@end
