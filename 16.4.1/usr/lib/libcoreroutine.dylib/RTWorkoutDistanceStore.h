@class NSString;

@interface RTWorkoutDistanceStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyDictionaryForIsVisited:(BOOL)a0;
+ (id)fetchRequestForWorkoutDistanceEnumerationOptions:(id)a0 error:(id *)a1;
+ (id)predicateForObjectIDs:(id)a0;

- (void)fetchWorkoutDistancesWithOffset:(unsigned long long)a0 limit:(unsigned long long)a1 maxDistanceThreshold:(double)a2 includeVisitedRecords:(BOOL)a3 handler:(id /* block */)a4;
- (void)_storeWorkoutDistances:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTotalWorkoutDistancesCountWithHandler:(id /* block */)a0;
- (void)_fetchTotalWorkoutDistancesCountWithClusterSet1:(id)a0 clusterSet2:(id)a1 workoutActivityType:(long long)a2 maxDistanceThreshold:(double)a3 handler:(id /* block */)a4;
- (void)fetchTotalWorkoutDistancesCountWithHandler:(id /* block */)a0;
- (void)_updateWorkoutDistancesWithPredicate:(id)a0 propertiesDictionary:(id)a1 handler:(id /* block */)a2;
- (void)deleteWorkoutDistanceWithWorkoutUUID:(id)a0 handler:(id /* block */)a1;
- (void)fetchTotalWorkoutDistancesCountWithClusterSet1:(id)a0 clusterSet2:(id)a1 workoutActivityType:(long long)a2 maxDistanceThreshold:(double)a3 handler:(id /* block */)a4;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)clearWithHandler:(id /* block */)a0;
- (void)enumerateStoredWorkoutDistancesWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (void)_fetchWorkoutDistancesWithWorkout:(id)a0 handler:(id /* block */)a1;
- (void)_fetchWorkoutDistanceWithFirstWorkout:(id)a0 secondWorkout:(id)a1 handler:(id /* block */)a2;
- (void)_fetchUniqueWorkoutUUIDsWithHandler:(id /* block */)a0;
- (void)updateWorkoutDistancesWithObjectIDs:(id)a0 isVisited:(BOOL)a1 handler:(id /* block */)a2;
- (id)_getCrossJoinPredicateForClusterSet1:(id)a0 clusterSet2:(id)a1 workoutActivityType:(long long)a2 maxDistanceThreshold:(double)a3;
- (void)fetchUniqueWorkoutUUIDsWithHandler:(id /* block */)a0;
- (void)storeWorkoutDistances:(id)a0 handler:(id /* block */)a1;
- (void)_deleteWorkoutDistanceWithWorkoutUUID:(id)a0 handler:(id /* block */)a1;
- (void)fetchWorkoutDistanceWithFirstWorkout:(id)a0 secondWorkout:(id)a1 handler:(id /* block */)a2;
- (void)_fetchWorkoutsWithOffset:(unsigned long long)a0 limit:(unsigned long long)a1 maxDistanceThreshold:(double)a2 includeVisitedRecords:(BOOL)a3 handler:(id /* block */)a4;
- (void)fetchWorkoutDistancesWithWorkout:(id)a0 handler:(id /* block */)a1;

@end
