@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject

@property (readonly, nonatomic) NSDateComponents *axisLabelIntervalComponents;
@property (readonly, nonatomic) NSDateComponents *minorAxisIntervalComponents;
@property (readonly, nonatomic) NSDateComponents *seriesPointIntervalComponents;
@property (readonly, nonatomic) NSDateComponents *referencePointIntervalComponents;
@property (readonly, nonatomic) long long intendedTimeScope;
@property (readonly, nonatomic) double seriesBlockSize;
@property (readonly, nonatomic) double zoomLevelThreshold;
@property (readonly, nonatomic) double canonicalSize;
@property (readonly, nonatomic) unsigned long long majorTickCalendarUnit;
@property (readonly, nonatomic) double approximateSeriesPointInterval;
@property (readonly, nonatomic) double todayOffsetSize;
@property (readonly, nonatomic) double approximateAxisLabelInterval;

+ (id)configurationForZoomLevel:(long long)a0;
+ (id)defaultCalendar;
+ (id)_axisSpanDateComponentsWithTimeScope:(long long)a0;
+ (id)_dateOffsetByHalfCanonicalSizeOfDate:(id)a0 timeScope:(long long)a1;
+ (id)_findVisibleRangeForTimeScope:(long long)a0 anchorDate:(id)a1 alignment:(long long)a2 calendar:(id)a3;
+ (id)_fitRange:(id)a0 toDateRange:(id)a1 timeScope:(long long)a2 alignment:(long long)a3 calendar:(id)a4 firstWeekday:(long long)a5 cadence:(long long)a6 level:(long long)a7;
+ (id)_generateConfigurationForZoomLevel:(long long)a0;
+ (id)_gregorianCalendarForCalendar:(id)a0;
+ (id)_snappingStartDateWithStartDate:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1 calendar:(id)a2 timeScope:(long long)a3 options:(long long)a4 alignment:(long long)a5;
+ (id)_visibleRangeDateFromAnchor:(id)a0 timeScope:(long long)a1 calendar:(id)a2 offset:(long long)a3;
+ (id)_visibleRangeDateFromDate:(id)a0 timeScope:(long long)a1 calendar:(id)a2 offset:(long long)a3;
+ (id)activeRangeFromCadenceRange:(id)a0 timeScope:(long long)a1 axisRange:(id)a2 calendar:(id)a3;
+ (id)chartDataRangeForTimeScope:(long long)a0 dataRange:(id)a1 firstWeekday:(long long)a2 calendar:(id)a3 cadence:(long long)a4 alignment:(long long)a5;
+ (id)chartVisibleRangeForTimeScope:(long long)a0 anchorDate:(id)a1 alignment:(long long)a2 dataRange:(id)a3 calendar:(id)a4 firstWeekday:(long long)a5 cadence:(long long)a6 level:(long long)a7;
+ (id)seriesPointIntervalUnitForTimeScope:(long long)a0 pointCount:(long long)a1;
+ (id)snappingRangeForRange:(id)a0 axisRange:(id)a1 timeScope:(long long)a2 velocity:(struct CGPoint { double x0; double x1; })a3 calendar:(id)a4 options:(long long)a5 alignment:(long long)a6;
+ (long long)timeScopeForDateRange:(id)a0;

- (void).cxx_destruct;

@end
