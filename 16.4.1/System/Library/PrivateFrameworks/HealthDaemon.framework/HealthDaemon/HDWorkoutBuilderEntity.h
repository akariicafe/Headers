@interface HDWorkoutBuilderEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)finishWorkoutBuilderWithIdentifier:(id)a0 dateInterval:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)protectionClass;
+ (id)createEntityForBuilderConfiguration:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntitiesExcludingSessions:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntityWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)privateSubEntities;
+ (BOOL)discardBuilderWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntitiesForSource:(id)a0 profile:(id)a1 error:(id *)a2;

- (BOOL)setStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (long long)associateObject:(id)a0 timestamp:(double)a1 transaction:(id)a2 error:(id *)a3;
- (id)configurationWithTransaction:(id)a0 error:(id *)a1;
- (id)dataIntervalInTransaction:(id)a0 error:(id *)a1;
- (id)endDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)enumerateAssociatedSampleValuesOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (BOOL)enumerateAssociatedSamplesOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (BOOL)enumerateAssociatedUUIDsWithTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateDataSourcesForProfile:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateStatisticsInTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)insertPrimaryWorkoutActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)insertWorkoutActivity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)insertWorkoutEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)metadataWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)pruneAssociatedSamplesToDateInterval:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)quantityTypesIncludedWhilePausedInTransaction:(id)a0 error:(id *)a1;
- (BOOL)removeDataSourceWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)sessionIdentifierWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setArchivedState:(id)a0 forDataSourceIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)setDataInterval:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setDeviceEntity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setQuantityTypesIncludedWhilePaused:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setSessionIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setWorkoutConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)startDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)storeStatisticsCalculator:(id)a0 anchor:(id)a1 activityUUID:(id)a2 transaction:(id)a3 error:(id *)a4;
- (BOOL)updateWorkoutActivityEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)updateWorkoutActivityMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)workoutActivitiesInTransaction:(id)a0 error:(id *)a1;
- (id)workoutEventsInTransaction:(id)a0 error:(id *)a1;

@end
