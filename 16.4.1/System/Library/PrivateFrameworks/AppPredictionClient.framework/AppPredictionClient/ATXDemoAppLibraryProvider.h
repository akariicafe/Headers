@interface ATXDemoAppLibraryProvider : NSObject

+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (BOOL)isAppLibraryDemoModeEnabled;
+ (id)loadCategoriesFromDisk;
+ (id)demoAppLibraryPath;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (id)demoSuggestionsAndRecents;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;

@end
