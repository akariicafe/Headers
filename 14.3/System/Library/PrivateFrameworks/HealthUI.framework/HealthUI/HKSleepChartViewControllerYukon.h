@class NSString, HKSleepAnnotationViewDataSource;

@interface HKSleepChartViewControllerYukon : HKInteractiveChartViewController <HKInteractiveChartViewObserver>

@property (retain, nonatomic) HKSleepAnnotationViewDataSource *annotationViewDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDisplayTypes:(id)a0 healthStore:(id)a1 unitPreferenceController:(id)a2 dateCache:(id)a3 chartDataCacheController:(id)a4 selectedTimeScopeController:(id)a5 sampleTypeDateRangeController:(id)a6 initialXValue:(id)a7 options:(unsigned long long)a8;
- (void)updateSelectionAnnotationDataSourceForContext:(id)a0 displayType:(id)a1 timeScope:(long long)a2;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (id)seriesSelectionLineColorForGraphView:(id)a0;
- (id)makeAnnotationDataSource;
- (id)lollipopAnnotationColor;
- (void)primaryGraphViewControllerDidInitialize:(id)a0;
- (id)descriptionSpansForGraphView:(id)a0;
- (id)calendarQueryDisplayType;

@end
