@class NSPredicate, NSDate, HKUnitPreferenceController, HKQuantityType;

@interface HKQuantityDistributionDataSource : HKHealthQueryChartCacheDataSource

@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly, nonatomic) double bucketSize;
@property (readonly, nonatomic) double bucketAnchor;
@property (readonly, nonatomic) long long contextStyle;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSDate *specificStartDate;
@property (readonly, nonatomic) NSDate *specificEndDate;
@property (readonly, nonatomic) id /* block */ userInfoCreationBlock;

+ (id)bucketSizeForQuantityType:(id)a0 preferredUnit:(id)a1;
+ (id)bucketSizeForBloodGlucoseWithUnit:(id)a0;
+ (id)bucketSizeForDisplayType:(id)a0 preferredUnit:(id)a1;

- (id)_quickDate:(id)a0;
- (id)queryDescription;
- (id)_dataBlockFromHistograms:(id)a0;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)supportsChartQueryDataGeneration;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithQuantityType:(id)a0 unitController:(id)a1 healthStore:(id)a2 contextStyle:(long long)a3 predicate:(id)a4 options:(unsigned long long)a5 baseDisplayType:(id)a6 specificStartDate:(id)a7 specificEndDate:(id)a8 userInfoCreationBlock:(id /* block */)a9;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;

@end
