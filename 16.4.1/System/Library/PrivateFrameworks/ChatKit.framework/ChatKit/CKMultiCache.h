@interface CKMultiCache : IMMultiDict

@property (nonatomic) unsigned long long limit;
@property (nonatomic) BOOL cacheEligibleForPrewarm;

- (void)removeAllObjects;
- (void)dealloc;
- (id)init;
- (void)markCacheAsPrewarmed;
- (void)pushObject:(id)a0 forKey:(id)a1;

@end
