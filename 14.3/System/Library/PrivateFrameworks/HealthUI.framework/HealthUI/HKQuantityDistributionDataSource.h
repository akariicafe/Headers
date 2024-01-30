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

- (void).cxx_destruct;
- (id)queryDescription;
- (id)initWithQuantityType:(id)a0 unitController:(id)a1 healthStore:(id)a2 contextStyle:(long long)a3 predicate:(id)a4 options:(unsigned long long)a5 baseDisplayType:(id)a6 specificStartDate:(id)a7 specificEndDate:(id)a8 userInfoCreationBlock:(id /* block */)a9;
- (id)initWithQuantityType:(id)a0 unitController:(id)a1 distributionBucketSize:(id)a2 distributionAnchor:(id)a3 healthStore:(id)a4 contextStyle:(long long)a5 predicate:(id)a6 options:(unsigned long long)a7 baseDisplayType:(id)a8 specificStartDate:(id)a9 specificEndDate:(id)a10 userInfoCreationBlock:(id /* block */)a11;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_dataBlockFromHistograms:(id)a0;
- (id)_quickDate:(id)a0;

@end
