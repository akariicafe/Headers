@interface PFCachePolicy : NSObject

- (id)cacheEntryWithKey:(id)a0 value:(id)a1;
- (void)didAddCacheEntry:(id)a0;
- (void)didRemoveCacheEntry:(id)a0;
- (id)willAddOrReplaceEntry:(id)a0 add:(BOOL)a1 contents:(id)a2;
- (void)didGetCacheEntry:(id)a0;
- (unsigned long long)capacityHint;
- (void)didRemoveAllCacheEntries;

@end
