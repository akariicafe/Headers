@class HKInteractiveChartOverlayViewController, NSMutableArray;

@interface _HKInteractiveChartOverlayWaitForCacheData : NSObject

@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayController;
@property (retain, nonatomic) NSMutableArray *waitForDataSources;

- (void).cxx_destruct;
- (id)_findDataSource:(id)a0;
- (void)addWaitForDataSource:(id)a0 graphSeriesContext:(id)a1 timeScope:(long long)a2 startDate:(id)a3 endDate:(id)a4 priorityDelegate:(id)a5 completion:(id /* block */)a6;
- (id)initWithOverlayController:(id)a0;
- (void)removeWaitForDataSource:(id)a0;

@end
