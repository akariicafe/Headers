@class NSString, NSCalendar, HKDisplayType, HKHealthStore;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {
    HKHealthStore *_healthStore;
}

@property (readonly, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) NSCalendar *calendarOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queryDescription;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)supportsChartQueryDataGeneration;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;
- (unsigned long long)calendarUnitForTimeScope:(long long)a0 displayType:(id)a1;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)statisticsIntervalForTimeScope:(long long)a0 displayType:(id)a1;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1;
- (id)codableQueryDataWithType:(int)a0 startDate:(id)a1 endDate:(id)a2 statisticsInterval:(id)a3 queryDataObject:(id)a4;
- (id)_buildDescriptionFromStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2;
- (id)operationForIdentifier:(id)a0 priorityDelegate:(id)a1 completion:(id /* block */)a2;

@end
