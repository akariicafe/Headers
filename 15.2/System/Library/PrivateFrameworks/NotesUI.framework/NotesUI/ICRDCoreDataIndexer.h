@class NSSet, NSArray, NSString, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue, ICRDCoreDataIndexerDelegate;

@interface ICRDCoreDataIndexer : NSObject <NSFetchedResultsControllerDelegate, ICRDExpansionStateContextProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadDataSerialQueue;
@property (weak, nonatomic) id<ICRDCoreDataIndexerDelegate> delegate;
@property (readonly, nonatomic) NSManagedObjectContext *legacyManagedObjectContext;
@property (readonly, nonatomic) NSManagedObjectContext *modernManagedObjectContext;
@property (readonly, nonatomic) id firstRelevantItemIdentifier;
@property (nonatomic) BOOL shouldIncludeOutlineParentItems;
@property (readonly, nonatomic) NSSet *activeFetchedResultsControllers;
@property (readonly, nonatomic) NSArray *fetchedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *expansionStateContext;

- (void).cxx_destruct;
- (void)controller:(id)a0 didChangeContentWithDifference:(id)a1;
- (void)reloadData:(id /* block */)a0;
- (void)indexObjectsWithCompletion:(id /* block */)a0;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)newSnapshotFromIndex;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (id)initWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (void)clearIndex;
- (void)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (void)deleteWithDecisionController:(id)a0 completion:(id /* block */)a1;
- (void)unsafelyReloadData:(id /* block */)a0;
- (void)unsafelyIndexAllObjectsForFetchedResultsController:(id)a0;
- (void)performAndWaitForFetchedResultsControllers:(id)a0 block:(id /* block */)a1;
- (id)activeManagedObjectContexts;
- (void)reloadDataAndWait;

@end
