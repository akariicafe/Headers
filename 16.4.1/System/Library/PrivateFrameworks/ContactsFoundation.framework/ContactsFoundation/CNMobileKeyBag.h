@interface CNMobileKeyBag : NSObject

+ (const char *)firstUnlockNotificationID;
+ (BOOL)isDevicePasscodeProtected;
+ (BOOL)isDeviceUnlockedSinceBoot;

@end
