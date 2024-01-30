@interface MFPreferencesURL : NSObject

+ (id)hideMyEmailURL;
+ (id)advancedAccountInfoURLForAccount:(id)a0;
+ (id)_accountInfoSettingsURLForAccount:(id)a0 preferenceURLType:(long long)a1;
+ (id)_urlForRoot:(id)a0 pathComponents:(id)a1;
+ (id)_pathComponentsForAccount:(id)a0 preferenceURLType:(long long)a1;
+ (id)accountURLForAccount:(id)a0;
+ (id)accountInfoURLForAccount:(id)a0;
+ (id)addAccountURL;
+ (id)storageManagementURL;
+ (id)vipSenderListURL;
+ (id)blockedSenderURL;

@end
