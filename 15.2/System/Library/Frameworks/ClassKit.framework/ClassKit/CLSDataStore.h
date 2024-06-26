@class NSDate, NSString, CLSActivity, CLSAuthTree, NSMutableDictionary, CLSGraph, NSMutableSet, NSMutableArray, CLSCurrentUser, CLSEndpointConnection, CLSContext;
@protocol CLSDataStoreDelegate;

@interface CLSDataStore : NSObject <CLSFaultProcessorDelegate, NSLocking> {
    NSMutableSet *_dataObservers;
    NSMutableDictionary *_deletedObjectsByID;
    NSMutableDictionary *_objectGenerationsByID;
    CLSCurrentUser *_cachedCurrentUser;
    int _accountChangeToken;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableArray *_pendingSaves;
    BOOL _saveInProgress;
    CLSAuthTree *_authTree;
    CLSAuthTree *_handoutAssignedItemsAuthTree;
    NSMutableArray *_runningActivities;
    NSDate *_lastPruneDate;
    NSString *_appBundleIdentifier;
    NSString *_appName;
}

@property (class, readonly, nonatomic) CLSDataStore *shared;

@property (retain, nonatomic) CLSContext *mainAppContext;
@property (retain, nonatomic) CLSEndpointConnection *endpointConnection;
@property (retain, nonatomic) CLSCurrentUser *cachedCurrentUser;
@property (readonly, nonatomic) CLSGraph *graph;
@property (readonly, nonatomic) CLSAuthTree *authTree;
@property (readonly, nonatomic) CLSAuthTree *handoutAssignedItemsAuthTree;
@property (readonly, nonatomic) CLSContext *activeContext;
@property (readonly, nonatomic) CLSActivity *runningActivity;
@property (weak, nonatomic) id<CLSDataStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPDTool;
+ (Class)endpointClass;
+ (BOOL)isPrivateSearchAPIEnabled;
+ (BOOL)isDashboardApp;
+ (id)newDatastore;
+ (BOOL)isSearchAPIEnabled;
+ (BOOL)isAvailable;

- (void)_save;
- (void)applicationWillResignActive:(id)a0;
- (void)unlock;
- (id)dataServer:(id /* block */)a0;
- (id)_addObject:(id)a0;
- (id)appIdentifier;
- (void)applicationDidBecomeActive:(id)a0;
- (id)currentUser;
- (void)lock;
- (void)saveWithCompletion:(id /* block */)a0;
- (void)currentUserWithCompletion:(id /* block */)a0;
- (BOOL)isDashboardAPIEnabled;
- (id)initWithEndpoint:(id)a0;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (id)allContexts;
- (id)runningActivities;
- (BOOL)isPrivateSearchAPIEnabled;
- (id)syncDataServer:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)addObject:(id)a0;
- (id)utilityServer:(id /* block */)a0;
- (BOOL)isSearchAPIEnabled;
- (void)dealloc;
- (id)syncUtilityServer:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (void)reset;
- (void)executeQuery:(id)a0;
- (id)objectWithObjectID:(id)a0;
- (void)objectsMatching:(id)a0 completion:(id /* block */)a1;
- (void)_reconnect;
- (BOOL)isRemovedObject:(id)a0;
- (void)pruneDeletedObjectsWithCompletion:(id /* block */)a0;
- (void)contextsMatchingIdentifierPath:(id)a0 completion:(id /* block */)a1;
- (void)developerModeChanged:(id)a0;
- (void)_connectionInterupted;
- (void)_connectionConnected;
- (void)_registerForAccountChangedDarwinNotification;
- (void)_reenableObservers;
- (void)registerDataObserver:(id)a0;
- (void)refreshMainAppContext;
- (void)executeQuery:(id)a0 issueServerRequest:(BOOL)a1;
- (void)dataServer:(id)a0 executeQuery:(id)a1 issueServerRequest:(BOOL)a2;
- (id)cachedMainAppContext;
- (void)_createMainAppContext;
- (void)_refreshMainAppContext;
- (void)awaitExecuteQuery:(id)a0 completion:(id /* block */)a1;
- (BOOL)isAppClient;
- (void)fetchAndCompleteAllAssignedActivitiesForContextPath:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchAssignedItemFor:(id)a0 completion:(id /* block */)a1;
- (void)_fetchHandoutAttachmentForDocumentURL:(id)a0 completion:(id /* block */)a1;
- (void)_generatePartialTimeIntervalsForRunningActivities;
- (id)_modifiedObjects;
- (id)_validateObjects:(id)a0;
- (id)_filterObjectsBeingSavedFromObjects:(id)a0;
- (id)_arrangeObjectsIfNeeded:(id)a0;
- (void)saveObjects:(id)a0 completion:(id /* block */)a1;
- (void)_saveObjects:(id)a0 completion:(id /* block */)a1;
- (void)refreshAuthTreeWithCompletion:(id /* block */)a0;
- (BOOL)isAllowedToInsertObject:(id)a0;
- (void)markObjectAsDeleted:(id)a0;
- (void)removeObjectWithObjectID:(id)a0 class:(Class)a1;
- (void)contextsMatchingIdentifierPath:(id)a0 parentContext:(id)a1 completion:(id /* block */)a2;
- (void)presentTransparencyMessageForHandoutAssignedItemInfo:(id)a0;
- (void)fetchTransparencyMessageInfoForAttachmentID:(id)a0 withCompletion:(id /* block */)a1;
- (void)presentTransparencyMessageInfo:(id)a0;
- (void)fetchTransparencyMessageInfoWithCompletion:(id /* block */)a0;
- (void)faultMainAppContext;
- (void)currentUserWithServer:(id)a0 completion:(id /* block */)a1;
- (BOOL)faultProcessor:(id)a0 shouldFaultRelation:(id)a1 fromObject:(id)a2;
- (void)fetchCollectionsWithCompletion:(id /* block */)a0;
- (void)fetchCollectionItemsWithCompletion:(id /* block */)a0;
- (void)deleteArchivedCollectionObjects:(id)a0 withCompletion:(id /* block */)a1;
- (void)contextsMatchingIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)contextsMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)syncFetchContextsForContextIDs:(id)a0;
- (id)syncFetchThumbnailBlobForContext:(id)a0;
- (void)syncDeleteThumbnailBlobForContext:(id)a0;
- (id)syncFetchProgressReportingCapabilitiesForContextID:(id)a0;
- (void)syncDeleteProgressReportingCapabilitiesForContextID:(id)a0;
- (unsigned long long)serverSyncStatus;
- (id)serverInternalState:(unsigned long long)a0 error:(id *)a1;
- (void)completeAllAssignedActivitiesMatching:(id)a0;
- (void)fetchActivityForURL:(id)a0 completion:(id /* block */)a1;
- (void)refreshAuthTreeForAttachment:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeContext:(id)a0;
- (void)removeContextWithObjectID:(id)a0;
- (void)removeActivityWithObjectID:(id)a0;
- (void)addRunningActivitiesObject:(id)a0;
- (void)removeRunningActivitiesObject:(id)a0;
- (void)triggerProgressTransparencyMessageForAttachmentID:(id)a0;
- (void)shouldSyncTeacherBrowsedContextsWithCompletion:(id /* block */)a0;
- (void)setShouldSyncTeacherBrowsedContexts:(BOOL)a0 completion:(id /* block */)a1;
- (void)getCurrentUseriCloudQuotaInfoWithCompletion:(id /* block */)a0;
- (void)deregisterDataObserver:(id)a0;
- (void)syncFetchWithCompletion:(id /* block */)a0;
- (void)fetchReportsWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)featureIsEnabled:(int)a0 completion:(id /* block */)a1;
- (void)triggerUserNotificationReviewDueHandoutsWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)triggerUserNotificationHandoutPastDueSummaryWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)triggerUserNotificationHandoutDueSoonWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)triggerUserNotificationRevisionRequested:(id)a0 completion:(id /* block */)a1;
- (void)triggerUserNotificationRevisedSubmissionWithAttachmentID:(id)a0 studentName:(id)a1 completion:(id /* block */)a2;
- (void)triggerUserNotificationHandoutAssigned:(id)a0 completion:(id /* block */)a1;
- (void)_validateAndCreateHandoutAssignedItemFor:(id)a0 completion:(id /* block */)a1;
- (void)classesForPersonID:(id)a0 role:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_classesForCurrentUserWithRole:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)removeHandoutAssignedItem:(id)a0;
- (void)addHandout:(id)a0;
- (void)removeHandout:(id)a0;
- (void)removeSurvey:(id)a0;
- (void)publishHandout:(id)a0 completion:(id /* block */)a1;
- (void)repairHandoutAttachments:(id)a0 completion:(id /* block */)a1;
- (void)handoutAttachmentForDocumentURL:(id)a0 completion:(id /* block */)a1;
- (void)addCollection:(id)a0;
- (void)removeCollection:(id)a0;
- (void)addFavorite:(id)a0;
- (void)removeFavorite:(id)a0;
- (void)instructedClassesWithCompletion:(id /* block */)a0;
- (void)personsInClassWithClassID:(id)a0 role:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)saveClass:(id)a0 completion:(id /* block */)a1;
- (void)removeClass:(id)a0;
- (void)enrolledClassesWithCompletion:(id /* block */)a0;
- (void)studentActivityForAttachmentsWithIDs:(id)a0 completion:(id /* block */)a1;
- (void)addSurveyAnswerItem:(id)a0;
- (void)removeSurveyAnswerItem:(id)a0;
- (void)canSearchRostersWithCompletion:(id /* block */)a0;
- (void)shouldPerformSearchAPIOperation:(id)a0 completion:(id /* block */)a1;
- (void)membersOfGroupWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)collaborationStatesForObjectWithID:(id)a0 ownerPersonID:(id)a1 completion:(id /* block */)a2;
- (void)collaborationStatesForObjectWithID:(id)a0 classID:(id)a1 forOwnersWithRole:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)publishCollaborationStateChanges:(id)a0 completion:(id /* block */)a1;
- (id)syncFetchSettingsForUserNotificationType:(long long)a0;
- (BOOL)syncSetSettingsForUserNotificationType:(long long)a0 settings:(id)a1;
- (void)publishAdminRequests:(id)a0 withRequestor:(id)a1 adminRequestAccounts:(id)a2 completion:(id /* block */)a3;
- (void)adminRequestorForEmail:(id)a0 completion:(id /* block */)a1;
- (void)childrenOfAdminRequestID:(id)a0 completion:(id /* block */)a1;
- (void)deleteAdminRequestID:(id)a0 completion:(id /* block */)a1;
- (void)publishAnswersForSurvey:(id)a0 completion:(id /* block */)a1;
- (void)fetchSurveyAnswers:(id)a0 responderIDs:(id)a1 completion:(id /* block */)a2;
- (void)urlSuitableForOpeningForExpectedURL:(id)a0 containerURL:(id)a1 itemID:(id)a2 ownerName:(id)a3 zoneName:(id)a4 completion:(id /* block */)a5;
- (void)deleteFileAtExpectedURL:(id)a0 containerURL:(id)a1 itemID:(id)a2 ownerName:(id)a3 zoneName:(id)a4 completion:(id /* block */)a5;
- (void)createShareIfNeededForURL:(id)a0 completion:(id /* block */)a1;

@end
