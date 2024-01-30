@class NSFetchedResultsController, NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICRDRecentNotesCoreDataIndexer : ICRDCoreDataIndexer

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (readonly, nonatomic) NSFetchedResultsController *modernNoteFetchedResultsController;
@property (readonly, nonatomic) NSFetchedResultsController *legacyNoteFetchedResultsController;
@property (readonly, nonatomic) NSArray *sortedSectionIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs;
@property (nonatomic) long long sortType;
@property (nonatomic) unsigned long long maximumNumberOfNotesPerAccount;

- (void).cxx_destruct;
- (id)firstRelevantItemIdentifier;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)newSnapshotFromIndex;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (id)initWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (void)setShouldIncludeOutlineParentItems:(BOOL)a0;
- (void)clearIndex;
- (id)activeFetchedResultsControllers;
- (void)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;

@end
