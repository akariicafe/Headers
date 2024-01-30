@interface HDCurrentActivityCacheDemoQueryServer : HDCurrentActivityCacheQueryServer

- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)_queue_start;
- (BOOL)shouldObserveActivityCache;

@end
