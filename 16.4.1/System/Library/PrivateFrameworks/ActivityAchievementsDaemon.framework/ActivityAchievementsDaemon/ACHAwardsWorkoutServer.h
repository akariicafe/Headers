@class ACHWorkoutUtility, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ACHAwardsWorkoutServer : HDStandardTaskServer <ACHAwardsWorkoutServerInterface>

@property (retain, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)a0 type:(unsigned long long)a1 endingOnOrBeforeDate:(id)a2 completion:(id /* block */)a3;
- (void)remote_numberOfWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1 completion:(id /* block */)a2;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)a0 type:(unsigned long long)a1 andLocation:(unsigned long long)a2 containedInInterval:(id)a3 completion:(id /* block */)a4;
- (id)exportedInterface;
- (void)remote_bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)a0 endingBeforeDate:(id)a1 completion:(id /* block */)a2;
- (void)remote_bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)a0 endingBeforeDate:(id)a1 completion:(id /* block */)a2;
- (void)remote_workoutsInDateInterval:(id)a0 completion:(id /* block */)a1;
- (id)_protectedDataAvailabilityError;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)remote_numberOfFirstPartyWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1 completion:(id /* block */)a2;

@end
