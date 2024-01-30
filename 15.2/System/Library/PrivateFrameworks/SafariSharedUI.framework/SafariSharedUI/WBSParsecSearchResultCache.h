@class NSArray, NSMutableDictionary;

@interface WBSParsecSearchResultCache : NSObject {
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultSetsByPrefix;
    unsigned long long _cachedQueriesLimit;
}

@property (readonly, nonatomic) NSArray *allCachedQueries;

- (void).cxx_destruct;
- (BOOL)_shouldCacheResultSetForQueryMatching:(id)a0;
- (BOOL)_resultSet:(id)a0 isMatchForQuery:(id)a1;
- (id)initWithCachedQueriesLimit:(unsigned long long)a0;
- (void)cacheResultSetsFromSearchResponse:(id)a0;
- (void)cacheResultSet:(id)a0;
- (id)bestResultSetForQuery:(id)a0;
- (id)resultSetWithQuery:(id)a0;

@end
