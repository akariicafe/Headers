@class NSString;

@interface HKInteractiveChartOverlaySleepViewController : HKInteractiveChartOverlayViewController <HKSleepStageDayAxisDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (id)dateRangeFromSelectionContext:(id)a0 timeScope:(long long)a1;
- (id)stringForValueRange:(id)a0 timeScope:(long long)a1;
- (void)updateSelectionAnnotationDataSourceForContext:(id)a0 displayType:(id)a1 timeScope:(long long)a2;
- (id)_sleepStageDayAxisWithCalendar:(id)a0;
- (BOOL)_isSleepSeries:(id)a0;
- (id)_customDateAxisForTimeScope:(long long)a0 segmentIndex:(long long)a1 sectionIndex:(long long)a2 currentCalendar:(id)a3;
- (id)_dayTimeScopeDateAxisStyleWithTextAlignment:(long long)a0 hyphenationFactor:(id)a1;
- (id)_sleepAnalysisDayAxisWithCalendar:(id)a0;
- (id)_sleepComparisonDayAxisWithCalendar:(id)a0;
- (id)_sleepStageDurationDayAxisWithCalendar:(id)a0;
- (id)addNoDataEntries:(id)a0 timeScope:(long long)a1 targetSeries:(id)a2;
- (long long)defaultAlignmentForTimeScope:(long long)a0;
- (id)descriptionForStartX:(double)a0 endX:(double)a1 chartData:(id)a2 timeScope:(long long)a3 graphView:(id)a4;
- (long long)effectiveAnnotationTimeScopeForTimeScope:(long long)a0 displayType:(id)a1 segmentIndex:(long long)a2 sectionIndex:(long long)a3;
- (void)graphView:(id)a0 didUpdateSeries:(id)a1 newDataArrived:(BOOL)a2 changeContext:(long long)a3;
- (id)makePrimaryGraphViewControllerWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2 currentCalendar:(id)a3;
- (id)sleepDaySummaryForDate:(id)a0;

@end
