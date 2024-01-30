@interface HDCurrentActivityCacheDemoQueryServer : HDCurrentActivityCacheQueryServer

- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)_demoStatisticsForDataTypeIdentifier:(id)a0 unit:(id)a1;
- (id)_demoStatisticsForStandHours;
- (BOOL)shouldObserveActivityCache;

@end
