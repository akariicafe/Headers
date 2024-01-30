@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, BRCCiconiaStatusProvider;

@interface BRCFPFSMigrationScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_trialRefreshQueue;
    NSObject<OS_dispatch_source> *_trialRefreshSource;
    NSUserDefaults *_fpfsFeatureDefaults;
    id<BRCCiconiaStatusProvider> _ciconiaStatusProvider;
}

- (void).cxx_destruct;
- (BOOL)_enableFPFSFeature;
- (id)_getBootTime;
- (id)_getBootUUID;
- (BOOL)_isMigrationToFPFSDisabled;
- (void)_scheduleRebootIfNeeded;
- (void)_scheduleXPCActivityForReboot;
- (void)_stopTrialRefresh;
- (void)_stopXPCActivityForReboot;
- (void)fixFPFSFeatureFlagUserDefaults;
- (id)initWithCiconiaStatusProvider:(id)a0;
- (void)removeSchedule;
- (void)scheduleMigrationIfNeeded;

@end
