@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController {
    NSString *_pathToLegacySearchesFile;
}

+ (unsigned long long)_maximumNumberOfSearchesToTrack;

- (void).cxx_destruct;
- (id)initWithPathToLegacySearchesFile:(id)a0;
- (void)_removeLegacyRecentSearchesData;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (void)_migrateLegacyData;

@end
