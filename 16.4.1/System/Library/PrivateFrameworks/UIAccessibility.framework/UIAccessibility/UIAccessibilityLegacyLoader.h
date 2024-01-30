@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader

+ (void)initialize;
+ (id)_accessibilityBundlesForBundle:(id)a0;
+ (void)_accessibilityLoadSubbundles:(id)a0;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)a0;
+ (BOOL)_accessibilityShouldSortBundlesBeforeLoading;
+ (id)_axBundleForBundle:(id)a0;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(BOOL)a2;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 forceLoad:(BOOL)a2 loadSubbundles:(BOOL)a3 loadAllAccessibilityInfo:(BOOL)a4;
+ (void)loadExtendedAccessibilityBundles;

@end
