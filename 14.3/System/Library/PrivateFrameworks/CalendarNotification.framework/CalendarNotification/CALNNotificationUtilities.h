@interface CALNNotificationUtilities : NSObject

+ (id)_pathForSentinelFile;
+ (BOOL)shouldBehaveAsRestart;
+ (void)createSentinelFileIfNeeded;

@end
