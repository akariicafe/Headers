@interface ChronoCore.ActivityScheduler : NSObject {
    void /* unknown type, empty encoding */ _schedulingProviderQueue;
    void /* unknown type, empty encoding */ _schedulingProvider;
    void /* unknown type, empty encoding */ _dataProtectionMonitor;
    void /* unknown type, empty encoding */ _keybagProvider;
    void /* unknown type, empty encoding */ _systemDataMigrator;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_activityStore;
    void /* unknown type, empty encoding */ _lock_completedMigration;
    void /* unknown type, empty encoding */ _lock_userManager;
    void /* unknown type, empty encoding */ _lock_enqueueActivityBlocksWaitingForMigration;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
