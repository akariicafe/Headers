@class ICTagCoreDataIndexer, NSMutableDictionary, ICFolderCoreDataIndexer, NSManagedObject, NoteCollectionObject, ICNoteSectionIdentifier, NSObject, NSFetchedResultsController, NSOrderedSet, ICInvitationsCoreDataIndexer, ICQuery, NSArray, ICFolderCustomNoteSortType, ICVirtualSmartFolderItemIdentifier, ICNoteFolderSectionIdentifier;
@protocol OS_dispatch_queue, ICNoteContainer;

@interface ICNoteCoreDataIndexer : ICCoreDataIndexer {
    BOOL _shouldIncludeOutlineParentItems;
}

@property (retain, nonatomic) ICInvitationsCoreDataIndexer *invitationsIndexer;
@property (retain, nonatomic) ICFolderCoreDataIndexer *folderIndexer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (retain, nonatomic) NSFetchedResultsController *modernPinnedNoteFetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *modernNoteFetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *legacyNoteFetchedResultsController;
@property (readonly, nonatomic) BOOL sortsByPinned;
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs;
@property (retain, nonatomic) NSOrderedSet *sectionIdentifiers;
@property (retain, nonatomic) ICNoteSectionIdentifier *tagSectionIdentifier;
@property (retain, nonatomic) ICNoteFolderSectionIdentifier *folderSectionIdentifier;
@property (retain, nonatomic) ICNoteSectionIdentifier *invitationsSectionIdentifier;
@property (retain, nonatomic) ICNoteSectionIdentifier *pinnedNoteSectionIdentifier;
@property (retain, nonatomic) ICNoteSectionIdentifier *noteSectionIdentifier;
@property (retain, nonatomic) NSArray *sortedNoteIdentifiers;
@property (readonly, nonatomic) ICTagCoreDataIndexer *tagIndexer;
@property (retain, nonatomic) NSManagedObject<ICNoteContainer> *noteContainer;
@property (retain, nonatomic) NoteCollectionObject *noteCollection;
@property (retain, nonatomic) ICQuery *noteQuery;
@property (retain, nonatomic) ICVirtualSmartFolderItemIdentifier *virtualSmartFolder;
@property (nonatomic) unsigned long long pinnedNotesSectionMinimumCount;
@property (retain, nonatomic) ICFolderCustomNoteSortType *sortType;
@property (nonatomic) int dateHeadersType;
@property (readonly, nonatomic) unsigned long long totalNoteCount;
@property (readonly, nonatomic) unsigned long long totalFolderCount;
@property (readonly, nonatomic) unsigned long long totalInvitationsCount;
@property (nonatomic) BOOL shouldIncludeSubfolders;
@property (nonatomic) BOOL shouldIncludeTags;
@property (nonatomic) BOOL shouldIncludeTagDetail;
@property (nonatomic) BOOL shouldIncludeInvitations;
@property (readonly, nonatomic) BOOL isShowingDateHeaders;

- (void).cxx_destruct;
- (id)activeFetchedResultsControllers;
- (BOOL)shouldIncludeOutlineParentItems;
- (void)addObjectIDs:(id)a0 toIndexInSection:(id)a1;
- (BOOL)dateHeadersAreStaleForNote:(id)a0;
- (id)dateHeadersValueForNote:(id)a0;
- (void)deleteObjectWithIDFromIndex:(id)a0 inSection:(id)a1;
- (void)deleteWithDecisionController:(id)a0 completion:(id /* block */)a1;
- (void)didIndex;
- (id)expansionStateContext;
- (id)firstRelevantItemIdentifier;
- (id)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (id)initWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (id)legacyDateHeadersAttribute;
- (void)mergePinnedNotesAndNotesSectionIfNeeded;
- (id)modernDateHeadersAttribute;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (void)prependObjectIDs:(id)a0 toIndexInSection:(id)a1;
- (void)removeObjectIDs:(id)a0 fromIndexInSection:(id)a1;
- (void)removeUnpinnedNoteObjectIds:(id)a0;
- (long long)resolvedDateHeadersType;
- (id)sectionForObjectID:(id)a0;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0 legacyManagedObjectContext:(id)a1 modernManagedObjectContext:(id)a2;
- (void)setShouldIncludeOutlineParentItems:(BOOL)a0;
- (void)setSortType:(id)a0 force:(BOOL)a1;
- (void)sortSection:(id)a0;
- (void)togglePinnedForNote:(id)a0;
- (void)unmergePinnedNotesAndNotesSectionIfNeeded;
- (id)unpinnedNoteIdentifiers;
- (id)unpinnedSectionIdentifierForObject:(id)a0;
- (void)updateLegacyFetchedResultsControllers;
- (void)updateModernFetchedResultsControllers;
- (void)updateSectionIdentifiers;
- (void)willIndex;

@end
