@class NSArray;

@interface HKAnnotatedHorizontalLineSeries : HKGraphSeries

@property (retain, nonatomic) NSArray *horizontalLineStyles;
@property (nonatomic) double valueOutlineWidth;

- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (BOOL)supportsMultiTouchSelection;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)xAxisSelectedCoordinate:(double)a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (id)_horizontalLineSeriesStyleForBlockCoordinate:(id)a0;
- (id)_defaultLineStyle;
- (id)_defaultLabelStyle;
- (id)_stringValueForCoordinate:(id)a0 valueStyle:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForString:(id)a0 coordinate:(id)a1 valueAttributes:(id)a2;

@end
