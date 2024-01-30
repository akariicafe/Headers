@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void)savePeriodStartedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)saveMenstrualFlow:(long long)a0 dayIndex:(long long)a1 updateAdjacentDays:(BOOL)a2 completion:(id /* block */)a3;
- (id)remoteInterface;
- (void)savePeriodStartedOnDayIndex:(long long)a0 endedOnDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)saveDaySummaries:(id)a0 canOverrideCreationDate:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveMenstrualFlowByDayIndex:(id)a0 completion:(id /* block */)a1;
- (void)savePeriodNotYetEndedWithCompletion:(id /* block */)a0;
- (void)fetchScheduledNotificationsWithCompletion:(id /* block */)a0;
- (void)savePeriodEndedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)saveDaySummary:(id)a0 completion:(id /* block */)a1;
- (void)savePeriodNotYetStartedWithCompletion:(id /* block */)a0;
- (void)saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (void)saveDaySummaries:(id)a0 completion:(id /* block */)a1;

@end
