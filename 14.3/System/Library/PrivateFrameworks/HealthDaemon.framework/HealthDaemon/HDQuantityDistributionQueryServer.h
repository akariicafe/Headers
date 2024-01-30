@class _HKQuantityDistributionQueryServerConfiguration;

@interface HDQuantityDistributionQueryServer : HDQueryServer

@property (readonly, copy, nonatomic) _HKQuantityDistributionQueryServerConfiguration *quantityDistributionQueryServerConfiguration;

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)_queue_fetchHistogramDataWithError:(id *)a0;
- (id)_buildStatisticsCollectionCalculatorForAverageAndDuration;
- (id)_intervalsForContextStyle:(long long)a0 includeContextIdentifiers:(BOOL)a1 errorOut:(id *)a2;
- (id)_sqlitePredicateForObjectType:(id)a0 errorOut:(id *)a1;
- (BOOL)_walkSampleValuesWithPredicate:(id)a0 errorOut:(id *)a1 handler:(id /* block */)a2;
- (id)_combineDistributionResults:(id)a0 withIntersectingDateIntervals:(id)a1;
- (id)_combineDistributionResults:(id)a0 withAverageAndDurations:(id)a1 bucketUnits:(id)a2;
- (id)_mindfulnessPredicateWithErrorOut:(id *)a0;
- (id)_walkSampleDatesWithPredicate:(id)a0 entityClass:(Class)a1 errorOut:(id *)a2;
- (id)_workoutPredicateWithErrorOut:(id *)a0;
- (id)_categoryPredicateWithTypeCode:(long long)a0 matchingValue:(id)a1 errorOut:(id *)a2;
- (id)_walkSampleDatesWithPredicate:(id)a0 entityClass:(Class)a1 includeUUID:(BOOL)a2 errorOut:(id *)a3;

@end
