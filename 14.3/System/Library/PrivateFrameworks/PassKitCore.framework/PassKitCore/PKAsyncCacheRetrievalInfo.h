@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _itemFetched;
    id _item;
    NSMutableArray *_deliveryBlocks;
}

- (id)init;
- (void).cxx_destruct;
- (void)deliverItem:(id)a0;
- (void)addDeliveryBlock:(id /* block */)a0;
- (id)synchronouslyRetrieve:(id /* block */)a0 outDeliveryBlocks:(id *)a1;

@end
