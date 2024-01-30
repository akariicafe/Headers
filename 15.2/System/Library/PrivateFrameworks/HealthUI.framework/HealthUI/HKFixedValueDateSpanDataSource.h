@class HKChartSummaryTrendModel;

@interface HKFixedValueDateSpanDataSource : HKDateRangeDataSource <HKDateRangeDataSourceDelegate>

@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (readonly, copy, nonatomic) id /* block */ preferredUnitBlock;
@property (readonly, copy, nonatomic) id /* block */ fixedValueScalingBlock;

- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)a0;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (id)initWithTrendModel:(id)a0 preferredUnitBlock:(id /* block */)a1 fixedValueScalingBlock:(id /* block */)a2;
- (BOOL)_insideRange:(id)a0 trendSpan:(id)a1;
- (void)_setPreferredUnitForBlock:(id)a0 unit:(id)a1;
- (id)dataForDateRange:(id)a0 timeScope:(long long)a1;

@end
