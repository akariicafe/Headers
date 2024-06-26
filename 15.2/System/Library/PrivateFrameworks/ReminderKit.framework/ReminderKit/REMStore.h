@class _REMInProgressSaveRequestsContainer, NSString, REMStoreContainerToken;
@protocol REMDaemonController;

@interface REMStore : NSObject <REMChangeTrackingProvider, REMClientConnectionsInteractable>

@property (class, readonly, nonatomic) NSString *storeDidChangeNotificationName;

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken;
@property (readonly, nonatomic) _REMInProgressSaveRequestsContainer *l_inProgressSaveRequestsContainer;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) id<REMDaemonController> daemonController;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL assertOnMainThreadFetches;
@property (retain, nonatomic) REMStore *nonUserInteractiveStore;

+ (void)initialize;
+ (BOOL)notificationsEnabled;
+ (id)createIsolatedStoreContainerWithError:(id *)a0;
+ (BOOL)_shouldNotifyReminddOfInteractionWithPeople;
+ (BOOL)siriShouldRouteIntentsToNewRemindersApp;
+ (BOOL)isEventKitSyncEnabledForReminderKit;
+ (void)notifyOfInteractionWithPeople:(id)a0;
+ (BOOL)dataaccessDaemonStopSyncingReminders;
+ (BOOL)destroyIsolatedStoreContainerWithToken:(id)a0 error:(id *)a1;

- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (id)_withInProgressSaveRequestContainer:(id /* block */)a0;
- (id)fetchReminderWithExternalIdentifier:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchRemindersMatchingPredicateDescriptor:(id)a0 sortDescriptors:(id)a1 options:(id)a2 error:(id *)a3;
- (id)fetchAccountWithObjectID:(id)a0 error:(id *)a1;
- (unsigned long long)storeGeneration;
- (id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)a0 to:(id)a1 withListIDs:(id)a2 error:(id *)a3;
- (void)updateAccountWithAccountID:(id)a0 completion:(id /* block */)a1;
- (void)acceptShareWithMetadata:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)removeOrphanedAccountsWithCompletion:(id /* block */)a0;
- (void)requestToDeleteLocalDataWithCompletion:(id /* block */)a0;
- (id)fetchRemindersForEventKitBridgingWithListIDs:(id)a0 error:(id *)a1;
- (id)fetchDefaultListWithError:(id *)a0;
- (id)fetchDefaultListRequiringCloudKitWithError:(id *)a0;
- (BOOL)_isUserInteractiveStore;
- (id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchPrimaryActiveCloudKitAccountREMObjectIDWithError:(id *)a0;
- (id)fetchRemindersWithObjectIDs:(id)a0 error:(id *)a1;
- (void)_saveAccountChangeItems:(id)a0 listChangeItems:(id)a1 smartListChangeItems:(id)a2 reminderChangeItems:(id)a3 author:(id)a4 replicaManagerProvider:(id)a5 synchronously:(BOOL)a6 syncToCloudKit:(BOOL)a7 performer:(id)a8 completion:(id /* block */)a9;
- (id)fetchPrimaryActiveCloudKitAccountWithError:(id *)a0;
- (id)fetchListsWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchCustomSmartListWithObjectID:(id)a0 error:(id *)a1;
- (void)enumerateAllGroupsAndListsWithBlock:(id /* block */)a0;
- (void)rejectCalDAVSharedList:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)a0 error:(id *)a1;
- (id)initWithDaemonController:(id)a0;
- (void)deleteAccountWithAccountID:(id)a0 completion:(id /* block */)a1;
- (id)fetchAccountsIncludingInactive:(BOOL)a0 error:(id *)a1;
- (id)provideChangeTrackingForAccountID:(id)a0 clientName:(id)a1 transactionAuthorKeysToExclude:(id)a2;
- (void)_triggerSyncWithReason:(id)a0 forcingCloudKitReload:(BOOL)a1 discretionary:(BOOL)a2 bypassThrottler:(BOOL)a3 completion:(id /* block */)a4;
- (id)fetchListWithObjectID:(id)a0 error:(id *)a1;
- (id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)a0 error:(id *)a1;
- (id)fetchAllListsWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchAssignmentsWithObjectIDs:(id)a0 includeConcealedObjects:(BOOL)a1 error:(id *)a2;
- (void)_respondToCalDAVSharedList:(id)a0 withResponse:(long long)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)saveSaveRequest:(id)a0 accountChangeItems:(id)a1 listChangeItems:(id)a2 smartListChangeItems:(id)a3 reminderChangeItems:(id)a4 author:(id)a5 replicaManagerProvider:(id)a6 queue:(id)a7 completion:(id /* block */)a8;
- (void)stopShare:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)resultFromPerformingSwiftInvocation:(id)a0 parametersData:(id)a1 storages:(id)a2 error:(id *)a3;
- (BOOL)hasActiveCloudKitAccountForTipKitWithError:(id *)a0;
- (BOOL)everConnectedToCar;
- (id)description;
- (void)enumerateAllRemindersWithBlock:(id /* block */)a0;
- (id)fetchRemindersMatchingTitle:(id)a0 dueAfter:(id)a1 dueBefore:(id)a2 isCompleted:(id)a3 hasLocation:(id)a4 location:(id)a5 error:(id *)a6;
- (id)initWithDaemonController:(id)a0 storeContainerToken:(id)a1;
- (id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)a0 to:(id)a1 withListIDs:(id)a2 error:(id *)a3;
- (void)updateShare:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)updateAccountsAndSync:(BOOL)a0 completion:(id /* block */)a1;
- (id)fetchSiriFoundInAppsListWithError:(id *)a0;
- (id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)a0;
- (id)fetchReminderWithObjectID:(id)a0 error:(id *)a1;
- (void)acceptCalDAVSharedList:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)fetchReminderIncludingConcealedWithObjectID:(id)a0 error:(id *)a1;
- (id)createShareForListWithID:(id)a0 appIconData:(id)a1 error:(id *)a2;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchAllRemindersWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)a0 error:(id *)a1;
- (id)_xpcSyncStorePerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (BOOL)saveSaveRequest:(id)a0 accountChangeItems:(id)a1 listChangeItems:(id)a2 smartListChangeItems:(id)a3 reminderChangeItems:(id)a4 author:(id)a5 replicaManagerProvider:(id)a6 error:(id *)a7;
- (id)refreshReminder:(id)a0;
- (id)optimisticallyMaterializeReminderChangeItem:(id)a0;
- (id)initWithStoreContainerToken:(id)a0;
- (id)fetchAccountsWithError:(id *)a0;
- (void).cxx_destruct;
- (void)updateAccountWithAccountID:(id)a0 restartDA:(BOOL)a1 completion:(id /* block */)a2;
- (id)init;
- (void)_incrementStoreGeneration;
- (id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)a0 error:(id *)a1;
- (id)compressedDistributedEvaluationDataWithOptions:(id)a0 error:(id *)a1;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)initUserInteractive:(BOOL)a0;
- (id)fetchAccountsWithObjectIDs:(id)a0 error:(id *)a1;
- (void)nukeDatabase;
- (id)replicaManagerProviderForCalDAVSync;
- (void)requestToUpdateClientConnectionsAsynchronously:(BOOL)a0 shouldKeepAlive:(BOOL)a1 completion:(id /* block */)a2;
- (id)refreshList:(id)a0;
- (void)test_refreshHashtagLabelsImmediately;
- (id)fetchAccountWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)provideChangeTrackingForAccountID:(id)a0 clientName:(id)a1;
- (id)fetchAccountsForDumpingWithError:(id *)a0;
- (id)fetchListIncludingConcealedWithObjectID:(id)a0 error:(id *)a1;
- (void)invalidate;
- (id)fetchRemindersWithParentReminderIDs:(id)a0 error:(id *)a1;
- (void)triggerThrottledSyncWithReason:(id)a0 discretionary:(BOOL)a1 WithCompletion:(id /* block */)a2;
- (id)fetchRemindersWithExternalIdentifiers:(id)a0 inList:(id)a1 error:(id *)a2;
- (void)notifyOfInteractionWithPeople:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)containsListWithCustomBadgeForTipKitWithError:(id *)a0;
- (void)requestToDeleteSyncDataWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)fetchShareForListWithID:(id)a0 error:(id *)a1;
- (id)fetchHashtagsWithObjectIDs:(id)a0 includeConcealedObjects:(BOOL)a1 error:(id *)a2;
- (id)fetchCustomSmartListsWithError:(id *)a0;
- (id)fetchReplicaManagersForAccountID:(id)a0 bundleID:(id)a1 error:(id *)a2;
- (void)test_setupForManualHashtagLabelRefreshing;
- (void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)a0;
- (id)fetchResultByExecutingFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)containsCustomSmartListForTipKitWithError:(id *)a0;
- (unsigned long long)completedRemindersCountForTipKitWithError:(id *)a0;
- (void)enumerateAllListsWithBlock:(id /* block */)a0;
- (id)resultFromPerformingInvocation:(id)a0 error:(id *)a1;
- (id)fetchListIncludingMarkedForDeleteWithObjectID:(id)a0 error:(id *)a1;
- (id)MCIsManagedAccountWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchListsForEventKitBridgingWithError:(id *)a0;
- (BOOL)containsHashtagsForTipKitWithError:(id *)a0;
- (id)refreshAccount:(id)a0;
- (id)fetchReplicaManagerForAccountID:(id)a0 error:(id *)a1;
- (id)fetchDefaultAccountWithError:(id *)a0;
- (id)fetchEligibleDefaultListsWithError:(id *)a0;
- (id)fetchAccountsWithExternalIdentifiers:(id)a0 error:(id *)a1;
- (void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)debugDescription;
- (void)_enumerateAllListsIncludingGroups:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)debugFetchPhantomListsWithError:(id *)a0;

@end
