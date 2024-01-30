@interface UIAccessibilityLoader : NSObject

+ (void)_accessibilityReenabled;
+ (void)_accessibilityStartServer;
+ (void)_accessibilityStopServer;
+ (id)_accessibilityBundlesForBundle:(id)a0;
+ (BOOL)_accessibilityUIKitBundleLoaded;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (BOOL)_accessibilityServerStarted;
+ (void)_accessibilityStartMiniServer;
+ (BOOL)_accessibilityStringLocalizationCategoriesLoaded;
+ (void)_didLoadPreboardAccessibilityBundle;
+ (void)_didLoadSystemAppAccessibilityBundle;
+ (void)_performInitialAccessibilityBundleLoad:(BOOL)a0 monitorForFutureLoadEvents:(BOOL)a1 trackingMode:(long long)a2;
+ (void)_stringLocalizationStarted:(id)a0;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 force:(BOOL)a2 loadAllAccessibilityInfo:(BOOL)a3;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(BOOL)a2;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 force:(BOOL)a2 loadAllAccessibilityInfo:(BOOL)a3;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 forceLoad:(BOOL)a2 loadSubbundles:(BOOL)a3 loadAllAccessibilityInfo:(BOOL)a4;
+ (void)loadActualAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(BOOL)a2;

@end
