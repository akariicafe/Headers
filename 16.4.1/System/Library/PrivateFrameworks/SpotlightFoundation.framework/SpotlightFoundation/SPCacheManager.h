@class PARSession;

@interface SPCacheManager : NSObject {
    PARSession *_session;
}

@property (class, readonly) SPCacheManager *defaultManager;

+ (void)removeKey:(id)a0;
+ (long long)version;
+ (id)defaults;
+ (id)defaultValueWithKey:(id)a0;
+ (void)removeDefaults;
+ (id)identifier;
+ (id)defaultProperties;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;
+ (void)setVersionWithValue:(long long)a0;

- (void)deleteLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3;
- (void)enumerateRecentCompletionsWithSearchString:(id)a0 usingBlock:(id /* block */)a1;
- (void)deleteResult:(id)a0 title:(id)a1;
- (void)cacheResult:(id)a0 title:(id)a1 searchString:(id)a2;
- (void)deleteSuggestion:(id)a0 type:(int)a1 score:(id)a2;
- (void)deletePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2;
- (void)deleteAllResults;
- (void)deleteContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2;
- (id)init;
- (void)enumerateRecentResultsUsingBlock:(id /* block */)a0;
- (void)cacheContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (void)cacheSuggestion:(id)a0 type:(int)a1 score:(id)a2 searchString:(id)a3;
- (void).cxx_destruct;
- (id)recentResultsWithOptions:(id)a0;
- (void)cacheLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3 searchString:(id)a4;
- (void)cachePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;

@end
