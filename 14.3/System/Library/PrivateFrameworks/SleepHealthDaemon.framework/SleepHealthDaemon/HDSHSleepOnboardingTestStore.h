@class HKSPMutableSleepSettings, HKSPMutableSleepEventRecord, NSDate;
@protocol HKSPSleepStoreObserver;

@interface HDSHSleepOnboardingTestStore : NSObject <HKSPSleepOnboardingStore> {
    HKSPMutableSleepEventRecord *_sleepEventRecord;
    HKSPMutableSleepSettings *_sleepSettings;
    id<HKSPSleepStoreObserver> _observer;
}

@property (retain, nonatomic) NSDate *currentDate;
@property (nonatomic) BOOL springBoardGreetingDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)setSleepTrackingOnboardingCompletedVersion:(long long)a0 completion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (id)currentSleepEventRecordWithError:(id *)a0;
- (void)saveCurrentSleepEventRecord:(id)a0 completion:(id /* block */)a1;
- (void)currentSleepEventRecordWithCompletion:(id /* block */)a0;
- (id)currentSleepSettingsWithError:(id *)a0;
- (void)setSleepCoachingOnboardingCompletedVersion:(long long)a0 completion:(id /* block */)a1;
- (void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)a0 completion:(id /* block */)a1;

@end
