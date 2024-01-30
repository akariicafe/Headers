@interface UIAccessibilityLoader : NSObject

+ (void)_accessibilityStartServer;
+ (void)_accessibilityStopServer;
+ (void)_accessibilityReenabled;
+ (void)_didLoadSystemAppAccessibilityBundle;
+ (void)_accessibilityStartMiniServer;
+ (void)_performInitialAccessibilityBundleLoad:(BOOL)a0 monitorForFutureLoadEvents:(BOOL)a1 trackingMode:(long long)a2;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_stringLocalizationStarted:(id)a0;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 forceLoad:(BOOL)a2 loadSubbundles:(BOOL)a3 loadAllAccessibilityInfo:(BOOL)a4;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(BOOL)a2;
+ (id)_accessibilityBundlesForBundle:(id)a0;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 force:(BOOL)a2 loadAllAccessibilityInfo:(BOOL)a3;
+ (BOOL)_accessibilityServerStarted;
+ (BOOL)_accessibilityUIKitBundleLoaded;
+ (BOOL)_accessibilityStringLocalizationCategoriesLoaded;
+ (void)_didLoadPreboardAccessibilityBundle;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 force:(BOOL)a2 loadAllAccessibilityInfo:(BOOL)a3;
+ (void)loadActualAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(BOOL)a2;

@end
