@class NSArray, HKStrokeStyle, HKLineSeriesPointMarkerStyle;

@interface HKSleepPeriodSeries : HKGraphSeries

@property (nonatomic) struct CGSize { double width; double height; } cornerRadii;
@property (copy, nonatomic) HKStrokeStyle *strokeStyle;
@property (copy, nonatomic) HKStrokeStyle *tiledStrokeStyle;
@property (copy, nonatomic) NSArray *defaultFillStyles;
@property (copy, nonatomic) NSArray *highlightedFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyle;
@property (copy, nonatomic) id /* block */ startOfDayTransform;

+ (id)asleepImageCompatibleWithFont:(id)a0 withColor:(id)a1;
+ (id)inBedImageCompatibleWithFont:(id)a0 withColor:(id)a1;
+ (id)_sleepCircleImageWithWidth:(double)a0 diameter:(double)a1 color:(id)a2;

- (void)clearCaches;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (BOOL)supportsMultiTouchSelection;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockCoordinate:(id)a1;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)shouldInvertAxis;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (double)barWidthForVisibleBarCount:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimumSpacing:(double)a2;
- (void)_drawPaths:(id)a0 withFillStyles:(id)a1 strokeStyle:(id)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;
- (void)_addAnnotationForValue:(double)a0;
- (long long)_visibleBarCountWithZoomLevelConfiguration:(id)a0;
- (void)_drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 axisResolution:(double)a5;
- (void)_drawGoalLinePath:(id)a0 goalMarkerPoints:(id)a1 markerImage:(id)a2 context:(struct CGContext { } *)a3;
- (void)_assertCoordinateCompatibility:(id)a0;
- (double)_minimumYForCoordinate:(id)a0;
- (double)_maximumYForCoordinate:(id)a0;
- (id)_stringFromTimeSinceNoon:(id)a0;
- (id)_attributedAxisString:(id)a0;

@end
