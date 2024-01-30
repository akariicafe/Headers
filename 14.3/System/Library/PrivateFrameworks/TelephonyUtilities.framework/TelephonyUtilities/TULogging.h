@interface TULogging : NSObject

+ (void)enablePhoneLogging;
+ (void)disablePhoneLogging;
+ (void)registerForShouldLogChangedNotification;
+ (void)unregisterForShouldLogChangedNotification;
+ (BOOL)sendDirectoryToCrashReporter:(id)a0 error:(id *)a1;

@end
