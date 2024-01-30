@interface SYLogs : NSObject

+ (void)initialize;
+ (id)logFolder;
+ (BOOL)shouldDisplaySyncErrorMessage;
+ (BOOL)shouldDumpIDSOnSyncError;
+ (BOOL)shouldLogBubblesToAggD;

@end
