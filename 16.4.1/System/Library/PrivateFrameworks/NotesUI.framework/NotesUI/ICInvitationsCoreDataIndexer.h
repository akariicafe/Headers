@class NSFetchedResultsController, ICFolderCustomNoteSortType, NSString, NSMutableOrderedSet, NSDate, NSObject, ICAccount;
@protocol OS_dispatch_queue, ICSectionIdentifier;

@interface ICInvitationsCoreDataIndexer : ICCoreDataIndexer

@property (class, readonly, copy, nonatomic) NSDate *defaultReceivedSince;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue;
@property (readonly, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (readonly, nonatomic) NSMutableOrderedSet *invitationObjectIDs;
@property (readonly, nonatomic) id<ICSectionIdentifier> sectionIdentifier;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) ICFolderCustomNoteSortType *sortType;
@property (copy, nonatomic) NSDate *receivedSince;
@property (copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) unsigned long long totalInvitationsCount;

- (void).cxx_destruct;
- (id)activeFetchedResultsControllers;
- (void)deleteObjectWithIDFromIndex:(id)a0 inSection:(id)a1;
- (id)firstRelevantItemIdentifier;
- (id)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (id)initWithModernManagedObjectContext:(id)a0 sectionIdentifier:(id)a1;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)a0;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)a0 legacyManagedObjectContext:(id)a1 modernManagedObjectContext:(id)a2;
- (void)willIndex;

@end
