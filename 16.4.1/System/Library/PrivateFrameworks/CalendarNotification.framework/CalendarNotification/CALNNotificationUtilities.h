@interface CALNNotificationUtilities : NSObject

+ (void)createSentinelFileIfNeeded;
+ (id)_pathForSentinelFile;
+ (BOOL)shouldBehaveAsRestart;

@end
