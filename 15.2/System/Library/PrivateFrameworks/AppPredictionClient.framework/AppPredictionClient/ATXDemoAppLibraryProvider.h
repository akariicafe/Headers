@interface ATXDemoAppLibraryProvider : NSObject

+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (id)demoSuggestionsAndRecents;
+ (id)loadCategoriesFromDisk;
+ (id)demoAppLibraryPath;
+ (BOOL)isAppLibraryDemoModeEnabled;

@end
