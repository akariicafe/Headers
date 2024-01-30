@interface DMCEDUModeUtilities : NSObject

+ (double)userSessionTimeout;
+ (BOOL)isEphemeralMultiUser;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)a0;
+ (BOOL)configureUserSessionTimeout:(double)a0;
+ (unsigned long long)_previousQuotaSize;
+ (BOOL)_updateMultiUserDeviceConfigurationFileWithKey:(id)a0 value:(id)a1;
+ (BOOL)temporarySessionOnly;
+ (BOOL)configureTemporarySessionTimeout:(double)a0;
+ (id)_configureQuotaSizeForSharedDeviceImmediately:(id)a0;
+ (double)temporarySessionTimeout;
+ (unsigned long long)_getDiskSize;
+ (unsigned long long)getDiskAvailableSize;
+ (BOOL)isFirstSetupBuddyDone;
+ (id)configureResidentUsersNumberForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (id)configureQuotaSizeForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (BOOL)configureTemporarySessionOnly:(BOOL)a0 restoreQuotaSize:(BOOL)a1 preferenceDomain:(struct __CFString { } *)a2;
+ (BOOL)inSharediPadUserSession;

@end
