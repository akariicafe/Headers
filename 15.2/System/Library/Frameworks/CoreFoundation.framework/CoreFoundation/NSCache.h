@class NSString;
@protocol NSCacheDelegate;

@interface NSCache : NSObject {
    id _delegate;
    void *_private[5];
    void *_reserved;
}

@property (copy) NSString *name;
@property id<NSCacheDelegate> delegate;
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;
@property BOOL evictsObjectsWithDiscardedContent;

- (id)mapTableRepresentation;
- (void)__apply:(id /* block */)a0;
- (unsigned long long)minimumObjectCount;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setMinimumObjectCount:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allObjects;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)dealloc;

@end
