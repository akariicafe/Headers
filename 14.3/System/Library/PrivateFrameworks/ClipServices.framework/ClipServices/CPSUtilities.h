@interface CPSUtilities : NSObject

+ (id)openURL:(id)a0 withOptions:(id)a1;
+ (BOOL)isNetworkConstrained;
+ (BOOL)deviceIsLocked;
+ (id)openURL:(id)a0;
+ (id)localizedDeviceName;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)deviceHasCapabilities:(id)a0;
+ (int)_deviceClass;
+ (BOOL)deviceIsPad;
+ (BOOL)isBundleIdentifierBeingInstalled:(id)a0;
+ (id)versionIdentifierForAppWithBundleIdentifier:(id)a0 isPlaceholder:(BOOL *)a1;
+ (void)uninstallAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)poweredByCaptionForAppName:(id)a0;
+ (void)openURL:(id)a0 inAppWithBundleIdentifier:(id)a1 promptForUnlock:(BOOL)a2 originIsControlCenter:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (void)openURL:(id)a0 inAppWithBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)openAppWithBundleIdentifier:(id)a0;
+ (id)lowercasedDeviceFamilyName;
+ (id)oppositeDeviceFamilyName;
+ (BOOL)shouldPlayHaptics;

@end
