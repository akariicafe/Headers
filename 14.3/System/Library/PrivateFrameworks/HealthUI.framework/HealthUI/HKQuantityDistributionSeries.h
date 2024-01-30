@class HKStrokeStyle, HKAxisLabelStyle;

@interface HKQuantityDistributionSeries : HKGraphSeries

@property (copy, nonatomic) HKStrokeStyle *inactiveStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (copy, nonatomic) HKAxisLabelStyle *minMaxLabelStyle;
@property (copy, nonatomic) HKAxisLabelStyle *minMaxValueStyle;
@property (copy, nonatomic) HKStrokeStyle *minMaxPointStyle;
@property (nonatomic) BOOL excludeDistribution;
@property (nonatomic) long long zeroCountForGap;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (BOOL)supportsMultiTouchSelection;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)marginsForYAxis:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (id)_quickDate:(id)a0;
- (void)_drawMinMaxLabelsForMin:(struct CGPoint { double x0; double x1; })a0 max:(struct CGPoint { double x0; double x1; })a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textRectForSize:(struct CGSize { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1 screenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 yOffset:(double)a3;

@end
