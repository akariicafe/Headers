@class NSUUID, HKTaskServerProxyProvider, NSString;

@interface ACHAwardsWorkoutClient : NSObject <_HKXPCExportable>

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1 error:(id *)a2;
- (id)exportedInterface;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 withType:(unsigned long long)a1 endingOnOrBeforeDate:(id)a2 error:(id *)a3;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 withType:(unsigned long long)a1 andLocation:(unsigned long long)a2 containedInInterval:(id)a3 error:(id *)a4;
- (id)bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)a0 endingBeforeDate:(id)a1 error:(id *)a2;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)a0 endingBeforeDate:(id)a1 error:(id *)a2;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)workoutsInDateInterval:(id)a0 error:(id *)a1;

@end
