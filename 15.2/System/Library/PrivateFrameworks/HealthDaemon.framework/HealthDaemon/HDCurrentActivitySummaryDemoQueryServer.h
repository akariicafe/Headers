@interface HDCurrentActivitySummaryDemoQueryServer : HDQueryServer

+ (Class)queryClass;

- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)_queue_start;

@end
