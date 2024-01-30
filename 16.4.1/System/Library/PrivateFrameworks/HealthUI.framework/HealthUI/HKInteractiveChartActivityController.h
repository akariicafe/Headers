@class HKInteractiveChartDisplayType, NSMapTable, HKActivitySummaryAnnotationViewDataSource, _ActivityCurrentValueView, HKActivitySummaryDataProvider, NSString, _HKWheelchairUseCharacteristicCache;
@protocol HKInteractiveChartCurrentValueViewCallbacks;

@interface HKInteractiveChartActivityController : HKInteractiveChartViewController <HKInteractiveChartViewObserver, HKActivityBarSeriesDelegate>

@property (retain, nonatomic) NSMapTable *yAxisAccessoryViewsByGraphSeries;
@property (retain, nonatomic) HKActivitySummaryDataProvider *activityDataProvider;
@property (retain, nonatomic) HKActivitySummaryAnnotationViewDataSource *activityAnnotationDataSource;
@property (nonatomic) long long currentTimeScope;
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (retain, nonatomic) _ActivityCurrentValueView *activityCurrentValueView;
@property (weak, nonatomic) id<HKInteractiveChartCurrentValueViewCallbacks> activityCurrentValueViewCallbacks;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *moveValueDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *moveGoalDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *exerciseValueDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *exerciseGoalDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *standValueDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *standGoalDisplayType;
@property (readonly, nonatomic) unsigned long long activityOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_activitySummariesFromCodableCollection:(id)a0;
+ (id)_activitySummaryFromCodableSummaryEntry:(id)a0;
+ (id)_codableActivitySummaryDataFromSummaries:(id)a0;
+ (id)_codableActivitySummaryFromSummary:(id)a0;
+ (void)encodeChartDataWithHealthStore:(id)a0 dateCache:(id)a1 displayTypeController:(id)a2 unitController:(id)a3 activityMoveMode:(long long)a4 monthDateInterval:(id)a5 sixMonthDateInterval:(id)a6 completion:(id /* block */)a7;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (void)didUpdateFromDateZoom:(long long)a0 toDateZoom:(long long)a1 newVisibleRange:(id)a2;
- (id)makeAnnotationDataSource;
- (void)updateSelectionAnnotationDataSourceForContext:(id)a0 displayType:(id)a1 timeScope:(long long)a2;
- (id)_activitySeriesForActivityValue:(long long)a0 wheelchairUseCharacteristicCache:(id)a1 unitPreferenceController:(id)a2 displayTypeController:(id)a3 activityOptions:(unsigned long long)a4;
- (id)_activityYAxisForActivityValue:(long long)a0 zeroOnly:(BOOL)a1 stackOffset:(long long)a2 bottomLabelPadding:(double)a3 displayTypeController:(id)a4 unitPreferenceController:(id)a5;
- (id)_buildSummariesTableFromSharableModel:(id)a0;
- (long long)_countOfStackedChartsFromActivityOptions:(unsigned long long)a0;
- (id)_dayActivitySummaryForDateRange:(id)a0;
- (id)_decodeActivitySummariesFromQueryData:(id)a0;
- (id)_displayTypeForActivityValue:(long long)a0 yAxis:(id)a1 dataProvider:(id)a2 displayTypeController:(id)a3 unitPreferenceController:(id)a4 wheelchairUseCharacteristicCache:(id)a5 timescopeToSummariesTable:(id)a6 activityOptions:(unsigned long long)a7;
- (id)_displayTypeForUnits:(long long)a0 displayTypeController:(id)a1;
- (long long)_findFirstWeekdayFromModel:(id)a0;
- (id)_generateActivityBarSeriesWithColor:(id)a0 legendTitle:(id)a1 metGoalFillStyle:(id)a2 missedGoalFillStyle:(id)a3 activityValue:(long long)a4 unitPreferenceController:(id)a5 displayTypeController:(id)a6 drawLegendsInsideSeries:(BOOL)a7;
- (id)_generateActivityGoalLineSeriesWithColor:(id)a0;
- (id)_lineColorForActivityValue:(long long)a0;
- (id)_metGoalFillStyleForActivityValue:(long long)a0 useGradient:(BOOL)a1;
- (id)_missedGoalFillStyleForActivityValue:(long long)a0 useGradient:(BOOL)a1;
- (id)_rangeValueAsNumber:(id)a0;
- (long long)_representativeDataTypeForActivityValue:(long long)a0;
- (id)_spanForValueDisplayType:(id)a0 timeScope:(long long)a1 title:(id)a2;
- (id)_timeScopeRangesFromSharableModel:(id)a0;
- (id)_titleForActivityValue:(long long)a0 wheelchairUseCharacteristicCache:(id)a1;
- (id)_unitForActivityValue:(long long)a0 displayTypeController:(id)a1 unitPreferenceController:(id)a2;
- (id)_zeroStringForActivityValue:(long long)a0 displayTypeController:(id)a1 unitPreferenceController:(id)a2;
- (id)activitySummaryForCurrentRange;
- (id)calendarQueryDisplayType;
- (id)calendarQuerySampleType;
- (id)descriptionForChartData:(id)a0 timeScope:(long long)a1;
- (id)descriptionSeriesForGraphView:(id)a0;
- (id)descriptionSpansForGraphView:(id)a0 timeScope:(long long)a1;
- (long long)graphSeriesTimeScope;
- (BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)a0;
- (id)initWithHealthStore:(id)a0 unitPreferenceController:(id)a1 dateCache:(id)a2 chartDataCacheController:(id)a3 selectedTimeScopeController:(id)a4 sampleTypeDateRangeController:(id)a5 wheelchairUseCharacteristicCache:(id)a6 initialXValue:(id)a7 activityMoveMode:(long long)a8 activityOptions:(unsigned long long)a9 chartSharableModel:(id)a10;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (id)makeCurrentValueView;
- (id)seriesSelectionLineColorForGraphView:(id)a0;
- (void)setCurrentValueViewCallbacks:(id)a0;
- (void)tappedOnCurrentValueView:(id)a0;
- (void)updateCurrentValueView:(id)a0 graphView:(id)a1 timeScope:(long long)a2 showInfoButton:(BOOL)a3;

@end
