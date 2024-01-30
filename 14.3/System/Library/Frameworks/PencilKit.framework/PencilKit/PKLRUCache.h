@class NSArray, PKLRUCacheItem, NSMapTable;

@interface PKLRUCache : NSObject {
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    unsigned long long _currentCost;
}

@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (nonatomic) unsigned long long totalCostLimit;
@property (nonatomic) long long freeItemCount;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_addItem:(id)a0;
- (void)removeAllObjects;
- (void)_removeItem:(id)a0;
- (id)allObjects;
- (void)removeObjectForKey:(id)a0;

@end
