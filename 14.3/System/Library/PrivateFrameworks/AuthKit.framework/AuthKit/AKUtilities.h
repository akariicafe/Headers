@interface AKUtilities : NSObject

+ (id)bundleVersion;
+ (void)openApplicationWithBundleID:(id)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (id)urlForBundleIdentifier:(id)a0;
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
+ (id)bundleIdentifier;

@end
