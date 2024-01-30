@class HKHealthQueryChartCacheDataSource;

@interface _HKRemoteDataSources : NSObject

@property (readonly, nonatomic) BOOL supportsChartQueryDataGeneration;
@property (readonly, nonatomic) HKHealthQueryChartCacheDataSource *monthDataSource;
@property (readonly, nonatomic) HKHealthQueryChartCacheDataSource *sixMonthDataSource;

- (void).cxx_destruct;
- (id)initWithSupportsChartQueryDataGeneration:(BOOL)a0 montDataSource:(id)a1 sixMonthDataSource:(id)a2;

@end
