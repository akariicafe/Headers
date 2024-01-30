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

- (void)_locked_purgeCachedSleepScheduleState;
- (void)purgeCache;
- (void)_locked_purgeCachedSleepEventRecord;
- (id)cachedSleepSettingsWithMissHandler:(id /* block */)a0;
- (void)purgeCachedSleepSettings;
- (id)cachedSleepSettings;
- (void)updateCachedSleepSchedule:(id)a0;
- (void)_locked_purgeCachedSleepMode;
- (void)updateCachedSleepMode:(long long)a0;
- (void)purgeCachedSleepScheduleState;
- (id)cachedSleepSchedule;
- (id)cachedSleepScheduleWithMissHandler:(id /* block */)a0;
- (id)cachedSleepEventRecord;
- (void)purgeCachedSleepEventRecord;
- (void)updateCachedSleepScheduleState:(unsigned long long)a0;
- (id)cachedSleepEventRecordWithMissHandler:(id /* block */)a0;
- (void)_withLock:(id /* block */)a0;
- (id)cachedSleepModeWithMissHandler:(id /* block */)a0;
- (void)_locked_purgeCachedSleepSchedule;
- (id)cachedSleepScheduleStateWithMissHandler:(id /* block */)a0;
- (void)purgeCachedSleepMode;
- (void)updateCachedSleepSettings:(id)a0;
- (id)init;
- (void)updateCachedSleepEventRecord:(id)a0;
- (void).cxx_destruct;
- (void)purgeCachedSleepSchedule;
- (void)_locked_purgeCachedSleepSettings;

@end
