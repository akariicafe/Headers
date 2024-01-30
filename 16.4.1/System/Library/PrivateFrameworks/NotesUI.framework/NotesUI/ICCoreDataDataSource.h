@class ICCoreDataIndexer, ICSelectorDelayer, NSDate, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue;

@interface ICCoreDataDataSource : ICDataSource <ICCoreDataIndexerDelegate>

@property (retain, nonatomic) ICCoreDataIndexer *indexer;
@property (readonly, nonatomic) ICSelectorDelayer *reindexDelayer;
@property (retain, nonatomic) NSDate *lastReindexParentModificationDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *expansionStateCompletionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *applySnapshotCompletionQueue;
@property (nonatomic) BOOL suspendsUpdates;
@property (nonatomic) unsigned long long autoExpandMode;
@property (retain, nonatomic) NSManagedObjectContext *applySnapshotLegacyManagedObjectContext;
@property (retain, nonatomic) NSManagedObjectContext *applySnapshotModernManagedObjectContext;

- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)applySnapshotAnimated:(BOOL)a0 dataRenderedBlock:(id /* block */)a1;
- (void)collapseItemsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)expandItemsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)firstRelevantItemIdentifier;
- (void)indexer:(id)a0 didChangeContentWithDifference:(id)a1 controller:(id)a2;
- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1 indexer:(id)a2;
- (BOOL)needsReindexWithCollectionDifference:(id)a0 controller:(id)a1 identifiersToReload:(id)a2;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (void)noteLockManagerDidToggleLock:(id)a0;
- (void)performBlockSuspendingUpdates:(id /* block */)a0 andApplySnapshotAnimated:(BOOL)a1;
- (void)reindexAndApplySnapshot;
- (void)reindexDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;
- (void)reloadDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;
- (void)setExpanded:(BOOL)a0 itemIdentifiers:(id)a1 completion:(id /* block */)a2;

@end
