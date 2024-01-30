@interface SSRecentResultsManager : NSObject

+ (void)preheat;
+ (void)cacheResult:(id)a0 searchString:(id)a1;
+ (void)cacheSearchString:(id)a0;
+ (void)deleteAllRecents;
+ (void)deleteResult:(id)a0;
+ (id)updateResult:(id)a0 topic:(id)a1;

@end
