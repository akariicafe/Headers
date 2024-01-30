@class HKValueRange;

@interface WDChartExperimentsTachogram : HKInteractiveChartViewController

@property (readonly, nonatomic) HKValueRange *computedAxisRange;
@property (readonly, nonatomic) HKValueRange *requestedVisibleRange;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })extentOfData:(id)a0;
- (id)initWithIrregularBeatData:(id)a0 normalData:(id)a1 visibleRange:(id)a2 profile:(id)a3;
- (id)tachogramSeriesWithData:(id)a0 unit:(id)a1 maximumY:(double)a2 axis:(id)a3 irregularBeatStyle:(BOOL)a4;

@end
