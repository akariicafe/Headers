@class ICRDCoreDataIndexer, ICSelectorDelayer, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ICRDCoreDataDataSource : ICRDDataSource <ICRDCoreDataIndexerDelegate>

@property (retain, nonatomic) ICRDCoreDataIndexer *indexer;
@property (readonly, nonatomic) ICSelectorDelayer *reindexDelayer;
@property (retain, nonatomic) NSDate *lastReindexParentModificationDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *expansionStateCompletionQueue;
@property (nonatomic) BOOL suspendsUpdates;
@property (nonatomic) BOOL autoExpandItems;

- (void).cxx_destruct;
- (void)willEnterForeground:(id)a0;
- (void)reindexAndApplySnapshot;
- (void)applySnapshotAnimated:(BOOL)a0 dataRenderedBlock:(id /* block */)a1;
- (id)firstRelevantItemIdentifier;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (void)setExpanded:(BOOL)a0 itemIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)noteDidAddOrRemovePassword:(id)a0;
- (void)indexer:(id)a0 didChangeContentWithDifference:(id)a1 controller:(id)a2;
- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1 indexer:(id)a2;
- (void)reloadDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;
- (void)reindexDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;
- (void)expandItemsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)collapseItemsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)performBlockSuspendingUpdates:(id /* block */)a0 andApplySnapshotAnimated:(BOOL)a1;

@end
