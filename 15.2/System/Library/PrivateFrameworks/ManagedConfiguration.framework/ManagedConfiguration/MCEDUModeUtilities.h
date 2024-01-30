@interface MCEDUModeUtilities : NSObject

+ (double)userSessionTimeout;
+ (BOOL)isEphemeralMultiUser;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)a0;
+ (BOOL)configureUserSessionTimeout:(double)a0;
+ (unsigned long long)_previousQuotaSize;
+ (id)configureQuotaSizeForSharedDevice:(id)a0;
+ (BOOL)_updateMultiUserDeviceConfigurationFileWithKey:(id)a0 value:(id)a1;
+ (BOOL)temporarySessionOnly;
+ (BOOL)configureTemporarySessionTimeout:(double)a0;
+ (BOOL)configureTemporarySessionOnly:(BOOL)a0 restoreQuotaSize:(BOOL)a1;
+ (id)_configureQuotaSizeForSharedDeviceImmediately:(id)a0;
+ (id)configureToSharedDevice;
+ (double)temporarySessionTimeout;
+ (unsigned long long)_getDiskSize;
+ (id)configureResidentUsersNumberForSharedDevice:(id)a0;
+ (unsigned long long)getDiskAvailableSize;
+ (BOOL)isFirstSetupBuddyDone;

@end
