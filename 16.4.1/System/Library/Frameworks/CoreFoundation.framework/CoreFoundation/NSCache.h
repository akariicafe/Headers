@class NSString;
@protocol NSCacheDelegate;

@interface NSCache : NSObject {
    id<NSCacheDelegate> _cacheDelegate;
    struct cache_s { } *_cache;
    unsigned char _discardableContentState;
    BOOL _evictOnSuspension;
    BOOL _evictsDiscarded;
    BOOL _moribund;
    BOOL _doDelegateWillEvictValue;
}

@property (copy) NSString *name;
@property id<NSCacheDelegate> delegate;
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;
@property BOOL evictsObjectsWithDiscardedContent;

- (id)mapTableRepresentation;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)dealloc;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)a0;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (id)allObjects;
- (id)init;
- (void)__apply:(id /* block */)a0;
- (unsigned long long)minimumObjectCount;
- (void)setMinimumObjectCount:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
