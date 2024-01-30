@interface MCEDUModeUtilities : NSObject

+ (BOOL)isEphemeralMultiUser;
+ (unsigned long long)_getDiskSize;
+ (id)configureToSharedDevice;
+ (id)_configureQuotaSizeForSharedDeviceImmediately:(id)a0;
+ (id)configureQuotaSizeForSharedDevice:(id)a0;
+ (BOOL)isFirstSetupBuddyDone;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)a0;
+ (id)configureResidentUsersNumberForSharedDevice:(id)a0;
+ (unsigned long long)getDiskAvailableSize;

@end
