@class ICSystemPaperCoreDataIndexer, ICTagCoreDataIndexer, NSManagedObjectID, NSMutableDictionary, NSSet, NSFetchedResultsController, NSMutableSet, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface ICRDFolderCoreDataIndexer : ICRDCoreDataIndexer

@property (retain, nonatomic) NSFetchedResultsController *legacyFetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *modernFetchedResultsController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *folderListSectionIdentifiersToFolderItemIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *folderItemIdentifiersToParentFolderItemIdentifier;
@property (retain, nonatomic) NSMutableDictionary *folderItemIdentifiersToChildFolderItemIdentifiers;
@property (retain, nonatomic) NSMutableOrderedSet *folderListSectionIdentifiers;
@property (retain, nonatomic) NSMutableSet *legacyAccountManagedObjectIDs;
@property (retain, nonatomic) NSMutableSet *modernAccountManagedObjectIDs;
@property (retain, nonatomic) NSMutableSet *smartFolderManagedObjectIDs;
@property (readonly, nonatomic) BOOL includeMigratedLocalLegacyAccounts;
@property (readonly, nonatomic) BOOL hideUnmigratedLocalLegacyAccounts;
@property (readonly, nonatomic) BOOL includeMigratedICloudLegacyAccounts;
@property (retain, nonatomic) ICTagCoreDataIndexer *tagIndexer;
@property (retain, nonatomic) ICSystemPaperCoreDataIndexer *systemPaperIndexer;
@property (readonly, nonatomic) unsigned long long countOfLegacyAccounts;
@property (readonly, nonatomic) unsigned long long countOfModernAccounts;
@property (retain, nonatomic) NSManagedObjectID *ancestorNoteContainerObjectID;
@property (readonly, nonatomic) unsigned long long totalFolderCount;
@property (nonatomic) BOOL shouldIncludeTags;
@property (nonatomic) BOOL shouldIncludeSystemPaper;
@property (nonatomic) BOOL shouldAutoExpandSingleSection;
@property (readonly, nonatomic) NSSet *smartFolderObjectIDs;

- (void).cxx_destruct;
- (id)expansionStateContext;
- (id)firstRelevantItemIdentifier;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)newSnapshotFromIndex;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (id)initWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (void)clearIndex;
- (id)activeFetchedResultsControllers;
- (void)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (void)deleteObjectWithIDFromIndex:(id)a0 inSection:(id)a1;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (void)deleteWithDecisionController:(id)a0 completion:(id /* block */)a1;
- (id)legacyFolderFetchPredicate;
- (id)modernFolderFetchPredicate;
- (id)sortedRootFolderItemIdentifiersInSection:(id)a0;
- (BOOL)isCustomFolder:(id)a0;
- (id)sortedFolderItemIdentifiers:(id)a0;
- (void)addChildFoldersOfParentFolder:(id)a0 toSectionSnapshot:(id)a1;
- (id)predicateForDescendants;
- (BOOL)isDefaultFolder:(id)a0;

@end
