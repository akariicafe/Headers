@class HKDisplayType;

@interface HKHandwashingInteractiveChartViewController : HKInteractiveChartViewController

@property (retain, nonatomic) HKDisplayType *primaryDisplayType;
@property (retain, nonatomic) HKDisplayType *goalDisplayType;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;
- (id)_generateHandwashingGoalDataSource;
- (id)_generateHandwashingGoalDisplayTypeWithDisplayType:(id)a0 unitPreferencesController:(id)a1 selectedTimeScopeController:(id)a2;
- (id)_generateHandwashingGoalLineSeriesWithDisplayType:(id)a0 unitPreferenceController:(id)a1 color:(id)a2;
- (id)initWithDisplayTypeController:(id)a0 healthStore:(id)a1 unitPreferenceController:(id)a2 dateCache:(id)a3 chartDataCacheController:(id)a4 selectedTimeScopeController:(id)a5 sampleTypeDateRangeController:(id)a6 initialXValue:(id)a7;

@end
