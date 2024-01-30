@interface HDRaceRouteWorkoutEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)privateSubEntities;
+ (BOOL)insertCodableRoutePoints:(id)a0 workoutPersistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)createRaceRouteWorkoutFromWorkout:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)entityForWorkoutUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateRoutePointsForWorkoutPersistentID:(long long)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 startDuration:(double)a3 finishDuration:(double)a4 transaction:(id)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (BOOL)enumerateRoutePointsForWorkoutUUID:(id)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 profile:(id)a3 error:(id *)a4 dataHandler:(id /* block */)a5;
+ (id)insertCodableRacingMetrics:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)markForDeletionWorkoutDataWithPersistentID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)pruneWorkoutsMarkedForDeletionInTransaction:(id)a0 error:(id *)a1;
+ (id)startingPointForWorkoutWithPersistentID:(long long)a0 transaction:(id)a1 error:(id *)a2;

- (id)dateToDeleteInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setDateToDelete:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
