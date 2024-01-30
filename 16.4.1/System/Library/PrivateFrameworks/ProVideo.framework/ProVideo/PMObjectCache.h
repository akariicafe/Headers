@class NSMapTable, NSRecursiveLock;

@interface PMObjectCache : NSObject {
    NSRecursiveLock *_cacheLock;
    int _purgesInProgress;
    unsigned long long _currentSize;
    unsigned long long _setSize;
    unsigned long long _maxSize;
    unsigned long long _reservedMemory;
    unsigned long long _numberOfCalls;
    NSMapTable *_mapTable;
    float _responseRate;
    float _decayRate;
    float _penalty;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (void)clearCache;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)currentSize;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned long long)a0;
- (void)setCacheSize:(unsigned long long)a0;
- (int)addObject:(id)a0 cacheKey:(id)a1 size:(unsigned long long)a2 cost:(double)a3;
- (int)addObject:(id)a0 cacheKey:(id)a1 size:(unsigned long long)a2 cost:(double)a3 retDidAddObject:(BOOL *)a4;
- (id)copyObjectForKey:(id)a0 cost:(double *)a1;
- (id)copyObjectForKeyDontUpdateAccessTime:(id)a0 cost:(double *)a1;
- (id)copyObjectForKeyImpl:(id)a0 cost:(double *)a1 updateAccessTime:(BOOL)a2;
- (unsigned long long)getCacheMemoryUsed;
- (unsigned long long)getCacheSize;
- (void)reserveCacheMemory:(long long)a0;
- (unsigned long long)reservedMemorySize;
- (void)shutdownCache;

@end
