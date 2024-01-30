@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;
- (void)saveDaySummaries:(id)a0 completion:(id /* block */)a1;
- (void)fetchScheduledNotificationsWithCompletion:(id /* block */)a0;
- (void)saveDaySummary:(id)a0 completion:(id /* block */)a1;
- (void)saveMenstrualFlow:(long long)a0 dayIndex:(long long)a1 updateAdjacentDays:(BOOL)a2 completion:(id /* block */)a3;
- (void)saveMenstrualFlowByDayIndex:(id)a0 completion:(id /* block */)a1;
- (void)saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (void)savePeriodNotYetStartedWithCompletion:(id /* block */)a0;
- (void)savePeriodNotYetEndedWithCompletion:(id /* block */)a0;
- (void)savePeriodStartedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)savePeriodStartedOnDayIndex:(long long)a0 endedOnDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)savePeriodEndedOnDayIndex:(long long)a0 completion:(id /* block */)a1;

@end
