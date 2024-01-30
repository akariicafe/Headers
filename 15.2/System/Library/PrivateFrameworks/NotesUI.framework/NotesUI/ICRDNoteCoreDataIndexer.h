@class ICTagCoreDataIndexer, NSMutableDictionary, ICRDNoteFolderSectionIdentifier, ICRDNoteSectionIdentifier, ICSystemPaperCoreDataIndexer, NSObject, NSFetchedResultsController, NoteCollectionObject, NSOrderedSet, ICQuery, NSMutableSet, ICRDFolderCoreDataIndexer, NSArray, ICFolderCustomNoteSortType;
@protocol OS_dispatch_queue, ICNoteContainer;

@interface ICRDNoteCoreDataIndexer : ICRDCoreDataIndexer {
    BOOL _shouldIncludeOutlineParentItems;
}

@property (retain, nonatomic) ICRDFolderCoreDataIndexer *folderIndexer;
@property (retain, nonatomic) ICTagCoreDataIndexer *tagIndexer;
@property (retain, nonatomic) ICSystemPaperCoreDataIndexer *systemPaperIndexer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (retain, nonatomic) NSFetchedResultsController *modernPinnedNoteFetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *modernNoteFetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *legacyNoteFetchedResultsController;
@property (readonly, nonatomic) BOOL sortsByPinned;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs;
@property (retain, nonatomic) NSMutableSet *modernAccountManagedObjectIDs;
@property (retain, nonatomic) NSOrderedSet *sectionIdentifiers;
@property (retain, nonatomic) ICRDNoteSectionIdentifier *tagSectionIdentifier;
@property (retain, nonatomic) ICRDNoteSectionIdentifier *systemPaperSectionIdentifier;
@property (retain, nonatomic) ICRDNoteFolderSectionIdentifier *folderSectionIdentifier;
@property (retain, nonatomic) ICRDNoteSectionIdentifier *pinnedNoteSectionIdentifier;
@property (retain, nonatomic) ICRDNoteSectionIdentifier *noteSectionIdentifier;
@property (retain, nonatomic) NSArray *sortedNoteIdentifiers;
@property (retain, nonatomic) id<ICNoteContainer> noteContainer;
@property (retain, nonatomic) NoteCollectionObject *noteCollection;
@property (retain, nonatomic) ICQuery *noteQuery;
@property (nonatomic) unsigned long long pinnedNotesSectionMinimumCount;
@property (retain, nonatomic) ICFolderCustomNoteSortType *sortType;
@property (readonly, nonatomic) unsigned long long totalModernAccountCount;
@property (readonly, nonatomic) unsigned long long totalNoteCount;
@property (readonly, nonatomic) unsigned long long totalFolderCount;
@property (nonatomic) BOOL shouldIncludeSubfolders;
@property (nonatomic) BOOL shouldIncludeTags;
@property (nonatomic) BOOL shouldIncludeSystemPaper;

- (void).cxx_destruct;
- (void)reloadData:(id /* block */)a0;
- (id)expansionStateContext;
- (id)firstRelevantItemIdentifier;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)newSnapshotFromIndex;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (void)setShouldIncludeOutlineParentItems:(BOOL)a0;
- (id)initWithNoteContainer:(id)a0 noteCollection:(id)a1 noteQuery:(id)a2 legacyManagedObjectContext:(id)a3 modernManagedObjectContext:(id)a4;
- (void)clearIndex;
- (void)updateLegacyFetchedResultsControllers;
- (void)updateModernNoteFetchedResultsControllers;
- (void)unmergePinnedNotesAndNotesSectionIfNeeded;
- (void)removeObjectIDs:(id)a0 fromIndexInSection:(id)a1;
- (void)addObjectIDs:(id)a0 toIndexInSection:(id)a1;
- (void)sortSection:(id)a0;
- (void)mergePinnedNotesAndNotesSectionIfNeeded;
- (void)updateSectionIdentifiers;
- (id)activeFetchedResultsControllers;
- (void)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (BOOL)shouldIncludeOutlineParentItems;
- (void)deleteObjectWithIDFromIndex:(id)a0 inSection:(id)a1;
- (void)prependObjectIDs:(id)a0 toIndexInSection:(id)a1;
- (id)initForSystemPaperWithModernObjectContext:(id)a0;
- (void)togglePinnedForNote:(id)a0;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (void)deleteWithDecisionController:(id)a0 completion:(id /* block */)a1;

@end
