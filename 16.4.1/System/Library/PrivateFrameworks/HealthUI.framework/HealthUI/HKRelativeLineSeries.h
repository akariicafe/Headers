@class UIColor;

@interface HKRelativeLineSeries : HKLineSeries {
    long long _chartSizeClass;
}

@property (readonly, copy, nonatomic) UIColor *color;
@property (readonly, copy, nonatomic) UIColor *unavailableColor;
@property (readonly, nonatomic) double indeterminateLozengeLineWidth;
@property (readonly, nonatomic) double indeterminateLozengeHollowLineRatio;

- (void).cxx_destruct;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockCoordinate:(id)a1;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_colorForUserInfo:(id)a0;
- (void)_drawIndeterminateLozengeForCoordinate:(id)a0 context:(struct CGContext { } *)a1 seriesRenderingDelegate:(id)a2;
- (void)_drawIndeterminateLozengesForBlockCoordinates:(id)a0 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 renderContext:(struct CGContext { } *)a2 seriesRenderingDelegate:(id)a3;
- (double)_indeterminateLozengeValueForUserInfo:(id)a0;
- (BOOL)_isUserInfoIndeterminateRelativeValue:(id)a0;
- (BOOL)_shouldForceGapBetweenUserInfo:(id)a0 andUserInfo:(id)a1;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (id)initFromLineSeries:(id)a0 color:(id)a1 unavailableColor:(id)a2 indeterminateLozengeLineWidth:(double)a3 chartSizeClass:(long long)a4;

@end
