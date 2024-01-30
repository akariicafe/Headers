@class NSCache, NSMapTable, NSMutableDictionary;

@interface PKAsyncCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSCache *_itemByKey;
    NSMapTable *_weakItemByKey;
    NSMutableDictionary *_outstandingRetrievals;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (void)_executeRetrievalBlock:(id /* block */)a0 forKey:(id)a1;
- (void)retrieveItemForKey:(id)a0 synchronous:(BOOL)a1 retrievalBlock:(id /* block */)a2 deliveryBlock:(id /* block */)a3;

@end
