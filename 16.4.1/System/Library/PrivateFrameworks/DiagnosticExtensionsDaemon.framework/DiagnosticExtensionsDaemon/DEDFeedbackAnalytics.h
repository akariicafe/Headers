@interface DEDFeedbackAnalytics : NSObject

+ (void)logDataLoadWithContentItemCount:(unsigned long long)a0 formItemsCount:(unsigned long long)a1 teamCount:(unsigned long long)a2 errorsCount:(unsigned long long)a3 startedAt:(double)a4 endedAt:(double)a5;
+ (void)logEventWithRequest:(id)a0 httpStatusCode:(long long)a1 nsurlErrorCode:(long long)a2 success:(BOOL)a3 startedAt:(double)a4 endedAt:(double)a5;
+ (void)logFBKBugSessionStartWithDeviceType:(id)a0 isRemote:(BOOL)a1 success:(BOOL)a2 errorCode:(long long)a3 startedAt:(double)a4 getSessionEndedAt:(double)a5 showExtensionsEndedAt:(double)a6 getStatusEndedAt:(double)a7;

@end
