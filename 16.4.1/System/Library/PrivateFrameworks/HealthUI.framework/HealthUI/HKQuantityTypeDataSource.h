@class HKQuantityType, HKUnitPreferenceController;

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */ _mappingFunction;
}

@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) unsigned long long statisticsOptions;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (copy, nonatomic) id /* block */ preprocessingHandler;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_averageByInterval:(id)a0 startDate:(id)a1 statistics:(id)a2;
- (id /* block */)_createMappingFunction;
- (id)_dailyAverageQueriesWithStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completion:(id /* block */)a3;
- (id)_defaultQueriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_unshiftedDateIntervalIfNecessaryForStatisticsInterval:(id)a0 startDate:(id)a1 endDate:(id)a2 gregorianCalendar:(id)a3;
- (id)initWithUnitController:(id)a0 options:(unsigned long long)a1 displayType:(id)a2 healthStore:(id)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;
- (BOOL)requiresPointRealignmentToMidnightForStatisticsInterval:(id)a0;

@end
