@class NPSManager, NSString, HKSPObserverSet, HDSPEnvironment;
@protocol HDSPSource, HKSPUserDefaults;

@interface HDSPSleepStorage : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;
@property (readonly, copy, nonatomic) id /* block */ perGizmoDefaultsProvider;
@property (readonly, nonatomic) id<HKSPUserDefaults> perGizmoDefaults;
@property (readonly, nonatomic) NPSManager *npsManager;
@property (readonly, nonatomic) unsigned long long dataVersion;
@property (readonly, nonatomic) BOOL needsMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;

+ (id /* block */)perGizmoDefaultsProvider;

- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (id)handleExternalSync;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 perGizmoDefaultsProvider:(id /* block */)a1 npsManager:(id)a2;
- (void)_synchronizeDefaults;
- (void)_updateDefaultsAndKeysToSync:(id)a0 perGizmoKeysToSync:(id)a1 propertiesToSync:(id)a2 perGizmoProperties:(id)a3 object:(id)a4 key:(id)a5;
- (void)removeObserver:(id)a0;
- (BOOL)saveSleepEventRecordChanges:(id)a0 error:(id *)a1;
- (BOOL)_saveObject:(id)a0 propertiesToSave:(id)a1 propertiesToSync:(id)a2 error:(id *)a3;
- (id)loadSleepSettings:(id *)a0;
- (void)_synchronizeDefaultsForKeys:(id)a0 perGizmoKeys:(id)a1;
- (id)initWithEnvironment:(id)a0;
- (BOOL)saveSleepSettingsChanges:(id)a0 error:(id *)a1;
- (void)addObserver:(id)a0;
- (BOOL)_saveObject:(id)a0 propertiesToSave:(id)a1 propertiesToSync:(id)a2 perGizmoProperties:(id)a3 error:(id *)a4;
- (id)_loadObjectOfClass:(Class)a0 propertiesToLoad:(id)a1 perGizmoProperties:(id)a2 perGizmoDefaultValues:(id)a3 error:(id *)a4;
- (id)loadSleepSchedule:(id *)a0;
- (BOOL)_removeObjectProperties:(id)a0 propertiesToSync:(id)a1 error:(id *)a2;
- (BOOL)_saveObjectChanges:(id)a0 propertiesToSave:(id)a1 propertiesToSync:(id)a2 perGizmoProperties:(id)a3 versionKey:(id)a4 currentVersion:(unsigned long long)a5 error:(id *)a6;
- (BOOL)_saveObjectChanges:(id)a0 propertiesToSave:(id)a1 propertiesToSync:(id)a2 versionKey:(id)a3 currentVersion:(unsigned long long)a4 error:(id *)a5;
- (BOOL)saveSleepSchedule:(id)a0 error:(id *)a1;
- (BOOL)saveSleepEventRecord:(id)a0 error:(id *)a1;
- (BOOL)removeSleepEventRecordWithError:(id *)a0;
- (BOOL)saveSleepSettings:(id)a0 error:(id *)a1;
- (BOOL)_removeObjectProperties:(id)a0 propertiesToSync:(id)a1 perGizmoProperties:(id)a2 error:(id *)a3;
- (BOOL)removeSleepScheduleWithError:(id *)a0;
- (id)_loadObjectOfClass:(Class)a0 propertiesToLoad:(id)a1 error:(id *)a2;
- (id)handleActivePairedDeviceDidChange;
- (id)loadSleepEventRecord:(id *)a0;
- (BOOL)saveSleepScheduleModel:(id)a0 error:(id *)a1;
- (BOOL)removeSleepSettingsWithError:(id *)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (BOOL)saveSleepScheduleChanges:(id)a0 error:(id *)a1;
- (id)loadSleepScheduleModel:(id *)a0;

@end
