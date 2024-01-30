@class NSIndexSet, NSMutableDictionary;

@interface _CPLEngineScopeCache : NSObject {
    NSMutableDictionary *_scopeCache;
    NSMutableDictionary *_scopeByLocalIndex;
    NSMutableDictionary *_scopeByCloudIndex;
    NSMutableDictionary *_scopeByStableIndex;
    NSIndexSet *_validLocalIndexes;
    NSIndexSet *_validCloudIndexes;
}

- (id)init;
- (void).cxx_destruct;
- (id)scopeWithIdentifier:(id)a0;
- (void)cacheValidCloudIndexes:(id)a0;
- (id)validCloudIndexes;
- (void)cacheValidLocalIndexes:(id)a0;
- (id)validLocalIndexes;
- (id)scopeWithStableIndex:(long long)a0;
- (id)scopeWithCloudIndex:(long long)a0;
- (id)scopeWithLocalIndex:(long long)a0;
- (void)cacheScope:(id)a0 forScopeStorage:(id)a1;

@end
