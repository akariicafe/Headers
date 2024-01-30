@class NSString, QLURLHandler, FPItem, FPItemCollection;

@interface QLFPItemFetcher : QLUbiquitousItemFetcher <FPItemCollectionDelegate> {
    FPItem *_fpItem;
    QLURLHandler *_fetchedURLHandler;
    FPItemCollection *_itemCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)fileURL;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)itemSize;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collection:(id)a0 didUpdateObservedItem:(id)a1;
- (void)collection:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didMoveItemsFromIndexPaths:(id)a1 toIndexPaths:(id)a2;
- (void)collection:(id)a0 didDeleteItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didUpdateItemsAtIndexPaths:(id)a1 changes:(id)a2;
- (void)collection:(id)a0 didPerformBatchUpdateWithReplayBlock:(id /* block */)a1;
- (id)shareableItem;
- (BOOL)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)prepareShareableItem:(id /* block */)a0;
- (void)_registerItemCollectionIfNeeded;
- (void)_unregisterItemCollectionIfNeeded;
- (void)_urlHandler:(id /* block */)a0;
- (id)initWithFPItem:(id)a0 shouldZipPackageIfNeeded:(BOOL)a1;

@end
