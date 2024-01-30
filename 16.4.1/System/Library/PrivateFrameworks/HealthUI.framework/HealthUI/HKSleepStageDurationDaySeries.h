@class NSCalendar;

@interface HKSleepStageDurationDaySeries : HKSleepStageDurationSeries

@property (retain, nonatomic) NSCalendar *currentCalendar;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (id)_buildSleepDurationCoordinateWithDurationValue:(double)a0 sleepValue:(long long)a1 barLocationIndex:(long long)a2 startOfCalendarDay:(id)a3 xAxisTransform:(id)a4 yAxisTransform:(id)a5 userInfo:(id)a6;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)a0;

@end
