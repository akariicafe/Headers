@class HKQuantityType, HKUnitPreferenceController;

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */ _mappingFunction;
}

@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) unsigned long long statisticsOptions;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)initWithUnitController:(id)a0 options:(unsigned long long)a1 displayType:(id)a2 healthStore:(id)a3;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;
- (id /* block */)_createMappingFunction;
- (id)_dailyAverageQueriesWithStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completion:(id /* block */)a3;
- (id)_defaultQueriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_averageByInterval:(id)a0 startDate:(id)a1 statistics:(id)a2;

@end
