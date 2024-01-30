@class HKDateIntervalCache, NSArray;

@interface HKDateAxis : HKAxis {
    HKDateIntervalCache *_intervalCache;
    NSArray *_cachedAxisLabels;
}

@property (nonatomic) long long dayScopeType;

- (id)init;
- (void).cxx_destruct;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (id)extendedModelRangeWithRange:(id)a0 timeScope:(long long)a1;
- (id)rangeForChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2;
- (long long)dateZoomForZoomScale:(double)a0;
- (void)offsetForValueRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScaleOut:(double *)a2 contentOffsetOut:(struct CGPoint { double x0; double x1; } *)a3;
- (id)zoomScaleEngine;
- (id)_formattedStringForDate:(id)a0 zoom:(long long)a1;
- (id)stringForDate:(id)a0 zoom:(long long)a1 labelType:(long long)a2;
- (void)_enumerateCachedCoordinatesInModelRange:(id)a0 withHandler:(id /* block */)a1;
- (id)_dateRangeForChartRange:(struct HKRange { double x0; double x1; })a0 zoomScale:(double)a1;
- (void)_updateIntervalCacheWithModelRange:(id)a0 zoomScale:(double)a1;
- (id)_axisLabelsWithModelRange:(id)a0 zoom:(long long)a1;
- (unsigned long long)_anchorUnitForZoom:(long long)a0;
- (void)_clearCachedAxisLabels;
- (BOOL)_labelsOutsideStartDate:(id)a0 endDate:(id)a1;
- (void)_setRangeForDateRange:(id)a0;

@end
