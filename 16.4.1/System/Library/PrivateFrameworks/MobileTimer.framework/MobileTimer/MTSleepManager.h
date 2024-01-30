@class NSString, HKHealthStore, HKSPSleepStore, HKSPFeatureAvailabilityStore;
@protocol MTAlarmStorage, MTPersistence;

@interface MTSleepManager : NSObject <MTSource, HKSPSleepStoreObserver, MTAlarmObserver>

@property (readonly, nonatomic) id<MTAlarmStorage> alarmStorage;
@property (copy, nonatomic) id /* block */ sleepStoreProvider;
@property (retain, nonatomic) HKSPSleepStore *sleepStore;
@property (retain, nonatomic) HKSPFeatureAvailabilityStore *featureStore;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<MTPersistence> persistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nextSleepAlarm;

- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)updateSleepAlarms;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (BOOL)watchSleepFeaturesEnabled;
- (void)resetSleepAlarmSnoozeState;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (BOOL)_didCompleteSleepOnboarding;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)markSleepMigrationComplete;
- (id)initWithAlarmStorage:(id)a0;
- (id)sourceIdentifier;
- (void).cxx_destruct;
- (id)initWithAlarmStorage:(id)a0 sleepStoreProvider:(id /* block */)a1 featureStoreProvider:(id /* block */)a2 healthStore:(id)a3 persistence:(id)a4;

@end
