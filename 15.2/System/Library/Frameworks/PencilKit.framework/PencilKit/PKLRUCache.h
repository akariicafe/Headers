@class PKLRUCacheItem, NSMapTable;

@interface PKLRUCache : NSObject {
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    unsigned long long _currentCost;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _totalCostLimit;
    long long _freeItemCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
