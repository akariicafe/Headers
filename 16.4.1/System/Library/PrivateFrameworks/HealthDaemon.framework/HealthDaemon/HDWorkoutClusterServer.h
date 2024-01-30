@class NSString, HDRaceRouteClusterManager, HDWorkoutClusterManager;

@interface HDWorkoutClusterServer : HDStandardTaskServer <HKWorkoutClusterStoreServer> {
    HDRaceRouteClusterManager *_raceRouteClusterManager;
    HDWorkoutClusterManager *_workoutClusterManager;
}

@property (nonatomic) unsigned long long maxWorkoutBatchSize;
@property (nonatomic) unsigned long long maxRouteCoordinateBatchSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (id)taskIdentifier;

- (id)remoteInterface;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)remote_createWorkoutCluster:(id)a0 completion:(id /* block */)a1;
- (void)remote_deleteWorkoutClusterWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchRouteCoordinatesForWorkoutUUID:(id)a0 dateInterval:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)remote_fetchRouteCoordinatesForWorkoutUUID:(id)a0 startDate:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)remote_fetchWorkoutClusterContainingWorkoutUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchWorkoutClustersContainingWorkoutUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchWorkoutClustersWithCompletion:(id /* block */)a0;
- (void)remote_fetchWorkoutCountWithFilter:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchWorkoutRouteSnapshotForClusterUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchWorkoutUUIDsForClusterUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchWorkoutsWithFilter:(id)a0 anchor:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)remote_fetchWorkoutsWithFilter:(id)a0 limit:(unsigned long long)a1 sortDescriptors:(id)a2 completion:(id /* block */)a3;
- (void)remote_generateRaceRouteClustersWithLimit:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_updateWorkoutClusterWithUUID:(id)a0 newRelevance:(id)a1 newLastWorkoutUUID:(id)a2 newBestWorkoutUUID:(id)a3 newWorkoutAssociations:(id)a4 workoutAssociationsToRemove:(id)a5 completion:(id /* block */)a6;
- (void)remote_updateWorkoutRouteLabel:(id)a0 forClusterUUID:(id)a1 completion:(id /* block */)a2;
- (void)remote_updateWorkoutRouteSnapshot:(id)a0 forClusterUUID:(id)a1 completion:(id /* block */)a2;

@end
