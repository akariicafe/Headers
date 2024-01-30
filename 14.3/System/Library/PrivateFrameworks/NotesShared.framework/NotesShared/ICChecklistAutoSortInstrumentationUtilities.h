@interface ICChecklistAutoSortInstrumentationUtilities : NSObject

+ (id)autoSortSelectionCountUserDefaultsKeyForState:(BOOL)a0;
+ (long long)autoSortSelectionChangeCountForState:(BOOL)a0;
+ (void)incrementAutoSortSelectionChangeCountForState:(BOOL)a0;
+ (void)clearAutoSortSelectionChangeCountForState:(BOOL)a0;

@end
