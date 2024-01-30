@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (nonatomic) long long cacheScope;
@property (nonatomic) BOOL didRemoveAllObjects;

- (id)init;
- (void).cxx_destruct;

@end
