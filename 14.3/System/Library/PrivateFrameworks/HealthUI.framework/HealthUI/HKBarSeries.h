@class HKStrokeStyle, HKBarSeriesConfiguration, NSMutableArray, HKFillStyle;

@interface HKBarSeries : HKGraphSeries

@property (retain, nonatomic) HKBarSeriesConfiguration *defaultConfiguration;
@property (retain, nonatomic) NSMutableArray *overrideConfigurations;
@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *tiledStrokeStyle;
@property (retain, nonatomic) HKFillStyle *unselectedFillStyle;
@property (retain, nonatomic) HKFillStyle *selectedFillStyle;
@property (nonatomic) struct CGSize { double width; double height; } cornerRadii;

- (void)clearCaches;
- (id)init;
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
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)a0;
- (void)drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (double)barWidthForVisibleBarCount:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimumSpacing:(double)a2;
- (id)_configurationForCoordinate:(id)a0 inConfigurations:(id)a1;
- (void)_drawConfiguration:(id)a0 strokeStyle:(id)a1 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(struct CGContext { } *)a3;
- (void)_drawPath:(id)a0 withFillStyle:(id)a1 strokeStyle:(id)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;

@end
