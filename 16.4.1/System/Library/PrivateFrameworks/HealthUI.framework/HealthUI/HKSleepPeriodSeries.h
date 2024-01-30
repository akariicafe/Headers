@class NSArray, HKStrokeStyle, HKLineSeriesPointMarkerStyle, NSLock;

@interface HKSleepPeriodSeries : HKGraphSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (nonatomic) struct CGSize { double width; double height; } cornerRadiiStorage;
@property (copy, nonatomic) HKStrokeStyle *strokeStyleStorage;
@property (copy, nonatomic) HKStrokeStyle *tiledStrokeStyleStorage;
@property (copy, nonatomic) NSArray *defaultFillStylesStorage;
@property (copy, nonatomic) NSArray *highlightedFillStylesStorage;
@property (copy, nonatomic) NSArray *inactiveFillStylesStorage;
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyleStorage;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyleStorage;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyleStorage;
@property (copy, nonatomic) id /* block */ startOfDayTransformStorage;
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

+ (id)_sleepCircleImageWithWidth:(double)a0 diameter:(double)a1 color:(id)a2;
+ (id)asleepImageCompatibleWithFont:(id)a0 withColor:(id)a1;
+ (id)inBedImageCompatibleWithFont:(id)a0 withColor:(id)a1;

- (void)clearCaches;
- (id)init;
- (void).cxx_destruct;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockCoordinate:(id)a1;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_assertCoordinateCompatibility:(id)a0;
- (id)_attributedAxisString:(id)a0;
- (void)_drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 axisResolution:(double)a5 seriesRenderingDelegate:(id)a6;
- (double)_maximumYForCoordinate:(id)a0;
- (double)_minimumYForCoordinate:(id)a0;
- (id)_stringFromTimeSinceNoon:(id)a0;
- (void)addAnnotationForValue:(double)a0 axisAnnotationDelegate:(id)a1;
- (void)addGoalLinePathsToCoordinate:(id)a0 upperGoalLinePath:(id)a1 upperGoalMarkerPoints:(id)a2 previousUpperGoalLinePoint:(id)a3 lowerGoalLinePath:(id)a4 lowerGoalMarkerPoints:(id)a5 previousLowerGoalLinePoint:(id)a6 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;
- (double)barWidthForVisibleBarCount:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimumSpacing:(double)a2;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (void)drawGoalLinePath:(id)a0 goalMarkerPoints:(id)a1 markerImage:(id)a2 context:(struct CGContext { } *)a3;
- (void)drawPaths:(id)a0 withFillStyles:(id)a1 strokeStyle:(id)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;
- (id)marginsForYAxis:(id)a0 xAxisRange:(id)a1 zoomLevel:(long long)a2 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)shouldInvertAxis;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)a0;

@end
