@class NSCalendar;

@interface HKDateAxis : HKAxis

@property (retain, nonatomic) NSCalendar *currentCalendar;

- (void).cxx_destruct;
- (id)_axisLabelsWithModelRange:(id)a0 zoom:(long long)a1;
- (unsigned long long)_anchorUnitForZoom:(long long)a0;
- (id)_baseDateForDate:(id)a0 components:(id)a1 calendar:(id)a2;
- (id)_dateRangeForChartRange:(struct HKRange { double x0; double x1; })a0 zoomScale:(double)a1;
- (void)_enumerateCoordinatesInModelRange:(id)a0 timeScope:(long long)a1 withHandler:(id /* block */)a2;
- (id)_firstDateAfter:(id)a0 matchingComponents:(id)a1 timeScope:(long long)a2 calendar:(id)a3;
- (id)_formattedStringForDate:(id)a0 zoom:(long long)a1;
- (id)_nextDateForDate:(id)a0 components:(id)a1 timeScope:(long long)a2 calendar:(id)a3;
- (void)_setRangeForDateRange:(id)a0;
- (id)axisLabelIntervalComponentsForZoomLevelConfiguration:(id)a0;
- (id)cacheKeysForModelRange:(id)a0 zoomScale:(double)a1;
- (BOOL)canAddLabelForAxisLabelType:(long long)a0;
- (long long)dateZoomForZoomScale:(double)a0;
- (id)extendModelRangeWithRange:(id)a0 zoomScale:(double)a1;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (id)initWithCurrentCalendar:(id)a0 axisStyle:(id)a1;
- (id)minorAxisIntervalComponentsForZoomLevelConfiguration:(id)a0;
- (void)offsetForValueRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScaleOut:(double *)a2 contentOffsetOut:(struct CGPoint { double x0; double x1; } *)a3;
- (id)rangeForChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2;
- (id)stringForDate:(id)a0 zoom:(long long)a1 labelType:(long long)a2;

@end
