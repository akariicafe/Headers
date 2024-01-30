@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKSleepHealthStore : NSObject <HKSleepHealthStoreInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)stopSleepTrackingSession;
- (id)exportedInterface;
- (void)saveSleepTrackingSamples:(id)a0 completion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0;
- (void)updateCurrentSleepSchedules:(id)a0 sleepDurationGoal:(id)a1 completion:(id /* block */)a2;
- (void)startSleepTrackingSession;

@end
