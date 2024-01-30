@class UIImage, HKStrokeStyle;

@interface HKMinMaxSeries : HKGraphSeries

@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (retain, nonatomic) UIImage *unselectedPointMarkerImage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImage;

- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (BOOL)supportsMultiTouchSelection;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockCoordinate:(id)a1;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (void)_drawStrokeWithBlockCoordinates:(id)a0 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 context:(struct CGContext { } *)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_drawPointMarkersWithBlockCoordinates:(id)a0 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 context:(struct CGContext { } *)a2;

@end
