@class NSMutableDictionary;

@interface SFCache : NSObject {
    unsigned long long _cachePolicy;
    unsigned long long _cacheSize;
    double _entryTimeToLive;
    NSMutableDictionary *_cacheEntries;
}

- (void)removeObjectForKey:(id)a0;
- (id)initWithPolicy:(unsigned long long)a0;
- (id)initWithPolicy:(unsigned long long)a0 timeToLive:(double)a1 size:(unsigned long long)a2;
- (void)_insertCacheEntry:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addEntry:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)entryForKey:(id)a0;
- (id)_entryForKey:(id)a0;
- (void)_removeCacheEntryWithKey:(id)a0;

@end
