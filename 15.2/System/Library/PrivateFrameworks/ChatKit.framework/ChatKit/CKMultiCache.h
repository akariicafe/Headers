@interface CKMultiCache : IMMultiDict

@property (nonatomic) unsigned long long limit;
@property (nonatomic) BOOL cacheEligibleForPrewarm;

- (void)removeAllObjects;
- (void)pushObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;
- (void)markCacheAsPrewarmed;

@end
