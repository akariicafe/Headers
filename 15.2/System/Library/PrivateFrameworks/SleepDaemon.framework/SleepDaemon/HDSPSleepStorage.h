@class HKSPObserverSet, HDSPSyncedDefaults, NSString, HDSPEnvironment, HDSPSyncedDefaultsConfiguration;
@protocol HDSPSource;

@interface HDSPSleepStorage : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPEnvironmentAware, HDSPSource>

@property (readonly, nonatomic) HDSPSyncedDefaults *syncedDefaults;
@property (readonly, nonatomic) HDSPSyncedDefaultsConfiguration *configuration;
@property (readonly, nonatomic) HKSPObserverSet *observers;
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

+ (id)standardConfiguration;

- (BOOL)saveSleepSettingsChanges:(id)a0 error:(id *)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (BOOL)saveSleepSchedule:(id)a0 error:(id *)a1;
- (BOOL)saveSleepEventRecordChanges:(id)a0 error:(id *)a1;
- (BOOL)removeSleepSettingsWithError:(id *)a0;
- (void)addObserver:(id)a0;
- (id)loadSleepEventRecord:(id *)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)_removeObjectProperties:(id)a0 error:(id *)a1;
- (BOOL)saveSleepEventRecord:(id)a0 error:(id *)a1;
- (void)syncedUserDefaultsDidChangeExternally:(id)a0;
- (void)saveCurrentDataVersion;
- (BOOL)saveSleepScheduleModel:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)loadSleepSchedule:(id *)a0;
- (BOOL)saveSleepScheduleChanges:(id)a0 error:(id *)a1;
- (id)initWithEnvironment:(id)a0;
- (id)loadSleepSettings:(id *)a0;
- (void)syncedUserDefaults:(id)a0 didChangeExternallyForKeys:(id)a1;
- (id)_loadObjectOfClass:(Class)a0 allowedClasses:(id)a1 propertiesToLoad:(id)a2 error:(id *)a3;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1 syncedDefaults:(id)a2;
- (BOOL)_saveObject:(id)a0 error:(id *)a1;
- (BOOL)removeSleepEventRecordWithError:(id *)a0;
- (id)loadSleepScheduleModel:(id *)a0;
- (BOOL)saveSleepSettings:(id)a0 error:(id *)a1;
- (BOOL)_saveObjectChanges:(id)a0 versionKey:(id)a1 currentVersion:(unsigned long long)a2 error:(id *)a3;
- (BOOL)removeSleepScheduleWithError:(id *)a0;

@end
