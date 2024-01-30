@interface AFUtilities : NSObject

+ (id)bundleVersion;
+ (BOOL)isInternalBuild;
+ (id)bundleIdentifier;
+ (void)openApplicationWithBundleID:(id)a0;
+ (void)openNetworkPref;
+ (void)openAppleIDPref;
+ (void)openSharingPref;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (void)launchPhotosApplication;
+ (void)launchSoftwareUpdate;
+ (BOOL)openAppleIDPrefWithLaunchParameters:(id)a0;
+ (void)openEnergySaverPref;
+ (void)openInternetAccountPref;
+ (void)openParentalControlPref;
+ (void)openSecurityPref;
+ (void)openUsersAndGroupsPref;
+ (BOOL)screenLockIsEnabled;
+ (id)urlForBundleIdentifier:(id)a0;

@end
