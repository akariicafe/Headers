@class ICRDNoteSectionIdentifier, NSArray, ICRDFolderCoreDataIndexer, NSMutableDictionary, NSOrderedSet, NoteCollectionObject, NSFetchedResultsController, NSObject, ICRDNoteFolderSectionIdentifier, ICFolderCustomNoteSortType;
@protocol OS_dispatch_queue, ICNoteContainer;

@interface ICRDNoteCoreDataIndexer : ICRDCoreDataIndexer {
    BOOL _shouldIncludeOutlineParentItems;
}

@property (retain, nonatomic) ICRDFolderCoreDataIndexer *folderIndexer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (retain, nonatomic) NSFetchedResultsController *modernPinnedNoteFetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *modernNoteFetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *legacyNoteFetchedResultsController;
@property (readonly, nonatomic) BOOL sortsByPinned;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs;
@property (retain, nonatomic) NSOrderedSet *sectionIdentifiers;
@property (retain, nonatomic) ICRDNoteFolderSectionIdentifier *folderSectionIdentifier;
@property (retain, nonatomic) ICRDNoteSectionIdentifier *pinnedNoteSectionIdentifier;
@property (retain, nonatomic) ICRDNoteSectionIdentifier *noteSectionIdentifier;
@property (retain, nonatomic) NSArray *sortedNoteIdentifiers;
@property (retain, nonatomic) id<ICNoteContainer> noteContainer;
@property (retain, nonatomic) NoteCollectionObject *noteCollection;
@property (nonatomic) unsigned long long pinnedNotesSectionMinimumCount;
@property (retain, nonatomic) ICFolderCustomNoteSortType *sortType;
@property (readonly, nonatomic) unsigned long long totalNoteCount;
@property (readonly, nonatomic) unsigned long long totalFolderCount;
@property (nonatomic) BOOL shouldIncludeSubfolders;

- (void).cxx_destruct;
- (void)reloadData:(id /* block */)a0;
- (id)expansionStateContext;
- (id)firstRelevantItemIdentifier;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)newSnapshotFromIndex;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (void)setShouldIncludeOutlineParentItems:(BOOL)a0;
- (void)clearIndex;
- (void)updateLegacyFetchedResultsControllers;
- (void)updateModernNoteFetchedResultsControllers;
- (id)activeFetchedResultsControllers;
- (void)unmergePinnedNotesAndNotesSectionIfNeeded;
- (void)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (void)addObjectIDs:(id)a0 toIndexInSection:(id)a1;
- (void)mergePinnedNotesAndNotesSectionIfNeeded;
- (void)updateSectionIdentifiers;
- (BOOL)shouldIncludeOutlineParentItems;
- (void)deleteObjectWithIDFromIndex:(id)a0 inSection:(id)a1;
- (void)removeObjectIDs:(id)a0 fromIndexInSection:(id)a1;
- (void)sortSection:(id)a0;
- (void)prependObjectIDs:(id)a0 toIndexInSection:(id)a1;
- (id)initWithNoteContainer:(id)a0 noteCollection:(id)a1 legacyManagedObjectContext:(id)a2 modernManagedObjectContext:(id)a3;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (void)togglePinnedForNote:(id)a0;
- (void)deleteWithDecisionController:(id)a0 completion:(id /* block */)a1;

@end
