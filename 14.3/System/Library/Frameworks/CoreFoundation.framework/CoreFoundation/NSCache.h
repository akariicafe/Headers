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
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setMinimumObjectCount:(unsigned long long)a0;
- (unsigned long long)minimumObjectCount;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObjectForKey:(id)a0;

@end
