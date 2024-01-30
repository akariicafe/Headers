@class NSMutableDictionary, NSMutableArray;

@interface LiveFSLRUCache : NSObject {
    int _countLimit;
}

@property (retain) NSMutableDictionary *mapping;
@property (retain) NSMutableArray *usageOrder;
@property int countLimit;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)removeLastItem;
- (id)objectForKeyLocked:(id)a0;

@end
