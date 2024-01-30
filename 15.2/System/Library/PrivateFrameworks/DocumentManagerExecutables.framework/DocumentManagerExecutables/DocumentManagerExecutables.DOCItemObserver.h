@interface DocumentManagerExecutables.DOCItemObserver : NSObject <FPItemCollectionIndexPathBasedDelegate> {
    void /* unknown type, empty encoding */ collection;
    void /* unknown type, empty encoding */ subscribers;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ item;

- (id)addSubscriber:(id /* block */)a0;
- (void)removeSubscriber:(id)a0;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collection:(id)a0 didUpdateObservedItem:(id)a1;
- (void)collection:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didMoveItemsFromIndexPaths:(id)a1 toIndexPaths:(id)a2;
- (void)collection:(id)a0 didDeleteItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didUpdateItemsAtIndexPaths:(id)a1 changes:(id)a2;
- (void)collection:(id)a0 didPerformBatchUpdateWithReplayBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithObservedItem:(id)a0;

@end
