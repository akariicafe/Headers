@interface TULogging : NSObject

+ (void)disablePhoneLogging;
+ (void)enablePhoneLogging;
+ (void)registerForShouldLogChangedNotification;
+ (BOOL)sendDirectoryToCrashReporter:(id)a0 error:(id *)a1;
+ (void)unregisterForShouldLogChangedNotification;

@end
