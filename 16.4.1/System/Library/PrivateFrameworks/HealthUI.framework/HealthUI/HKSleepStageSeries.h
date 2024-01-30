@class NSNumber, NSArray, NSLock;

@interface HKSleepStageSeries : HKSleepPeriodSeries <HKSleepStageCategoryHighlightable>

@property (copy, nonatomic) NSNumber *highlightedSleepStageStorage;
@property (copy, nonatomic) NSArray *sleepStageFillStylesStorage;
@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (copy, nonatomic) NSNumber *highlightedSleepStage;
@property (copy, nonatomic) NSArray *sleepStageFillStyles;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)_drawColumnForLayer:(long long)a0 offsets:(id)a1 coordinate:(id)a2 selectedBezierPaths:(id)a3 unselectedBezierPaths:(id)a4 barWidth:(double)a5 pathCount:(long long *)a6;
- (void)_drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 axisResolution:(double)a5 seriesRenderingDelegate:(id)a6;
- (void)_rebuildFillStyles;
- (id)marginsForYAxis:(id)a0 xAxisRange:(id)a1 zoomLevel:(long long)a2 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)updateChartPointUserInfo:(id)a0 forHighlightedSleepStage:(id)a1;

@end
