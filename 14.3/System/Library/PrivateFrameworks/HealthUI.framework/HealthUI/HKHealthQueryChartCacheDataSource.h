@class NSString, HKDisplayType, HKHealthStore;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {
    HKHealthStore *_healthStore;
}

@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;
- (unsigned long long)calendarUnitForTimeScope:(long long)a0 displayType:(id)a1;
- (id)statisticsIntervalForTimeScope:(long long)a0 displayType:(id)a1;
- (id)_buildDescriptionFromStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2;
- (id)operationForIdentifier:(id)a0 priorityDelegate:(id)a1 completion:(id /* block */)a2;

@end
