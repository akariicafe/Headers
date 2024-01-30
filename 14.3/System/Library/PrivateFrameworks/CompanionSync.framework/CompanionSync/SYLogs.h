@interface SYLogs : NSObject

+ (void)initialize;
+ (id)logFolder;
+ (BOOL)shouldDisplaySyncErrorMessage;
+ (BOOL)shouldLogBubblesToAggD;
+ (BOOL)shouldDumpIDSOnSyncError;

@end
