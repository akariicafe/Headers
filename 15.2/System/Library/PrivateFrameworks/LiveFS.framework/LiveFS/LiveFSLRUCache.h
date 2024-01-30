@class NSMutableDictionary, NSMutableArray;

@interface LiveFSLRUCache : NSObject {
    int _countLimit;
}

@property (retain) NSMutableDictionary *mapping;
@property (retain) NSMutableArray *usageOrder;
@property int countLimit;

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeLastItem;
- (id)objectForKeyLocked:(id)a0;

@end
