@interface ICInstrumentationUtilities : NSObject

+ (void)addRecentPasswordMode:(id)a0 forAccount:(id)a1;
+ (void)incrementRecentPasswordChangeCountAsReset:(BOOL)a0;
+ (long long)autoSortSelectionChangeCountForState:(BOOL)a0;
+ (id)autoSortSelectionCountUserDefaultsKeyForState:(BOOL)a0;
+ (void)clearAutoSortSelectionChangeCountForState:(BOOL)a0;
+ (void)clearRecentPasswordChangeCountAsReset:(BOOL)a0;
+ (void)clearRecentPasswordModesForAccount:(id)a0;
+ (void)incrementAutoSortSelectionChangeCountForState:(BOOL)a0;
+ (id)passwordChangeCountUserDefaultsKeyAsReset:(BOOL)a0;
+ (long long)recentPasswordChangeCountAsReset:(BOOL)a0;
+ (id)recentPasswordModesForAccount:(id)a0;
+ (id)recentPasswordModesKeyForAccount:(id)a0;

@end
