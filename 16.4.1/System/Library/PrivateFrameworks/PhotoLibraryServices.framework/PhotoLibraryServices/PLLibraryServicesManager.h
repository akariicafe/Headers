@class PLMomentGenerationDataManager, NSPersistentStoreCoordinator, PLCacheDeleteSupport, PLModelMigrator, NSMutableArray, PLDupeManager, PLLibraryServicesCPLReadiness, PLAssetsdCrashRecoverySupport, NSProgress, PLCacheDeleteRegistration, PLPairing, PLClientServerTransaction, PLRebuildJournalManager, PLChangeHandlingContainer, PLQuickActionManager, NSURL, PLCameraPreviewWellManager, PLImageWriter, PLBackgroundJobService, PLDuplicateProcessor, PLLibraryServicesStateNode, PLTrackableRequestManager, PLSearchIndexManager, PLPhotoLibraryBundle, PLCloudPhotoLibraryManager, NSString, NSError, PLComputeCacheJournalManager, NSObject, PLKeywordManager, PLPhotoLibraryPathManager, PLLazyObject, PLDatabaseContext, NSMutableDictionary, PLRelationshipOrderKeyManager, PLSyndicationDeleteManager, PFStateCaptureHandler;
@protocol PLMigrationServiceProtocol, OS_dispatch_source, OS_dispatch_queue, PLLibraryServicesDelegate;

@interface PLLibraryServicesManager : NSObject <PLSyndicationDeleteManagerDelegate, PFStateCaptureProvider> {
    PFStateCaptureHandler *_stateHandler;
    BOOL _isCreateMode;
    PLLazyObject *_lazyWellKnownPhotoLibraryIdentifier;
    PLLazyObject *_lazyImageWriter;
    PLLazyObject *_lazyModelMigrator;
    PLLazyObject *_lazySearchIndexManager;
    PLLazyObject *_lazyDatabaseContext;
    PLLazyObject *_lazyDupeManager;
    PLLazyObject *_lazyDuplicateProcessor;
    PLLazyObject *_lazyRelationshipOrderKeyManager;
    PLLazyObject *_lazyMomentGenerationDataManager;
    PLLazyObject *_lazyRebuildJournalManager;
    PLLazyObject *_lazyComputeCacheJournalManager;
    PLLazyObject *_lazyQuickActionManager;
    PLLazyObject *_lazyKeywordManager;
    PLLazyObject *_lazyAlbumCountCoalescer;
    PLLazyObject *_lazyImportSessionCountCoalescer;
    PLLazyObject *_lazyCloudPhotoLibraryManager;
    PLLazyObject *_lazyCrashRecoverySupport;
    PLLazyObject *_lazyPairingManager;
    PLLazyObject *_lazyCPLReadiness;
    PLLazyObject *_lazyCameraPreviewWellManager;
    PLLazyObject *_lazySyndicationDeleteManager;
    PLLazyObject *_lazyCacheDeleteSupport;
    PLClientServerTransaction *_serverTransaction;
    NSObject<OS_dispatch_source> *_outstandingTransactionHandlerTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _outstandingTransactionHandlerTimerLock;
    NSObject<OS_dispatch_queue> *_albumCountQueue;
    NSMutableDictionary *_externalWaiterCompletionBlocksByState;
    unsigned int _maxWaiterQoS;
}

@property (class, retain, nonatomic) Class libraryServicesDelegateClass;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, setter=_setCurrentStateNode:) PLLibraryServicesStateNode *currentStateNode;
@property (retain, nonatomic) id operationCountObservee;
@property (retain) id<PLLibraryServicesDelegate> libraryServicesDelegate;
@property (readonly, nonatomic) NSMutableArray *mutablePendingOperations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateSerializationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *helperQueue;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isFinalizing) BOOL finalizing;
@property (retain, nonatomic) NSProgress *preRunningProgress;
@property (retain, nonatomic) NSProgress *postRunningProgress;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } importMutex;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fileSystemAssetImporterMutex;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } localeUpdateLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } contactsAuthorizationUpdateLock;
@property (readonly) long long state;
@property (readonly, copy) NSURL *libraryURL;
@property (readonly, copy) NSString *logPrefix;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;
@property (readonly, weak) PLPhotoLibraryBundle *libraryBundle;
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSError *invalidationError;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) PLImageWriter *imageWriter;
@property (readonly) PLModelMigrator *modelMigrator;
@property (readonly) PLSearchIndexManager *searchIndexManager;
@property (readonly) PLDatabaseContext *databaseContext;
@property (readonly) PLDupeManager *dupeManager;
@property (readonly) PLDuplicateProcessor *duplicateProcessor;
@property (readonly) PLRelationshipOrderKeyManager *relationshipOrderKeyManager;
@property (readonly) PLMomentGenerationDataManager *momentGenerationDataManager;
@property (readonly) PLQuickActionManager *quickActionManager;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly) PLBackgroundJobService *backgroundJobService;
@property (readonly) PLCloudPhotoLibraryManager *cloudPhotoLibraryManager;
@property (readonly) PLTrackableRequestManager *trackableRequestManager;
@property (readonly) PLAssetsdCrashRecoverySupport *crashRecoverySupport;
@property (readonly) PLPairing *pairingManager;
@property (readonly) PLLibraryServicesCPLReadiness *cplReadiness;
@property (readonly) PLCameraPreviewWellManager *cameraPreviewWellManager;
@property (readonly) PLSyndicationDeleteManager *syndicationDeleteManager;
@property (readonly) PLCacheDeleteSupport *cacheDeleteSupport;
@property (readonly) PLCacheDeleteRegistration *cacheDeleteRegistration;
@property (readonly) PLRebuildJournalManager *rebuildJournalManager;
@property (readonly) PLComputeCacheJournalManager *computeCacheJournalManager;
@property (readonly, getter=isCreateMode) BOOL createMode;
@property (copy) NSString *upgradeClient;
@property (readonly, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (weak) id<PLMigrationServiceProtocol> migrationServiceProxy;
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_finalState;
+ (id)errorForInvalidationError:(id)a0 userInfo:(id)a1;
+ (long long)_initialState;
+ (id)libraryServicesManagerForLibraryURL:(id)a0;

- (BOOL)enqueueOperation:(id)a0 error:(id *)a1;
- (void)_handleLibraryStateCompletedAllOperations;
- (id)statusDescription;
- (void)_resetStateQueueQoS;
- (void)_invalidatePairingManager;
- (BOOL)_canTransitionToState:(long long)a0 error:(id *)a1;
- (void)performBlockWithImportMutex:(id /* block */)a0;
- (void)_dispatchExternalWaitersForState:(long long)a0;
- (void)didRemainSystemPhotoLibrary;
- (void)performTransactionForSyndicationDeleteManager:(id)a0 name:(const char *)a1 transaction:(id /* block */)a2;
- (void)_invalidateSyndicationPhotoLibrarySpecificServices;
- (void)_invalidateOutstandingTransactionHandlerTimer;
- (void)setCreateMode:(BOOL)a0 options:(id)a1;
- (void)shutdownLibraryWithDescription:(id)a0;
- (void)_invalidateImageWriter;
- (void)_invalidateRebuildJournalManager;
- (id)stateCaptureDictionary;
- (BOOL)isSearchIndexingEnabled;
- (void)_invalidateSystemPhotoLibrarySpecificServices;
- (void)initializeChangeHandling;
- (BOOL)updateGreenTeaSavedContactsAuthorizationIfNeeded;
- (id)newImportSessionCountCoalescer;
- (void)_enqueueExternalWaiterCompletionBlockForState:(long long)a0 completionBlock:(id /* block */)a1;
- (id)journalManagerForName:(id)a0;
- (void)_increaseStateQueueQoSIfNeeded;
- (void)_transitionToState:(long long)a0;
- (void)_startObservingLibraryStateCompletedAllOperations;
- (void)_invalidateCrashRecoverySupport;
- (long long)_state;
- (void)performFileSystemAssetImporterWorkWithLibrary:(id)a0 block:(id /* block */)a1;
- (void)initializeConstraintsDirector;
- (void)_invalidateDatabaseContext;
- (id)_determineWellKnownPhotoLibraryIdentifier;
- (void)_invalidateSearchIndexManager;
- (void)_initSyndicationPhotoLibrarySpecificServices;
- (void)currentLocaleDidChangeNotification:(id)a0;
- (BOOL)activate:(id *)a0;
- (void)_setCameraRollCountedInQuota:(BOOL)a0;
- (void)didBecomeNonSystemPhotoLibrary;
- (void)setICloudPhotosEnabledInternal:(BOOL)a0;
- (void)_stopObservingLibraryStateCompletedAllOperations;
- (BOOL)awaitLibraryState:(long long)a0 error:(id *)a1;
- (void)_invalidateDuplicateProcessor;
- (id)_newContainer:(Class)a0 scope:(id)a1;
- (id)_newOrderKeyManager;
- (void)_invalidateModelMigrator;
- (void)_waitForAwaitOperation:(id)a0;
- (void)_handleCoalescerActionWithScope:(id)a0 class:(Class)a1 forIDs:(id)a2 context:(id)a3;
- (void)_invalidateCameraPreviewWellManager;
- (id)newMomentGenerationDataManager;
- (void)_initCloudPhotoLibraryManager;
- (BOOL)isSyndicationPhotoLibrary;
- (void)_invalidateCloudPhotoLibraryManager;
- (void)dealloc;
- (BOOL)isSystemPhotoLibrary;
- (void)_invalidateMomentGenerationDataManager;
- (void)_invalidateSyndicationDeleteManager;
- (void)_cancelPendingOperations;
- (void)_invalidateKeywordManager;
- (void)registerOutstandingTransactionsHandler:(id /* block */)a0;
- (void)_invalidateRelationshipOrderKeyManager;
- (void)_initSystemPhotoLibrarySpecificServices;
- (id)_enqueueAwaitOperation;
- (void)awaitLibraryState:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_initCameraPreviewWellManager;
- (BOOL)_enqueueOperation:(id)a0 error:(id *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_invalidateComputeCacheJournalManager;
- (void)_invalidateAlbumCountCoalescer;
- (void)_initLazyWellKnownPhotoLibraryIdentifier;
- (void)invalidateReverseLocationDataOnAllAssets;
- (id)_libraryServicesStateNodeWithState:(long long)a0;
- (id)initWithLibraryBundle:(id)a0 backgroundJobService:(id)a1 cacheDeleteRegistration:(id)a2 delegateClass:(Class)a3;
- (id)newRebuildJournalManager;
- (id)newCloudPhotoLibraryManager;
- (id)activeOperations;
- (id)newCrashRecoverySupport;
- (void)_dispatchAwaitLibraryStateCompletionHandler:(id /* block */)a0 group:(id)a1 error:(id)a2;
- (id)pendingOperations;
- (void)_invalidateCacheDeleteSupport;
- (void)refreshAlbumCountForAlbumIDs:(id)a0;
- (void)_invalidateDupeManager;
- (BOOL)transitionToState:(long long)a0 error:(id *)a1;
- (id)newSearchIndexManager;
- (id)newComputeCacheJournalManager;
- (id)newAlbumCountCoalescer;
- (void)_invalidateImportSessionCountCoalescer;
- (void)_awaitLibraryState:(long long)a0 sync:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_invalidateBackgroundJobService;
- (void)deactivateWithInvalidationError:(id)a0;
- (void)_invalidate;
- (void)_invalidateCPLReadiness;
- (BOOL)finalize:(id *)a0;
- (unsigned long long)createOptions;
- (void).cxx_destruct;
- (BOOL)willBecomeNonSystemPhotoLibrary:(id *)a0;
- (void)_invalidateQuickActionManager;
- (void)refreshImportSessionCountForImportSessionIDs:(id)a0;
- (void)_addPendingOperationsForStateNode:(id)a0;
- (BOOL)updateSavedLocaleIfNeeded;

@end
