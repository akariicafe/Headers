@interface DMCMultiUserModeUtilities : NSObject

+ (double)temporarySessionTimeout;
+ (double)userSessionTimeout;
+ (BOOL)isEphemeralMultiUser;
+ (unsigned long long)_previousQuotaSize;
+ (unsigned long long)getDiskAvailableSize;
+ (BOOL)configureShouldSkipLanguageAndLocaleSetupForNewUsers:(BOOL)a0;
+ (BOOL)configureUserSessionTimeout:(double)a0;
+ (BOOL)isSharediPad;
+ (BOOL)isPrimaryUserSession;
+ (BOOL)temporarySessionOnly;
+ (id)configureQuotaSizeForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (BOOL)configureOnlineAuthenticationGracePeriod:(id)a0;
+ (BOOL)configureTemporarySessionOnly:(BOOL)a0 restoreQuotaSize:(BOOL)a1 preferenceDomain:(struct __CFString { } *)a2;
+ (BOOL)configureMAIDDefaultDomains:(id)a0;
+ (BOOL)shouldSkipLanguageAndLocaleSetupForNewUsers;
+ (id)onlineAuthenticationGracePeriod;
+ (BOOL)inSharediPadUserSession;
+ (BOOL)configureTemporarySessionTimeout:(double)a0;
+ (BOOL)deviceHasMultipleUsers;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)a0;
+ (id)managedAppleIDDefaultDomains;
+ (BOOL)_updateMultiUserDeviceConfigurationFileWithKey:(id)a0 value:(id)a1;
+ (id)configureResidentUsersNumberForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (id)configureToSharedDeviceWithPreferenceDomain:(struct __CFString { } *)a0;
+ (BOOL)isFirstSetupBuddyDone;
+ (unsigned long long)_getDiskSize;
+ (id)_configureQuotaSizeForSharedDeviceImmediately:(id)a0;

@end
