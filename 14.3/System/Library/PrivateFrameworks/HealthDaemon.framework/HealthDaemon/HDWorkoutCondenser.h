@class HDPeriodicActivity, NSString, HDProfile, _HDWorkoutCondenserAnalyticsAccumulator, HDAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface HDWorkoutCondenser : NSObject <HDPeriodicActivityDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_periodicActivity;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    long long _minimumSeriesSize;
    long long _maximumSeriesSize;
    long long _deletedSamplesThreshold;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) _HDWorkoutCondenserAnalyticsAccumulator *analyticsAccumulator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)workoutEntitiesRequiringCondensationWithProfile:(id)a0 limit:(long long)a1 allowRecondensation:(BOOL)a2 error:(id *)a3;
+ (id)_insertValuesForSeries:(id)a0 quantityType:(id)a1 startTime:(double)a2 values:(id)a3 provenance:(id)a4 configuration:(id)a5 transaction:(id)a6 countOut:(long long *)a7 error:(id *)a8;
+ (BOOL)_processSamplesWithQuantityType:(id)a0 workout:(id)a1 predicate:(id)a2 configuration:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)_dataOriginProvenanceForQuantitySampleEntity:(id)a0 configuration:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)_condenserPredicateForQuantityType:(id)a0 workout:(id)a1 entity:(id)a2 configuration:(id)a3;
+ (id)_workoutEntitiesRequiringCondensationWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (long long)_hasSamplesThatOverlapInTimeWithEntity:(id)a0 enumerationPredicate:(id)a1 configuration:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)_condenseWorkouts:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)_deleteSamplesWithUUIDData:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)seriesSyncIdentifierForEntity:(id)a0 workout:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (long long)_hasMoreThanMinimumNumberOfSingleValueSamplesWithEntity:(id)a0 enumerationPredicate:(id)a1 configuration:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (id)_workoutEntitiesRequiringCondensationWithProfile:(id)a0 limit:(long long)a1 allowRecondensation:(BOOL)a2 analyticsAccumulator:(id)a3 error:(id *)a4;
+ (id)_requiredMetadataForEntity:(id)a0 quantityType:(id)a1 workout:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)_finishSeries:(id)a0 quantityType:(id)a1 workout:(id)a2 UUIDDataToDelete:(id)a3 configuration:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (BOOL)_updateCondenserVersionForWorkout:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)_createSeriesForIdentifier:(id)a0 workout:(id)a1 quantityType:(id)a2 startTime:(double)a3 values:(id)a4 UUIDDataToDelete:(id)a5 provenance:(id)a6 configuration:(id)a7 transaction:(id)a8 error:(id *)a9;
+ (BOOL)_condenseWorkout:(id)a0 entity:(id)a1 configuration:(id)a2 error:(id *)a3;
+ (BOOL)_condenseSamplesWithQuantityType:(id)a0 workout:(id)a1 entity:(id)a2 predicate:(id)a3 configuration:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (void)_logCondenserProcessedWorkout:(id)a0;
+ (id)_seriesSyncIdentifierForWorkout:(id)a0 startTime:(double)a1 endTime:(double)a2 count:(long long)a3;
+ (id)condensableQuantityTypes;
+ (long long)_requiresProcessingWithEntity:(id)a0 quantityType:(id)a1 enumerationPredicate:(id)a2 configuration:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)_condenseAndUpdateWorkout:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)_addDatumToBuffer:(id)a0 buffer:(id)a1;

- (id)initWithProfile:(id)a0;
- (BOOL)_queue_condenseWorkoutsWithBatchLimit:(long long)a0 analyticsAccumulator:(id)a1 error:(id *)a2;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)setDeletedSamplesThreshold:(long long)a0;
- (void).cxx_destruct;
- (void)_queue_submitAnalyticEventForReason:(long long)a0 batchSize:(long long)a1 success:(BOOL)a2 duration:(double)a3 analyticsAccumulator:(id)a4 error:(id)a5;
- (void)dealloc;
- (void)setMaximumSeriesSize:(long long)a0;
- (BOOL)_queue_condenseWorkoutsWithAccessibilityAssertion:(id)a0 batchLimit:(long long)a1 analyticsAccumulator:(id)a2 error:(id *)a3;
- (id)condensableWorkoutsWithError:(id *)a0;
- (id)condensedWorkoutsWithError:(id *)a0;
- (void)_queue_didPerformCondensationForReason:(long long)a0 success:(BOOL)a1 error:(id)a2;
- (void)setMinimumSeriesSize:(long long)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)_queue_popTTRPromptIfRequiredWithReason:(long long)a0 success:(BOOL)a1 error:(id)a2;
- (void)condenseWorkoutsForReason:(long long)a0 workoutBatchLimit:(long long)a1 completion:(id /* block */)a2;
- (BOOL)condenseWorkout:(id)a0 error:(id *)a1;

@end
