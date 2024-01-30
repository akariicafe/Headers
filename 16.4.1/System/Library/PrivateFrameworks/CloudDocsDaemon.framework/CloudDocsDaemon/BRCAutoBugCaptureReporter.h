@interface BRCAutoBugCaptureReporter : NSObject

+ (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 forError:(id)a2;
+ (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 forError:(id)a2 waitForCompletion:(BOOL)a3;
+ (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 withContext:(id)a2;
+ (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 withContext:(id)a2 waitForCompletion:(BOOL)a3;

@end
