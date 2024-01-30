@interface ATXDemoAppLibraryProvider : NSObject

+ (id)_defaults;
+ (BOOL)isAppCategoryDemoModeEnabled;
+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (BOOL)isSuggestionsAndRecentsDemoModeEnabled;
+ (id)demoSuggestionsAndRecents;
+ (void)_registerDefaultsForSuggestionsAndRecents:(id)a0;
+ (id)_getBundleIdsForPrefix:(id)a0 inDefaults:(id)a1;
+ (void)_registerDefaultsForAppCategories:(id)a0;
+ (id)_categoryForIndex:(long long)a0 inDefaults:(id)a1 realCategories:(id)a2;

@end
