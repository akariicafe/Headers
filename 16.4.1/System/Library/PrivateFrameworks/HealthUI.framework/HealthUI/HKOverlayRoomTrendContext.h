@class HKInteractiveChartDisplayType, HKDisplayTypeContextItem, HKGraphSeries, NSString, HKChartSummaryTrendModel, HKInteractiveChartOverlayViewController;

@interface HKOverlayRoomTrendContext : NSObject <HKOverlayContext, HKTrendAccessibilityDelegate>

@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *trendDisplayType;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) long long categoryIdentifier;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (retain, nonatomic) HKGraphSeries *seriesForSelectedTrend;
@property (readonly, nonatomic) long long overlayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findInitialDateFromTrendModel:(id)a0;
+ (long long)findStartingTimeScopeFromTrendModel:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (BOOL)canSelectOverlayContextItem:(id)a0 isDeselecting:(BOOL)a1 timeScope:(long long)a2 chartController:(id)a3;
- (id)contextItemForLastUpdate;
- (void)overlayStateDidChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)_adjustTrendValueRange:(id)a0 timescope:(long long)a1 calendar:(id)a2;
- (id)_buildAnnotatedHorizontalLineSeriesUsingDisplayType:(id)a0 unitController:(id)a1 categoryController:(id)a2;
- (id)_buildTrendDisplayTypeFromModel:(id)a0 baseDisplayType:(id)a1 unitController:(id)a2 categoryController:(id)a3;
- (id)_buildTrendOverlayValueFormatterUsingDisplayType:(id)a0 unitController:(id)a1;
- (id)_buildTrendingLineSeriesStyleWithColor:(id)a0 formattingDisplayType:(id)a1 unitController:(id)a2 annotationFormatter:(id)a3;
- (id)_durationContextItemWithSummaryPhrase:(id)a0 timeScope:(long long)a1;
- (id)_representativeDisplayTypeFromDisplayType:(id)a0;
- (id)_summaryGivenChartPoints:(id)a0 timeScope:(long long)a1;
- (BOOL)_timeScopeHasTrendSpans:(long long)a0;
- (BOOL)_timeScopeMayHaveTrends:(long long)a0;
- (id)_trendTitle;
- (id)_trendValueRangeForTimescope:(long long)a0 calendar:(id)a1;
- (id)_unselectedMetricColorsUserInteractive:(BOOL)a0;
- (id)initWithBaseDisplayType:(id)a0 trendModel:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3 overlayMode:(long long)a4;
- (id)trendAccessibilitySeries;

@end
