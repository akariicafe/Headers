@class HKValueRange;

@interface WDChartExperimentsScalarBarChart : HKInteractiveChartViewController

@property (readonly, nonatomic) HKValueRange *requestedAxisRange;
@property (readonly, nonatomic) HKValueRange *requestedVisibleRange;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_buildSeriesWithColor:(id)a0 minimumYAxisRange:(id)a1;
- (id)initWithTitle:(id)a0 unitForYAxis:(id)a1 data:(id)a2 axisRange:(id)a3 visibleRange:(id)a4 minimumYAxisRange:(id)a5 color:(id)a6 profile:(id)a7;

@end
