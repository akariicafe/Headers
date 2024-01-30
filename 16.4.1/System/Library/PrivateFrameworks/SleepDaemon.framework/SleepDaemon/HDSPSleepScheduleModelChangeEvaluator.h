@class HKSPSleepSettings, HKSPSleepSchedule, HDSPEnvironment, HKSPSleepEventRecord, NSString;

@interface HDSPSleepScheduleModelChangeEvaluator : NSObject <HDSPEnvironmentAware>

@property (copy, nonatomic) HKSPSleepSchedule *lastSchedule;
@property (copy, nonatomic) HKSPSleepSettings *lastSettings;
@property (copy, nonatomic) HKSPSleepEventRecord *lastRecord;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_evaluateChangesFromObject:(id)a0 toObject:(id)a1 outChangeSet:(id *)a2;

- (id)initWithEnvironment:(id)a0;
- (id)evaluateSleepScheduleModelChange:(id)a0;
- (id)evaluateSleepSettingsUpdate:(id)a0;
- (id)evaluateSleepRecordUpdate:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)_persistSchedule:(id)a0;
- (id)evaluateSleepRecordAdd:(id)a0;
- (id)evaluateSleepScheduleRemove;
- (void)_persistSettings:(id)a0;
- (void)_persistRecord:(id)a0;
- (id)evaluateSleepSettingsAdd:(id)a0;
- (void)_persistModel:(id)a0;
- (id)evaluateSleepScheduleUpdate:(id)a0;
- (void)_restorePersistedModelWithScheduleData:(id)a0 settingsData:(id)a1 recordData:(id)a2;
- (void)_loadPersistedModel;
- (id)evaluateSleepScheduleAdd:(id)a0;
- (void).cxx_destruct;

@end
