@class HKChartCache, HKChartSummaryTrendModel, NSMutableArray, NSNumber;

@interface HKOverlayRoomBloodGlucoseViewController : HKOverlayRoomViewController {
    NSNumber *_preferredOverlayIndex;
    HKChartSummaryTrendModel *_trendModel;
}

@property (readonly, nonatomic) long long preferredOverlay;
@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (retain, nonatomic) HKChartCache *percentInRangeChartCache;

+ (id)_buildPercentInRangeChartCacheWithApplicationItems:(id)a0;

- (void).cxx_destruct;
- (id)chartOverlayVersion;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 preferredOverlay:(long long)a3 trendModel:(id)a4;
- (id)_buildBloodGlucoseAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (BOOL)_isEnhancedChartingEnabledWithHealthStore:(id)a0;
- (long long)_initialPillForPreference:(long long)a0;
- (id)_buildPercentInRangeOverlayContextSectionWithApplicationItems:(id)a0 overlayChartController:(id)a1;
- (id)_buildPercentInRangeDisplayTypeWithApplicationItems:(id)a0 classification:(long long)a1;
- (id)_buildEuglycemicRangeStringWithApplicationItems:(id)a0;
- (id)_buildPercentInRangeStackedBarSeriesForClassification:(long long)a0;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;

@end
