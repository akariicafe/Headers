@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray *_recentSearchEntries;
}

+ (id)_defaultsKey;
+ (BOOL)_shouldTrackSearches;
+ (unsigned long long)_maximumNumberOfSearchesToTrack;

- (void).cxx_destruct;
- (id)recentSearches;
- (void)clearRecentSearches;
- (void)_addRecentSearchEntry:(id)a0;
- (void)_saveRecentSearches;
- (void)_loadRecentSearchesIfNeeded;
- (id)recentSearchesMatchingPrefix:(id)a0;
- (void)_removeLegacyRecentSearchesData;
- (id)_recentSearchesDictionaries;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (void)_migrateLegacyData;
- (void)addRecentSearch:(id)a0;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;
- (void)_addLegacySearch:(id)a0;

@end
