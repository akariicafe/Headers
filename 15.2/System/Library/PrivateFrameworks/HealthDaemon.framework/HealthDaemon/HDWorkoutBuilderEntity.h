@interface HDWorkoutBuilderEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)privateSubEntities;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)workoutBuilderEntitiesExcludingSessions:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntitiesForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)createEntityForBuilderConfiguration:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)discardBuilderWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutBuilderEntityWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)finishWorkoutBuilderWithIdentifier:(id)a0 dateInterval:(id)a1 profile:(id)a2 error:(id *)a3;

- (BOOL)enumerateAssociatedSampleValuesOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (BOOL)pruneAssociatedSamplesToDateInterval:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)enumerateAssociatedUUIDsWithTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)metadataWithTransaction:(id)a0 error:(id *)a1;
- (id)configurationWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutEventsInTransaction:(id)a0 error:(id *)a1;
- (BOOL)enumerateStatisticsInTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)quantityTypesIncludedWhilePausedInTransaction:(id)a0 error:(id *)a1;
- (id)dataIntervalInTransaction:(id)a0 error:(id *)a1;
- (id)sessionIdentifierWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setSessionIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)startDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)endDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setDataInterval:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setQuantityTypesIncludedWhilePaused:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setMetadata:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setDeviceEntity:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setWorkoutConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (long long)associateObject:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)enumerateAssociatedSamplesOfType:(id)a0 interval:(id)a1 profile:(id)a2 error:(id *)a3 sampleHandler:(id /* block */)a4;
- (BOOL)insertWorkoutEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)deleteStatisticsForType:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)storeStatisticsCalculator:(id)a0 anchor:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)setArchivedState:(id)a0 forDataSourceIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)removeDataSourceWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
- (BOOL)enumerateDataSourcesForProfile:(id)a0 error:(id *)a1 block:(id /* block */)a2;

@end
