@class UIColor, NSMutableDictionary, NSString, HKDisplayType, _HKInteractiveChartOverlayWaitForCacheData, HKValueRange;

@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver>

@property (retain, nonatomic) HKDisplayType *overlayDisplayType;
@property (retain, nonatomic) UIColor *currentOverlayColor;
@property (retain, nonatomic) NSMutableDictionary *overlayChartCaches;
@property (retain, nonatomic) NSMutableDictionary *customNamedCaches;
@property (retain, nonatomic) _HKInteractiveChartOverlayWaitForCacheData *waitForCacheData;
@property (readonly, nonatomic) HKDisplayType *primaryDisplayType;
@property (nonatomic) long long displayMode;
@property (retain, nonatomic) HKValueRange *initialVisibleDateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (void)_commonInitializationWithDisplayType:(id)a0;
- (id)_dataSourceForDistributionStyle:(long long)a0 timeScope:(long long)a1 namedPredicate:(id)a2;
- (id)_dataSourceForNamedDataSource:(id)a0 templateDisplayType:(id)a1;
- (id)_dataSourceForQuantityType:(id)a0 timeScope:(long long)a1 customDataSource:(id)a2;
- (BOOL)_deliverCachedDataFromSource:(id)a0 graphSeriesContext:(id)a1 timeScope:(long long)a2 startDate:(id)a3 endDate:(id)a4 completion:(id /* block */)a5;
- (void)_deliverOrWaitForDataSource:(id)a0 graphSeriesContext:(id)a1 priorityDelegate:(id)a2 timeScope:(long long)a3 startDate:(id)a4 endDate:(id)a5 queryIfNeeded:(BOOL)a6 completion:(id /* block */)a7;
- (BOOL)_displayTypeRequiresAverageAndDuration:(id)a0;
- (void)_modifyFormatter:(id)a0 forTitleOptions:(long long)a1;
- (id)_overlayChartCacheForDataSource:(id)a0 templateDisplayType:(id)a1;
- (id)_overlayChartCacheForDistributionStyle:(long long)a0 timeScope:(long long)a1 namedPredicate:(id)a2;
- (void)cachedDataForCustomGraphSeries:(id)a0 timeScope:(long long)a1 startDate:(id)a2 endDate:(id)a3 completion:(id /* block */)a4;
- (void)cachedDataForCustomGraphSeries:(id)a0 timeScope:(long long)a1 startDate:(id)a2 endDate:(id)a3 queryIfNeeded:(BOOL)a4 completion:(id /* block */)a5;
- (void)cachedDataForQuantityDistributionStyle:(long long)a0 timeScope:(long long)a1 startDate:(id)a2 endDate:(id)a3 namedPredicate:(id)a4 completion:(id /* block */)a5;
- (void)cachedDataForQuantityIdentifier:(id)a0 timeScope:(long long)a1 startDate:(id)a2 endDate:(id)a3 cacheDataSource:(id)a4 completion:(id /* block */)a5;
- (void)cachedDataForStandardDisplayType:(id)a0 timeScope:(long long)a1 startDate:(id)a2 endDate:(id)a3 completion:(id /* block */)a4;
- (void)clearDisplayTypeStack;
- (void)clearOverlayDisplayType;
- (void)clearOverlayDisplayTypeWithAutomaticAutoscale:(BOOL)a0;
- (id)displayTypeForGraphSeries:(id)a0 namedDataSource:(id)a1 templateDisplayType:(id)a2 timeScope:(long long)a3 formatter:(id)a4;
- (id)displayTypeForQuantityDistributionStyle:(long long)a0 timeScope:(long long)a1 overlayColor:(id)a2 options:(long long)a3 alternateFormatter:(id)a4 namedPredicate:(id)a5;
- (id)displayTypeForQuantityIdentifier:(id)a0 timeScope:(long long)a1 displayTypeController:(id)a2 overlayColor:(id)a3 cacheDataSource:(id)a4 alternateLineSeries:(id)a5 alternateFormatter:(id)a6 seriesOptions:(long long)a7;
- (id)initWithHealthStore:(id)a0 primaryDisplayType:(id)a1 unitPreferenceController:(id)a2 dateCache:(id)a3 chartDataCacheController:(id)a4 selectedTimeScopeController:(id)a5 sampleTypeDateRangeController:(id)a6 initialXValue:(id)a7 currentCalendarOverride:(id)a8 options:(unsigned long long)a9;
- (id)initWithTimeScopeRanges:(id)a0 healthStore:(id)a1 primaryDisplayType:(id)a2 unitPreferenceController:(id)a3 dateCache:(id)a4 chartDataCacheController:(id)a5 selectedTimeScopeController:(id)a6 sampleTypeDateRangeController:(id)a7 initialXValue:(id)a8 currentCalendarOverride:(id)a9 options:(unsigned long long)a10;
- (void)installOverlayDisplayType:(id)a0;
- (void)installStackedDisplayType:(id)a0;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (double)minimumHeightForChart;
- (id)seriesSelectionLineColorForGraphView:(id)a0;
- (void)unitPreferencesWillUpdate:(id)a0;
- (id)visibleRangeForTimeScope:(long long)a0 proposedRange:(id)a1;

@end
