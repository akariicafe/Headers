@class NSError, NSString, NSArray, NSURL, CPLChangeSession, _CPLWeakLibraryManager, NSDictionary, CPLConfiguration, NSObject, CPLStatus, CPLPlatformObject;
@protocol CPLLibraryManagerDelegate, CPLResourceProgressDelegate, CPLLibraryManagerForceSyncDelegate, CPLLibraryManagerOwner, OS_dispatch_queue;

@interface CPLLibraryManager : NSObject <CPLAbstractObject> {
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    BOOL _sizeOfResourcesToUploadIsSet;
    NSObject<OS_dispatch_queue> *_initLock;
    CPLConfiguration *_configuration;
    CPLStatus *_syncStatus;
    _CPLWeakLibraryManager *_weakSelf;
    BOOL _preventObserving;
}

@property (class, readonly, nonatomic) NSDictionary *mappingForLibraryOptions;
@property (class, readonly, nonatomic) NSArray *allLibraryOptionsDescriptions;
@property (class, readonly, nonatomic) NSDictionary *availableRetentionPolicies;
@property (class, readonly, nonatomic) NSDictionary *mappingRetentionPolicies;
@property (class, readonly, nonatomic) NSDictionary *availableExitSources;
@property (class, readonly, nonatomic) NSDictionary *mappingExitSources;

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *userOverride;
@property (copy, nonatomic) NSString *effectiveClientBundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *clientLibraryBaseURL;
@property (readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL;
@property (readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL;
@property (readonly, copy, nonatomic) NSString *libraryIdentifier;
@property (readonly, nonatomic) unsigned long long libraryOptions;
@property (readonly, copy, nonatomic) NSString *libraryVersion;
@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
@property (readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property (readonly, nonatomic) unsigned long long numberOfImagesToUpload;
@property (readonly, nonatomic) unsigned long long numberOfVideosToUpload;
@property (readonly, nonatomic) unsigned long long numberOfOtherItemsToUpload;
@property (weak, nonatomic) id<CPLLibraryManagerDelegate> delegate;
@property (weak, nonatomic) id<CPLResourceProgressDelegate> resourceProgressDelegate;
@property (weak, nonatomic) id<CPLLibraryManagerForceSyncDelegate> forceSyncDelegate;
@property (weak, nonatomic) id<CPLLibraryManagerOwner> owner;
@property (readonly, nonatomic) CPLConfiguration *configuration;
@property (readonly, nonatomic) CPLStatus *syncStatus;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSError *statusError;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForLibraryOptions:(unsigned long long)a0;
+ (id)descriptionForProvideContentResult:(unsigned long long)a0;
+ (void)useCloudPhotoDaemonImplementation;
+ (double)nextOverrideTimeIntervalForSystemBudgets:(unsigned long long)a0;
+ (id)platformImplementationProtocol;
+ (id)descriptionForExitSource:(long long)a0;
+ (id)_reverseMappingForLibraryOptions;
+ (unsigned long long)optionsFromDescription:(id)a0;
+ (id)stateDescriptionForState:(unsigned long long)a0;

- (void)queryUserDetailsForShareParticipants:(id)a0 completionHandler:(id /* block */)a1;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)a0;
- (void)checkResourcesAreSafeToPrune:(id)a0 checkServerIfNecessary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)currentSession;
- (void)enableSynchronizationWithReason:(id)a0;
- (void)getChangedStatusesWithCompletionHandler:(id /* block */)a0;
- (void)disableSynchronizationWithReason:(id)a0;
- (void)boostPriorityForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableMingling;
- (void)requestClientToPushAllChangesWithCompletionHandler:(id /* block */)a0;
- (void)getStreamingURLForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 clientBundleID:(id)a4 completionHandler:(id /* block */)a5;
- (void)noteClientIsInForegroundQuietly:(BOOL)a0;
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getResourcesForItemWithScopedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)a0;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)a0 related:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)acknowledgeChangedStatuses:(id)a0;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)a0;
- (void)blockEngineElement:(id)a0;
- (void)deactivateScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getScopeStatusCountsForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteResources:(id)a0 checkServerIfNecessary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)startSyncSession;
- (void)barrier;
- (void)forceBackupWithCompletionHandler:(id /* block */)a0;
- (void)beginInMemoryDownloadOfResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)createScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetCacheWithOption:(unsigned long long)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)getTargetsForRecordsWithScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideRecordWithCloudScopeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteClientIsBeginningSignificantWork;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)a0;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)reportMiscInformation:(id)a0;
- (void)noteClientIsEndingSignificantWork;
- (void)removeParticipants:(id)a0 fromSharedScopeWithIdentifier:(id)a1 retentionPolicy:(long long)a2 exitSource:(long long)a3 completionHandler:(id /* block */)a4;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)a0;
- (void)fetchExistingSharedLibraryScopeWithCompletionHandler:(id /* block */)a0;
- (void)deleteScopeWithIdentifier:(id)a0 forced:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getStatusArrayForComponents:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportSetting:(id)a0 hasBeenSetToValue:(id)a1;
- (void)activateScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptSharedScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStatusesForScopesWithIdentifiers:(id)a0 includeStorages:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)provideCloudResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateShareForScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteClientIsInBackground;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)getStatusForComponents:(id)a0 completionHandler:(id /* block */)a1;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)unblockEngineElement:(id)a0;
- (void)addDropDerivativesRecipe:(id)a0 writeToUserDefaults:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)a0 maximumCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)unblockEngineElementOnce:(id)a0;
- (void)disableMingling;
- (void)deactivateWithCompletionHandler:(id /* block */)a0;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)a0 persist:(BOOL)a1;
- (void)provideScopeChangeForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetStatus;
- (void)startExitFromSharedScopeWithIdentifier:(id)a0 retentionPolicy:(long long)a1 exitSource:(long long)a2 completionHandler:(id /* block */)a3;
- (void)addInfoToLog:(id)a0;
- (void)testKey:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)forceSynchronizingScopeWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSharedScopeFromShareURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 options:(id)a2 proposedTaskIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initForManagementWithLibraryIdentifier:(id)a0;
- (void)setShouldOverride:(BOOL)a0 forSystemBudgets:(unsigned long long)a1;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)a0 persist:(BOOL)a1;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)a0 sizeOfOriginalResourcesToUpload:(unsigned long long)a1 numberOfImages:(unsigned long long)a2 numberOfVideos:(unsigned long long)a3 numberOfOtherItems:(unsigned long long)a4;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportSetting:(id)a0 hasBeenEnabled:(BOOL)a1;
- (void)_getMappedIdentifiersForIdentifiers:(id)a0 inAreLocalIdentifiers:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchMomentShareFromShareURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStreamingURLForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 clientBundleID:(id)a3 completionHandler:(id /* block */)a4;
- (void)queryUserIdentitiesWithParticipants:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)a0 resetTracker:(id)a1 completionHandler:(id /* block */)a2;
- (void)enableMainScopeWithCompletionHandler:(id /* block */)a0;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)a0 resetTracker:(id)a1 completionHandler:(id /* block */)a2;
- (void)getLocalScopedIdentifiersForCloudScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteResourcesIfSafe:(id)a0 completionHandler:(id /* block */)a1;
- (void)_configurationDidChange;
- (id)initForManagement;
- (void)acceptMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)takeStatisticsSnapshotSinceDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setCurrentSession:(id)a0;
- (void)dealloc;
- (void)getResourcesForItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)discardCurrentSession;
- (void)_getMappedScopedIdentifiersForScopedIdentifiers:(id)a0 inAreLocalIdentifiers:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_setStatus:(unsigned long long)a0 andError:(id)a1;
- (void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStreamingURLOrMediaMakerDataForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 clientBundleID:(id)a4 completionHandler:(id /* block */)a5;
- (void)getStatusForRecordsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableMainScopeWithCompletionHandler:(id /* block */)a0;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 intent:(unsigned long long)a2 proposedTaskIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithClientLibraryBaseURL:(id)a0 cloudLibraryStateStorageURL:(id)a1 cloudLibraryResourceStorageURL:(id)a2 libraryIdentifier:(id)a3;
- (void)_setLibraryVersion:(id)a0;
- (void)beginDownloadForResource:(id)a0 highPriority:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setShouldOverrideSystemBudgetsForSyncSession:(BOOL)a0;
- (id)initWithClientLibraryBaseURL:(id)a0 cloudLibraryStateStorageURL:(id)a1 cloudLibraryResourceStorageURL:(id)a2 libraryIdentifier:(id)a3 options:(unsigned long long)a4;
- (id)_mappedUnscopedIdentifiersFromScopedIdentifiers:(id)a0;
- (void)resetCacheWithOption:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 highPriority:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getStreamingURLForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 completionHandler:(id /* block */)a3;
- (void)markLibraryManagerAsInvalid;
- (void)noteClientIsInForeground;
- (id)addSubscriberUsingPublishingHandler:(id /* block */)a0;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 highPriority:(BOOL)a2 proposedTaskIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)_statusDidChange;
- (void)publishMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)createOwnedLibraryShareScopeWithShare:(id)a0 title:(id)a1 completionHandler:(id /* block */)a2;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_closeDeactivating:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
