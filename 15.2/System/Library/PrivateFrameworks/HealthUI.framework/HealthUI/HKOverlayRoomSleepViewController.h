@class HKChartCache, NSString, HKDisplayType, HKInteractiveChartDataFormatter, HKChartSummaryTrendModel, HKOverlayContextLocation;
@protocol HKSleepDataSourceProvider;

@interface HKOverlayRoomSleepViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate, _HKContextChangeDelegate>

@property (weak, nonatomic) id<HKSleepDataSourceProvider> sleepDataSourceProvider;
@property (retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (retain, nonatomic) HKDisplayType *sleepDisplayType;
@property (retain, nonatomic) HKChartCache *sharedSleepCache;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (retain, nonatomic) HKOverlayContextLocation *trendContextLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL durationContextSelected;
@property (nonatomic) BOOL scheduleContextSelected;
@property (nonatomic) BOOL baseDisplayIsSchedule;
@property (nonatomic) BOOL shouldHighlightBaseDisplayContext;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)stringForValueRange:(id)a0 timeScope:(long long)a1;
- (id)titleForSelectedRangeData:(id)a0 displayType:(id)a1;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 sleepDataSourceProvider:(id)a2 sleepChartFormatter:(id)a3 mode:(long long)a4 trendModel:(id)a5;
- (void)saveRestorationState;
- (id)restorationStateDictionary;
- (id)_primaryContextForApplicationItems:(id)a0 overlayChartController:(id)a1;
- (BOOL)_initialTrendSelectedForMode:(long long)a0 trendModel:(id)a1;
- (void)_setDefaultChartFormatterFonts;
- (void)_installUpdateObserversForGoalsAndSchedulesWithApplicationItems:(id)a0;
- (void)setBaseDisplayIsDuration;
- (void)setBaseDisplayIsSchedule;
- (id)_buildSleepDisplayTypeWithApplicationItems:(id)a0 sleepSeriesType:(long long)a1 customSleepSeries:(id)a2 customSleepChartFormatter:(id)a3;
- (id)_fullContextsForApplicationItems:(id)a0 overlayChartController:(id)a1;
- (id)_buildSleepTrendContext:(id)a0 overlayChartController:(id)a1;
- (id)_consistencyContextForApplicationItems:(id)a0 overlayMode:(long long)a1 isPrimaryContext:(BOOL)a2;
- (id)_buildDurationDisplayTypeWithApplicationItems:(id)a0;
- (id)_durationAmountContextForApplicationItems:(id)a0 durationDisplayType:(id)a1;
- (id)_durationGoalContextForApplicationItems:(id)a0 durationDisplayType:(id)a1 overlayMode:(long long)a2 isPrimaryContext:(BOOL)a3;
- (id)_durationAverageContextForApplicationItems:(id)a0 durationDisplayType:(id)a1 useInBedAverage:(BOOL)a2;
- (id)_buildDurationGoalDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildConsistencyDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildScheduleDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildDurationAverageSeries;
- (id)_buildDurationAverageFormatter;
- (id)_buildDurationAverageDisplayTypeWithApplicationItems:(id)a0 customSleepSeries:(id)a1 customSleepChartFormatter:(id)a2;
- (id)_sleepColorForSelectedRangeData:(id)a0;
- (void)setShouldHighlightBaseDisplayContext;

@end
