@interface AFUtilities : NSObject

+ (void)openApplicationWithBundleID:(id)a0;
+ (id)bundleVersion;
+ (id)bundleIdentifier;
+ (id)urlForBundleIdentifier:(id)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (void)launchSoftwareUpdate;
+ (void)launchPhotosApplication;
+ (void)openEnergySaverPref;
+ (void)openSharingPref;
+ (void)openSecurityPref;
+ (void)openInternetAccountPref;
+ (void)openParentalControlPref;
+ (void)openAppleIDPref;
+ (BOOL)openAppleIDPrefWithLaunchParameters:(id)a0;
+ (BOOL)screenLockIsEnabled;

@end
