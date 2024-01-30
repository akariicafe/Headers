@class NSLock, HKBloodPressureSeriesPresentationStyle;

@interface HKBloodPressureSeries : HKGraphSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyleStorage;
@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyleStorage;
@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyle;
@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyle;

+ (id)defaultSeriesWithSystolicColor:(id)a0;
+ (void)_drawDiastolicSymbolWithColor:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 width:(double)a2 context:(struct CGContext { } *)a3;
+ (void)_drawSystolicSymbolWithColor:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 width:(double)a2 context:(struct CGContext { } *)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectCenteredAt:(struct CGPoint { double x0; double x1; })a0 width:(double)a1;
+ (id)diastolicImageCompatibleWithFont:(id)a0 withColor:(id)a1;
+ (id)systolicImageCompatibleWithFont:(id)a0 withColor:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockCoordinate:(id)a1;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_drawBloodPressureSymbol:(long long)a0 withColor:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 context:(struct CGContext { } *)a4;
- (void)_drawRangeBackgroundInContext:(struct CGContext { } *)a0 coordinate:(id)a1 width:(double)a2 symbolType:(long long)a3 symbolColor:(id)a4 fillColor:(id)a5;
- (void)_drawRangeDotsInContext:(struct CGContext { } *)a0 coordinate:(id)a1 width:(double)a2 symbolType:(long long)a3 symbolColor:(id)a4 fillColor:(id)a5;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;

@end
