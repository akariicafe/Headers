@interface DEDAnalytics : NSObject

+ (void)extensionDidScheduleExtensionWithIdentifier:(id)a0 delay:(unsigned long long)a1;
+ (void)finisherDidStartWithFileCount:(unsigned long long)a0 expectedByteUploadCount:(unsigned long long)a1 finishingMove:(long long)a2;
+ (void)didCreateBugSessionForApp:(id)a0;
+ (void)didCompleteBugSessionWithState:(long long)a0;
+ (void)didStartExtensionWithIdentifier:(id)a0;
+ (void)didStartDaemon;
+ (id)log;
+ (void)extensionWithIdentifier:(id)a0 didCompleteWithFileCount:(unsigned long long)a1 bytesCollected:(unsigned long long)a2 duration:(unsigned long long)a3 errorCode:(long long)a4;
+ (void)didCheckInDeferredExtensionsWithCount:(unsigned long long)a0;
+ (void)finisherDidCompleteWithDuration:(unsigned long long)a0 uploadedByteCount:(unsigned long long)a1 usingFinishingMove:(long long)a2 withState:(long long)a3;

@end
