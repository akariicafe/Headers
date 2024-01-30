@class HKGraphSeries, HKInteractiveChartDisplayType, HKHealthStore, HKDisplayType, HKUnit;
@protocol HKDateRangeDataSourceDelegate;

@interface _HKCardioFitnessLevelContext : _HKCardioFitnessOverlayContext

@property (nonatomic) long long cardioFitnessLevel;
@property (retain, nonatomic) HKGraphSeries *cardioFitnessLevelSeries;
@property (retain, nonatomic) id<HKDateRangeDataSourceDelegate> dataSourceDelegate;
@property (retain, nonatomic) HKInteractiveChartDisplayType *overlayDisplayType;
@property (retain, nonatomic) HKDisplayType *baseDisplayType;
@property (retain, nonatomic) HKUnit *unit;
@property (retain, nonatomic) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)_makeGraphSeriesWithDataSource:(id)a0 baseDisplayType:(id)a1;
- (void)_updateContextItemWithChartPointCountForDateInterval:(id)a0 timeScope:(long long)a1 completion:(id /* block */)a2;
- (void)_updateContextItemWithSampleCountForDateInterval:(id)a0 timeScope:(long long)a1 completion:(id /* block */)a2;
- (id)initWithMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 baseDisplayType:(id)a3 cardioFitnessLevel:(long long)a4;

@end
