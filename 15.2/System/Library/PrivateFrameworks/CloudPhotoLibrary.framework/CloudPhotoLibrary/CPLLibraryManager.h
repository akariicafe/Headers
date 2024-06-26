@class NSError, NSString, NSArray, NSURL, CPLChangeSession, _CPLWeakLibraryManager, CPLConfiguration, NSObject, CPLPlatformObject, CPLStatus;
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

@property (class, readonly, nonatomic) NSArray *allLibraryOptionsDescriptions;

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

+ (id)_mappingForLibraryOptions;
+ (void)useCloudPhotoDaemonImplementation;
+ (double)nextOverrideTimeIntervalForSystemBudgets:(unsigned long long)a0;
+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)a0;
+ (id)_reversMappingForLibraryOptions;
+ (unsigned long long)optionsFromDescription:(id)a0;
+ (id)descriptionForLibraryOptions:(unsigned long long)a0;
+ (id)descriptionForProvideContentResult:(unsigned long long)a0;

- (void)checkResourcesAreSafeToPrune:(id)a0 checkServerIfNecessary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)startSyncSession;
- (void)reportMiscInformation:(id)a0;
- (void)getStreamingURLForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 clientBundleID:(id)a4 completionHandler:(id /* block */)a5;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteClientIsInBackground;
- (void)disableMingling;
- (void)requestClientToPushAllChangesWithCompletionHandler:(id /* block */)a0;
- (void)beginInMemoryDownloadOfResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)a0;
- (void)acceptSharedScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)addDropDerivativesRecipe:(id)a0 writeToUserDefaults:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)a0;
- (void)unblockEngineElementOnce:(id)a0;
- (void)forceBackupWithCompletionHandler:(id /* block */)a0;
- (void)activateScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableMingling;
- (void)noteClientIsBeginningSignificantWork;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)blockEngineElement:(id)a0;
- (void)noteClientIsEndingSignificantWork;
- (void)getStatusArrayForComponents:(id)a0 completionHandler:(id /* block */)a1;
- (void)setShouldOverride:(BOOL)a0 forSystemBudgets:(unsigned long long)a1;
- (void)publishResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)testKey:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)resetStatus;
- (void)barrier;
- (void)reportSetting:(id)a0 hasBeenSetToValue:(id)a1;
- (void)deactivateWithCompletionHandler:(id /* block */)a0;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)a0 related:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchSharedScopeFromShareURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)a0;
- (void)getResourcesForItemWithScopedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getChangedStatusesWithCompletionHandler:(id /* block */)a0;
- (void)createScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)acknowledgeChangedStatuses:(id)a0;
- (void)noteClientIsInForegroundQuietly:(BOOL)a0;
- (void)_statusDidChange;
- (void)resetCacheWithOption:(unsigned long long)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)addInfoToLog:(id)a0;
- (void)queryUserDetailsForShareParticipants:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableSynchronizationWithReason:(id)a0;
- (void)provideScopeChangeForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideRecordWithCloudScopeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateShareForScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStatusForComponents:(id)a0 completionHandler:(id /* block */)a1;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)a0 persist:(BOOL)a1;
- (void)disableSynchronizationWithReason:(id)a0;
- (void)unblockEngineElement:(id)a0;
- (void)getStatusesForScopesWithIdentifiers:(id)a0 includeStorages:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deactivateScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceSynchronizingScopeWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideCloudResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)boostPriorityForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteResources:(id)a0 checkServerIfNecessary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)currentSession;
- (BOOL)_setStatus:(unsigned long long)a0 andError:(id)a1;
- (id)initForManagement;
- (void)deleteResourcesIfSafe:(id)a0 completionHandler:(id /* block */)a1;
- (id)initForManagementWithLibraryIdentifier:(id)a0;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)a0;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 intent:(unsigned long long)a2 proposedTaskIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 highPriority:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getStreamingURLForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 completionHandler:(id /* block */)a3;
- (id)addSubscriberUsingPublishingHandler:(id /* block */)a0;
- (void)discardCurrentSession;
- (void)getStatusForRecordsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)takeStatisticsSnapshotSinceDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_configurationDidChange;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetCacheWithOption:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)markLibraryManagerAsInvalid;
- (void)noteClientIsInForeground;
- (void)queryUserIdentitiesWithParticipants:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithClientLibraryBaseURL:(id)a0 cloudLibraryStateStorageURL:(id)a1 cloudLibraryResourceStorageURL:(id)a2 libraryIdentifier:(id)a3 options:(unsigned long long)a4;
- (void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableMainScopeWithCompletionHandler:(id /* block */)a0;
- (void)_setLibraryVersion:(id)a0;
- (void)fetchMomentShareFromShareURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)beginDownloadForResource:(id)a0 highPriority:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)a0 sizeOfOriginalResourcesToUpload:(unsigned long long)a1 numberOfImages:(unsigned long long)a2 numberOfVideos:(unsigned long long)a3 numberOfOtherItems:(unsigned long long)a4;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)a0 persist:(BOOL)a1;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)a0 resetTracker:(id)a1 completionHandler:(id /* block */)a2;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setShouldOverrideSystemBudgetsForSyncSession:(BOOL)a0;
- (void)acceptMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableMainScopeWithCompletionHandler:(id /* block */)a0;
- (void)getResourcesForItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (id)_mappedUnscopedIdentifiersFromScopedIdentifiers:(id)a0;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)a0 resetTracker:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setCurrentSession:(id)a0;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)a0 completionHandler:(id /* block */)a1;
- (void)_closeDeactivating:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_getMappedIdentifiersForIdentifiers:(id)a0 inAreLocalIdentifiers:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)reportSetting:(id)a0 hasBeenEnabled:(BOOL)a1;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 options:(id)a2 proposedTaskIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)getLocalScopedIdentifiersForCloudScopedIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getMappedScopedIdentifiersForScopedIdentifiers:(id)a0 inAreLocalIdentifiers:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)beginDownloadForResource:(id)a0 clientBundleID:(id)a1 highPriority:(BOOL)a2 proposedTaskIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithClientLibraryBaseURL:(id)a0 cloudLibraryStateStorageURL:(id)a1 cloudLibraryResourceStorageURL:(id)a2 libraryIdentifier:(id)a3;
- (void)getStreamingURLForResource:(id)a0 intent:(unsigned long long)a1 hints:(id)a2 clientBundleID:(id)a3 completionHandler:(id /* block */)a4;

@end
