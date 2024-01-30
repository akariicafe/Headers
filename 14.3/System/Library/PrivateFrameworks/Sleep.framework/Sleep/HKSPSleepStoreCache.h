@class HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepEventRecord;

@interface HKSPSleepStoreCache : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, nonatomic) BOOL sleepScheduleNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, nonatomic) BOOL sleepSettingsNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly, nonatomic) BOOL sleepEventRecordNeedsUpdate;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepScheduleStateNeedsUpdate;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) BOOL sleepModeNeedsUpdate;

- (void)_locked_purgeCachedSleepSettings;
- (id)init;
- (void).cxx_destruct;
- (void)purgeCachedSleepScheduleState;
- (void)updateCachedSleepScheduleState:(unsigned long long)a0;
- (void)updateCachedSleepMode:(long long)a0;
- (void)updateCachedSleepEventRecord:(id)a0;
- (void)_locked_purgeCachedSleepSchedule;
- (void)purgeCachedSleepEventRecord;
- (void)_withLock:(id /* block */)a0;
- (id)cachedSleepScheduleWithMissHandler:(id /* block */)a0;
- (void)purgeCache;
- (void)updateCachedSleepSettings:(id)a0;
- (void)_locked_purgeCachedSleepMode;
- (void)updateCachedSleepSchedule:(id)a0;
- (void)purgeCachedSleepSchedule;
- (id)cachedSleepModeWithMissHandler:(id /* block */)a0;
- (id)cachedSleepEventRecordWithMissHandler:(id /* block */)a0;
- (void)_locked_purgeCachedSleepScheduleState;
- (void)_locked_purgeCachedSleepEventRecord;
- (void)purgeCachedSleepMode;
- (void)purgeCachedSleepSettings;
- (id)cachedSleepSettingsWithMissHandler:(id /* block */)a0;
- (id)cachedSleepScheduleStateWithMissHandler:(id /* block */)a0;

@end
