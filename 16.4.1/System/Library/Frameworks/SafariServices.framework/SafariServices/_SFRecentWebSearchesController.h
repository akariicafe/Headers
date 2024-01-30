@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController {
    NSString *_pathToLegacySearchesFile;
}

+ (unsigned long long)_maximumNumberOfSearchesToTrack;

- (void).cxx_destruct;
- (void)_removeLegacyRecentSearchesData;
- (void)_migrateLegacyData;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (id)initWithPathToLegacySearchesFile:(id)a0;

@end
