@interface _TtC26DocumentManagerExecutablesP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTagCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate> {
    void /* unknown type, empty encoding */ gatheringKeyPath;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ spotlightQueryTimeout;
    void /* unknown type, empty encoding */ collection;
    void /* unknown type, empty encoding */ finishedGathering;
    void /* unknown type, empty encoding */ collectionObservationContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collection:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didMoveItemsFromIndexPaths:(id)a1 toIndexPaths:(id)a2;
- (void)collection:(id)a0 didDeleteItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didUpdateItemsAtIndexPaths:(id)a1 changes:(id)a2;
- (void)collection:(id)a0 didPerformBatchUpdateWithReplayBlock:(id /* block */)a1;

@end
