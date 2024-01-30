@interface HDWorkoutClusterEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)privateSubEntities;
+ (id)clusterEntitiesWithTransaction:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
+ (id)clusterUUIDsForWorkoutUUIDs:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)deleteWorkoutClusterWithUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)entityForClusterUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)insertWorkoutCluster:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)updateWorkoutClusterWithUUID:(id)a0 relevanceValue:(id)a1 lastWorkoutUUID:(id)a2 bestWorkoutUUID:(id)a3 workoutUUIDsToAssociate:(id)a4 workoutUUIDsToRemove:(id)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)updateWorkoutClusterWithUUID:(id)a0 routeLabel:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)updateWorkoutClusterWithUUID:(id)a0 routeSnapshot:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)workoutClusterContainingWorkoutUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)workoutClustersForProfile:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
+ (id)workoutEntityForUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)workoutUUIDsForClusterUUID:(id)a0 profile:(id)a1 error:(id *)a2;

- (BOOL)modelPropertiesWithTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)numberOfWorkoutsWithTransaction:(id)a0 error:(id *)a1;
- (id)snapshotEntityWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutRouteSnapshotWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutUUIDsWithTransaction:(id)a0 error:(id *)a1;

@end
