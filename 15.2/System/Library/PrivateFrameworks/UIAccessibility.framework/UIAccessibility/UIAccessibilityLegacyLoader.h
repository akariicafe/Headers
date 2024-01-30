@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader

+ (void)initialize;
+ (void)loadExtendedAccessibilityBundles;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 forceLoad:(BOOL)a2 loadSubbundles:(BOOL)a3 loadAllAccessibilityInfo:(BOOL)a4;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(BOOL)a2;
+ (id)_accessibilityBundlesForBundle:(id)a0;
+ (id)_axBundleForBundle:(id)a0;
+ (void)_accessibilityLoadSubbundles:(id)a0;
+ (BOOL)_accessibilityShouldSortBundlesBeforeLoading;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)a0;

@end
