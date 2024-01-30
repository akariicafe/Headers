@class HKSampleTypeUpdateController, HKHealthStore, HKInteractiveChartDataFormatter, HKChartDataCacheController, HKDisplayCategoryController, HKSelectedTimeScopeController, HKUnitPreferenceController, _HKWheelchairUseCharacteristicCache, HKSampleTypeDateRangeController, NSDictionary, HKDateCache, HKDisplayTypeController;
@protocol HKCardioFitnessDataSourceProvider, HKSleepDataSourceProvider, HKAddDataViewControllerProvider;

@interface HKHealthChartFactory : NSObject <HKCardioFitnessDataSourceProvider>

@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly, nonatomic) HKDisplayCategoryController *displayCategoryController;
@property (readonly, nonatomic) HKChartDataCacheController *chartDataCacheController;
@property (readonly, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (retain, nonatomic) NSDictionary *identifierToDisplayTypeMapping;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<HKSleepDataSourceProvider> sleepDataSourceProvider;
@property (retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (retain, nonatomic) id<HKAddDataViewControllerProvider> addDataViewControllerProvider;
@property (retain, nonatomic) id<HKCardioFitnessDataSourceProvider> cardioFitnessDataSourceProvider;

+ (id)_standardIdentifierMappings;

- (id)initWithHealthStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)supportedTypeIdentifiers;
- (id)interactiveChartForTypeIdentifier:(id)a0 preferredOverlay:(long long)a1 displayDateInterval:(id)a2 restorationUserActivity:(id)a3 chartSummaryTrendModel:(id)a4;
- (id)remoteInteractiveChartForTypeIdentifier:(id)a0 model:(id)a1 chartSummaryTrendModel:(id)a2;
- (void)updateChartSummaryTrendModel:(id)a0 viewController:(id)a1;
- (id)CHRRoomApplicationItems;
- (id)createDisplayTypeForSleepStages;
- (id)_buildApplicationItems;
- (id)_buildStandardRemoteChartViewControllerWithDisplayType:(id)a0 timeScopeRanges:(id)a1 initialTimeScope:(long long)a2 firstWeekday:(long long)a3;
- (id)_buildSummaryTrendOverlayChartViewControllerWithDisplayType:(id)a0 timeScopeRanges:(id)a1 initialTimeScope:(long long)a2 chartSummaryTrendModel:(id)a3 firstWeekday:(long long)a4;
- (id)_cardioFitnessDataSourcesForDisplayType:(id)a0;
- (id)_createSleepDisplayTypeForSeriesType:(long long)a0;
- (id)_customTypeIdentifierController:(id)a0 applicationItems:(id)a1 displayDate:(id)a2 preferredOverlay:(long long)a3 restorationUserActivity:(id)a4 trendModel:(id)a5;
- (id)_defaultRemoteDataSourcesForDisplayType:(id)a0;
- (id)_displayTypeForTypeIdentifier:(id)a0;
- (id)_mapTypeIdentifierToDisplayType:(id)a0;
- (BOOL)_oldStyleTrendableTypeIdentifier:(id)a0;
- (id)_remoteCalendarOverrideForDisplayType:(id)a0;
- (id)_remoteChartDisplayTypeForTypeIdentifier:(id)a0;
- (id)_remoteCustomFormatterForDisplayType:(id)a0;
- (id)_remoteDataSourcesForDisplayType:(id)a0;
- (id)_remoteDateIntervalsWithQueryAlignment:(long long)a0 gregorianCalendar:(id)a1;
- (id)_remoteDisplayTypeConfigurationFromDataSources:(id)a0 model:(id)a1 originalDisplayType:(id)a2;
- (id)_remoteGraphSeriesForDisplayType:(id)a0 graphSeriesDataSource:(id)a1 timeScope:(long long)a2;
- (id)_remoteStatisticsIntervalForDisplayType:(id)a0 timeScope:(long long)a1;
- (id)_resolvedDisplayDateForDisplayType:(id)a0 displayDate:(id)a1 timeScope:(long long)a2 gregorianCalendar:(id)a3;
- (long long)_resolvedTimeScopeForTypeIdentifier:(id)a0 displayDateInterval:(id)a1;
- (id)_sleepRemoteDataSourcesForDisplayType:(id)a0;
- (id)_sleepRemoteGraphSeriesForDisplayType:(id)a0 graphSeriesDataSource:(id)a1 timeScope:(long long)a2;
- (long long)_sourceFirstWeekdayFromModel:(id)a0;
- (id)_sourceTimeZoneFromModel:(id)a0;
- (id)_standardRemoteGraphSeriesForDisplayType:(id)a0 graphSeriesDataSource:(id)a1 timeScope:(long long)a2;
- (id)_trendDisplayTypeForTypeIdentifier:(id)a0 applicationItems:(id)a1 overlayRoomViewController:(id)a2;
- (id)activityChartForActivityMoveMode:(long long)a0 displayDate:(id)a1 activityOptions:(unsigned long long)a2 chartSharableModel:(id)a3;
- (id)chartForTypeIdentifier:(id)a0 dateRange:(id)a1 minimumSize:(struct CGSize { double x0; double x1; })a2;
- (id)chartForTypeIdentifier:(id)a0 dateRange:(id)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 disableXAxis:(BOOL)a3 currentCalendar:(id)a4;
- (id)createDisplayTypeForSleepDuration;
- (id)createInteractiveChartForSimpleDisplayType:(id)a0 chartOptions:(unsigned long long)a1;
- (void)encodeActivityChartDataForActivityMoveMode:(long long)a0 completion:(id /* block */)a1;
- (void)encodeChartQueryDataForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0 preferredUnitPreferenceController:(id)a1;
- (id)internalUnitPreferenceController;
- (id)makeCardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1 preferredOverlay:(long long)a2 trendModel:(id)a3;
- (id)standardSleepChartFormatter;

@end
