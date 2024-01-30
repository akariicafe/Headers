@interface CNMobileKeyBag : NSObject

+ (BOOL)isDeviceUnlockedSinceBoot;
+ (BOOL)isDevicePasscodeProtected;
+ (const char *)firstUnlockNotificationID;

@end
