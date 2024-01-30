@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject {
    BOOL _didRemoveAllObjects;
    NSMutableDictionary *_cache;
    long long _cacheScope;
}

- (void).cxx_destruct;
- (id)init;

@end
