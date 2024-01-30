@class NSMutableDictionary;

@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_referenceCounts;
}

- (void)cacheObject:(id)a0 forKey:(id)a1;
- (void)clearObjectForKey:(id)a0;
- (void)decrementReferenceCountForKey:(id)a0;
- (id)cachedObjectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)incrementReferenceCountForKey:(id)a0;

@end
