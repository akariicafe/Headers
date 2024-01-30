@interface OSASubmissionScheduler : NSObject

+ (void)_scheduleSubmissionPermissive:(BOOL)a0;
+ (void)_setDelayForActivity:(id)a0;
+ (double)_lastSuccessTime;
+ (void)_saveLastSuccessTime;
+ (void)scheduleSubmission;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;

@end
