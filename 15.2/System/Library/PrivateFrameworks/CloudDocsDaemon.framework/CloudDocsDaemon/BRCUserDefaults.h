@class NSString, NSArray, BRCSyncOperationThrottleParams, NSSet, NSMutableDictionary, NSDictionary, NSObject, NSIndexSet;
@protocol OS_xpc_object;

@interface BRCUserDefaults : NSObject {
    BRCUserDefaults *_globalUserDefault;
    NSDictionary *_serverContainerConfigurationDict;
    NSMutableDictionary *_cache;
    NSString *_clientZoneIdentifier;
}

@property (readonly, nonatomic) unsigned long long maxXattrBlobSize;
@property (readonly, nonatomic) unsigned long long maxPreservedXattrBlobSize;
@property (readonly, nonatomic) BOOL shouldFetchAllChanges;
@property (readonly, nonatomic) unsigned int maxRecordCountInFetchRecordsOperation;
@property (readonly, nonatomic) unsigned int maxRecordCountInModifyRecordsOperation;
@property (readonly, nonatomic) float modifyRecordsCountMultiplicativeDecrease;
@property (readonly, nonatomic) float modifyRecordsCountAdditiveIncreaseFraction;
@property (readonly, nonatomic) unsigned int maxRecordCountInClientZoneModifyRecordsOperation;
@property (readonly, nonatomic) unsigned int maxRecordCountInQuerySharedRecordsOperation;
@property (readonly, nonatomic) unsigned int maxRelativePathDepth;
@property (readonly, nonatomic) unsigned int maxSyncPathDepth;
@property (readonly, nonatomic) unsigned int treeEnumeratorBatchSize;
@property (readonly, nonatomic) NSSet *packageExtensions;
@property (readonly, nonatomic) NSSet *blacklistedPackageExtensions;
@property (readonly, nonatomic) NSSet *iworkShareableExtensions;
@property (readonly, nonatomic) NSSet *shouldBeGreedyExtensions;
@property (readonly, nonatomic) NSSet *nonEvictableExtensions;
@property (readonly, nonatomic) NSSet *nonAutoEvictableExtensions;
@property (readonly, nonatomic) NSSet *nonAutoEvictableUTIs;
@property (readonly, nonatomic) NSSet *nonEvictablePathComponents;
@property (readonly, nonatomic) NSSet *autoEvictableUTIs;
@property (readonly, nonatomic) unsigned short stageFileUmask;
@property (readonly, nonatomic) unsigned short stageDirectoryUmask;
@property (readonly, nonatomic) unsigned short stageInPackageDirectoryUmask;
@property (readonly, nonatomic) unsigned short stageInPackageFileUmask;
@property (readonly, nonatomic) unsigned short stageFSRootUmask;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *configurationUpdateXPCActivity;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *forcedSyncXPCActivity;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *transmogrifyXPCActivity;
@property (readonly, nonatomic) NSArray *syncThrottles;
@property (readonly, nonatomic) NSDictionary *appLibraryScanThrottleParams;
@property (readonly, nonatomic) NSDictionary *lostItemThrottleParams;
@property (readonly, nonatomic) NSDictionary *applyThrottleParams;
@property (readonly, nonatomic) NSDictionary *downloadThrottleParams;
@property (readonly, nonatomic) NSDictionary *uploadThrottleParams;
@property (readonly, nonatomic) NSDictionary *uploadFileModifiedThrottleParams;
@property (readonly, nonatomic) NSDictionary *perItemSyncUpThrottleParams;
@property (readonly, nonatomic) double quotaFetchPacerDelay;
@property (readonly, nonatomic) double appsFetchPacerDelay;
@property (readonly, nonatomic) unsigned long long availableQuotaComfortSize;
@property (readonly, nonatomic) BRCSyncOperationThrottleParams *syncDownThrottle;
@property (readonly, nonatomic) BRCSyncOperationThrottleParams *syncUpThrottle;
@property (readonly, nonatomic) NSDictionary *syncClientZoneThrottleParams;
@property (readonly, nonatomic) NSDictionary *syncClientZoneErrorThrottleParams;
@property (readonly, nonatomic) float syncUpMinimalBudget;
@property (readonly, nonatomic) float syncUpDailyBudget;
@property (readonly, nonatomic) float syncUpHourlyBudget;
@property (readonly, nonatomic) float syncUpMinutelyBudget;
@property (readonly, nonatomic) float syncUpInitialItemCost;
@property (readonly, nonatomic) float syncUpStructureCreateCost;
@property (readonly, nonatomic) float syncUpStructureEditCost;
@property (readonly, nonatomic) float syncUpStructureDeleteCost;
@property (readonly, nonatomic) float syncUpDataCreateCost;
@property (readonly, nonatomic) float syncUpDataEditCost;
@property (readonly, nonatomic) float syncUpDataDeleteCost;
@property (readonly, nonatomic) float syncUpDocumentCreateCost;
@property (readonly, nonatomic) float syncUpDocumentEditCost;
@property (readonly, nonatomic) float syncUpDocumentDeleteCost;
@property (readonly, nonatomic) BOOL skipPerItemSyncUpThrottling;
@property (readonly, nonatomic) BOOL skipSyncUpThrottlingOnBatchFailures;
@property (readonly, nonatomic) unsigned long long sharedDbSyncDownCoalesceNanoseconds;
@property (readonly, nonatomic) NSDictionary *operationFailureThrottleParams;
@property (readonly, nonatomic) NSDictionary *appLibraryResetThrottleParams;
@property (readonly, nonatomic) NSDictionary *sharedAppLibraryResetThrottleParams;
@property (readonly, nonatomic) NSDictionary *appLibraryAliasRemovalThrottleParams;
@property (readonly, nonatomic) BOOL dbTraced;
@property (readonly, nonatomic) BOOL dbProfiled;
@property (readonly, nonatomic) int dbBatchSize;
@property (readonly, nonatomic) double dbBatchDelay;
@property (readonly, nonatomic) BOOL allowReadOnlyDBInIPC;
@property (readonly, nonatomic) long long dbAutovacuumBatchSize;
@property (readonly, nonatomic) float dbAutovacuumRatio;
@property (readonly, nonatomic) BOOL skipServerSideThrottling;
@property (readonly, nonatomic) BOOL shouldAppLibraryBeGreedy;
@property (readonly, nonatomic) BOOL shouldSessionBeGreedy;
@property (readonly, nonatomic) unsigned long long maxTotalFilesCount;
@property (readonly, nonatomic) unsigned long long maxNumberOfFilesInAFolder;
@property (readonly, nonatomic) long long uploadMaxFileSize;
@property (readonly, nonatomic) long long uploadMaxInPkgFileSize;
@property (readonly, nonatomic) long long uploadMaxPkgFileSize;
@property (readonly, nonatomic) unsigned long long uploadBatchRecordsCount;
@property (readonly, nonatomic) unsigned long long uploadBatchCount;
@property (readonly, nonatomic) unsigned long long downloadBatchRecordsCount;
@property (readonly, nonatomic) unsigned long long downloadBatchCount;
@property (readonly, nonatomic) unsigned long long downloadWillRetryProgressMaxCount;
@property (readonly, nonatomic) unsigned long long zoneHealthSyncDownBatchRecordsCount;
@property (readonly, nonatomic) unsigned long long sharedDBSyncDownBatchRecordsCount;
@property (readonly, nonatomic) double systemReachabilityLatency;
@property (readonly, nonatomic) double systemPowerLatency;
@property (readonly, nonatomic) double systemLowDiskLatency;
@property (readonly, nonatomic) double writerIOsCancelDelay;
@property (readonly, nonatomic) double readerIOsCancelDelay;
@property (readonly, nonatomic) int readerMaxConcurrentIOs;
@property (readonly, nonatomic) int writerMaxConcurrentIOs;
@property (readonly, nonatomic) NSDictionary *readerThrottleParams;
@property (readonly, nonatomic) unsigned int applySchedulerJobMaxRetriesBeforeAssert;
@property (readonly, nonatomic) int writerApplyBatchSize;
@property (readonly, nonatomic) int readerScanBatchSize;
@property (readonly, nonatomic) double readerPackageProcessingDelay;
@property (readonly, nonatomic) double readerLostItemBackoff;
@property (readonly, nonatomic) double markChildLostBackoff;
@property (readonly, nonatomic) double fseventsLatency;
@property (readonly, nonatomic) double fseventsResetBackoff;
@property (readonly, nonatomic) unsigned long long fseventQueueBufferSize;
@property (readonly, nonatomic) unsigned long long fseventProcessBatchSize;
@property (readonly, nonatomic) int transferQueueMinBatchSize;
@property (readonly, nonatomic) int transferQueueMinConcurrentOperations;
@property (readonly, nonatomic) int transferQueueMaxConcurrentOperations;
@property (readonly, nonatomic) double transferQueueTransferBudget;
@property (readonly, nonatomic) BOOL sessionZombiesEnabled;
@property (readonly, nonatomic) BOOL nsurlsessiondEnabled;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *stageGCXPCActivity;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *cacheDeletePushXPCActivity;
@property (readonly, nonatomic) NSString *serverConfigurationURL;
@property (readonly, nonatomic) unsigned int publishURLTimeout;
@property (readonly, nonatomic) long long minFileSizeForGraveyard;
@property (readonly, nonatomic) long long minAutomaticallyEvictableFilesize;
@property (readonly, nonatomic) unsigned int logoutTimeout;
@property (readonly, nonatomic) double foregroundGracePeriod;
@property (readonly, nonatomic) double forceForegroundGracePeriod;
@property (readonly, nonatomic) BOOL forceBatchFailureWhenReceivingAssetTokenExpiration;
@property (readonly, nonatomic) BOOL shouldFixupBundleBitOnPackages;
@property (readonly, nonatomic) NSSet *extensionsSkippingBundleBitFixup;
@property (readonly, nonatomic) double accessTimeDeltaInLowUrgency;
@property (readonly, nonatomic) double accessTimeDeltaInMedUrgency;
@property (readonly, nonatomic) double accessTimeDeltaInHighUrgency;
@property (readonly, nonatomic) double accessTimeDeltaInVeryHighUrgency;
@property (readonly, nonatomic) double defaultTimeDeltaForEviction;
@property (readonly, nonatomic) double onDiskAccessTimeDeltaInLowUrgency;
@property (readonly, nonatomic) double onDiskAccessTimeDeltaInMedUrgency;
@property (readonly, nonatomic) double onDiskAccessTimeDeltaInHighUrgency;
@property (readonly, nonatomic) double onDiskAccessTimeDeltaInVeryHighUrgency;
@property (readonly, nonatomic) double defaultOnDiskAccessTimeDefaultForEviction;
@property (readonly, nonatomic) double graveyardAgeDeltaInLowUrgency;
@property (readonly, nonatomic) double graveyardAgeDeltaInMedUrgency;
@property (readonly, nonatomic) double minFetchQuotaInterval;
@property (readonly, nonatomic) double cacheDeleteRecomputeInterval;
@property (readonly, nonatomic) double purgePacerInterval;
@property (readonly, nonatomic) long long dbReclaimableSpaceThreshold;
@property (readonly, nonatomic) double maximumDocumentAgeToBeGreedy;
@property (readonly, nonatomic) unsigned long long statementCacheMaxCountForServerTruth;
@property (readonly, nonatomic) unsigned long long statementCacheMaxCountForClientTruth;
@property (readonly, nonatomic) unsigned long long copyShareIDsBatchSize;
@property (readonly, nonatomic) unsigned long long aliasDeletionBatchSize;
@property (readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToBeFunctional;
@property (readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToDownload;
@property (readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToDownloadUserInitiated;
@property (readonly, nonatomic) unsigned long long minimumDiskSpaceRequiredToBeGreedy;
@property (readonly, nonatomic) unsigned long long diskSpaceRequiredToReturnToGreedyState;
@property (readonly, nonatomic) float relativeDiskSpaceRequiredToReturnToGreedyState;
@property (readonly, nonatomic) double diskSpaceCheckInterval;
@property (readonly, nonatomic) double activeDownloadSizeRefreshInterval;
@property (readonly, nonatomic) unsigned long long maximumAccountSizeToBeAlwaysGreedy;
@property (readonly, nonatomic) BOOL shouldDisplayUploadNotification;
@property (readonly, nonatomic) BOOL spotlightIndexingEnabled;
@property (readonly, nonatomic) double recentsEnumeratorPacerInterval;
@property (readonly, nonatomic) unsigned long long recentsEnumeratorBatchSize;
@property (readonly, nonatomic) unsigned long long recentsEnumeratorMaxHierarchyDepth;
@property (readonly, nonatomic) NSDictionary *recentsEnumeratorFailureThrottleParams;
@property (readonly, nonatomic) NSDictionary *migrationThrottleParams;
@property (readonly, nonatomic) double intervalToWaitBeforeShowingAdditionalDescription;
@property (readonly, nonatomic) long long minimalSizeToShowAdditionalDescription;
@property (readonly, nonatomic) double documentAccessHighPriorityInterval;
@property (readonly, nonatomic) double packageExtensionPlistWriteInterval;
@property (readonly, nonatomic) long long minFileSizeForThumbnailTransfer;
@property (readonly, nonatomic) unsigned int thumbnailTransferQueueWidth;
@property (readonly, nonatomic) NSSet *blacklistedThumbnailExtensions;
@property (readonly, nonatomic) unsigned long long notifOverflowLimit;
@property (readonly, nonatomic) unsigned long long notifGatherUpTo;
@property (readonly, nonatomic) unsigned long long notifBatchSize;
@property (readonly, nonatomic) double periodicSyncTimeInterval;
@property (readonly, nonatomic) unsigned long long zoneHealthReportedRecordNamesCount;
@property (readonly, nonatomic) BOOL onlyTreatCaughtUpAsConsistent;
@property (readonly, nonatomic) NSSet *blacklistPCSPrep;
@property (readonly, nonatomic) BOOL shouldPreparePCSMigration;
@property (readonly, nonatomic) unsigned long long pcsChainingMaxPathDepth;
@property (readonly, nonatomic) unsigned long long pcsChainingBatchSize;
@property (readonly, nonatomic) BOOL destroyiWorkShares;
@property (readonly, nonatomic) unsigned long long readerMarkChildrenLostBatchSize;
@property (readonly, nonatomic) unsigned long long lostScanDeepScanFirstThreshold;
@property (readonly, nonatomic) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (readonly, nonatomic) NSSet *excludedFilenamesWorthPreserving;
@property (readonly, nonatomic) NSSet *excludedExtensionsWorthPreserving;
@property (readonly, nonatomic) unsigned int ignoredQuarantineMask;
@property (readonly, nonatomic) BOOL shouldAutoMigrateToCloudDocs;
@property (readonly, nonatomic) BOOL shouldFixupTargetCZMAliases;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *aggressivePCSChainActivity;
@property (readonly, nonatomic) unsigned long long deleteShareIDBatchCount;
@property (readonly, nonatomic) unsigned long long maxFolderEnumerationCount;
@property (readonly, nonatomic) unsigned long long maxFolderEnumerationDepth;
@property (readonly, nonatomic) double powerLogReportInterval;
@property (readonly, nonatomic) unsigned long long sqliteCacheSize;
@property (readonly, nonatomic) unsigned long long sqliteCacheSpill;
@property (readonly, nonatomic) double downloadSizeRefreshInterval;
@property (readonly, nonatomic) char forceSyncOverride;
@property (readonly, nonatomic) unsigned long long utiCacheSize;
@property (readonly, nonatomic) unsigned long long fieldsToMoveOutOfTrashMask;
@property (readonly, nonatomic) unsigned long long applyCountToSignalFaultsLive;
@property (readonly, nonatomic) unsigned long long computeEvictableBatchSize;
@property (readonly, nonatomic) double eventMetricTimeout;
@property (readonly, nonatomic) BOOL shouldReportAllPerItemFailures;
@property (readonly, nonatomic) BOOL should2PhasePCSChain;
@property (readonly, nonatomic) BOOL isBlacklistedFromFolderSharing;
@property (readonly, nonatomic) BOOL canSaveRecordsDirectlyForDeltaSync;
@property (readonly, nonatomic) double syncUpDelayForFailure;
@property (readonly, nonatomic) double syncDownDelayForFailure;
@property (readonly, nonatomic) unsigned long long syncUpRetryCountForFailure;
@property (readonly, nonatomic) unsigned long long uploadRetryCountForFailure;
@property (readonly, nonatomic) unsigned long long downloadRetryCountForFailure;
@property (readonly, nonatomic) unsigned long long applyRetryCountForFailure;
@property (readonly, nonatomic) unsigned long long readerRetryCountForFailure;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *analyticsReportXPCActivity;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *appTelemetryGatherXPCActivity;
@property (readonly, nonatomic) BOOL useFailIfOutdatedForResets;
@property (readonly, nonatomic) NSString *fakeEtagForFailIfOutdated;
@property (readonly, nonatomic) BOOL useShareReferenceOnSideCar;
@property (readonly, nonatomic) BOOL shouldMigrateFetchShareAliases;
@property (readonly, nonatomic) NSArray *carryPartitions;
@property (readonly, nonatomic) unsigned long long maxBackoffToRetryUserInitiated;
@property (readonly, nonatomic) BOOL pcsChainShareAliases;
@property (readonly, nonatomic) long long delayForStuckThrottle;
@property (readonly, nonatomic) BOOL forceFailIfExistOnRevival;
@property (readonly, nonatomic) BOOL changeItemIDOnUnknownItem;
@property (readonly, nonatomic) unsigned long long healthZoneMaxNumberOfResets;
@property (readonly, nonatomic) double healthZoneTimeIntervalForMaxNumberOfResets;
@property (readonly, nonatomic) BOOL reportXPCErrorOnPCSChain;
@property (readonly, nonatomic) long long timeoutForCZMProcessing;
@property (readonly, nonatomic) BOOL shouldReportTelemetryEvents;
@property (readonly, nonatomic) long long telemetryEventQueueSize;
@property (readonly, nonatomic) unsigned int telemetryEventQueueReductionAmount;
@property (readonly, nonatomic) long long telemetryEventReportBatchSize;
@property (readonly, nonatomic) NSIndexSet *telemetryEventDisabledMessages;
@property (readonly, nonatomic) long long telemetryRetryCountForPermenentFailure;
@property (readonly, nonatomic) double telemetryApplySchedulerTimeout;
@property (readonly, nonatomic) NSSet *telemetryHeaderSupportedClasses;
@property (readonly, nonatomic) unsigned long long telemetryErrorDescriptionMaxLength;
@property (readonly, nonatomic) NSSet *benignTelemetryErrorDescriptions;
@property (readonly, nonatomic) BOOL deleteShareOnEmptySave;
@property (readonly, nonatomic) BOOL preventRecordSyncWithoutDiffs;
@property (readonly, nonatomic) BOOL stripBirthtimeFromSyncUpMaskOnDocuments;
@property (readonly, nonatomic) BOOL preventSharingFolderWithPendingDelete;
@property (readonly, nonatomic) NSSet *healthErrorsForReset;
@property (readonly, nonatomic) NSSet *healthErrorsToReport;
@property (readonly, nonatomic) NSSet *recordsToIgnoreOnSyncDown;
@property (readonly, nonatomic) BOOL preventConcurrentModifyRecordsOperations;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *dbIntegrityCheckXPCActivity;
@property (readonly, nonatomic) BOOL integrityCheckBoosting;
@property (readonly, nonatomic) BOOL dbIntegrityCheckApplyJobs;
@property (readonly, nonatomic) BOOL dbIntegrityCheckDownloadJobs;
@property (readonly, nonatomic) BOOL dbIntegrityCheckUploadJobs;
@property (readonly, nonatomic) BOOL dbIntegrityCheckReaderJobs;
@property (readonly, nonatomic) BOOL dbIntegrityCheckSyncUpJobs;
@property (readonly, nonatomic) BOOL hasMultiAccountsHandling;
@property (readonly, nonatomic) BOOL supportsServerSideAssetCopies;
@property (readonly, nonatomic) double operationTimeout;
@property (readonly, nonatomic) unsigned int syncConsistencyFileChecksumRate;
@property (readonly, nonatomic) unsigned int syncConsistencyPackageChecksumRate;
@property (readonly, nonatomic) unsigned int syncConsistencyMaxEventsCount;
@property (readonly, nonatomic) BOOL syncConsistencyCheckerEnabled;
@property (readonly, nonatomic) BOOL syncConsistencyCheckerSnapshotting;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *syncConsistencyCheckerXPCActivity;
@property (readonly, nonatomic) double syncConsistencyXPCActivityDeferralCheckInterval;
@property (readonly, nonatomic) double syncConsistencyXPCActivityCheckLeeway;
@property (readonly, nonatomic) double syncConsistencyTimeout;
@property (readonly, nonatomic) BOOL skipContainerRecordsWithMissingAssets;
@property (readonly, nonatomic) double maxPauseFileTimeout;
@property (readonly, nonatomic) unsigned long long lostItemUnderUnknownParentBeforeDeepScan;

+ (void)loadCachedServerConfiguration;
+ (id)cachedServerConfigurationPath;
+ (id)defaultsForMangledID:(id)a0;
+ (id)_userDefaultsManager;
+ (id)defaultsForSideCar;
+ (int)rampNumberWithSession:(id)a0;
+ (id)defaultsForMetadataContainer;
+ (void)setServerConfigurationURL:(id)a0 whenLoaded:(id /* block */)a1;
+ (void)reset;
+ (id)defaultsForSharedZone;

- (BOOL)boolForKey:(id)a0 byDefault:(BOOL)a1;
- (float)floatForKey:(id)a0 inheritFromGlobal:(BOOL)a1 min:(float)a2 max:(float)a3 byDefault:(float)a4;
- (BOOL)optimisticallyPCSChainDuringResetWithSession:(id)a0;
- (id)initWithServerConfiguration:(id)a0 globalUserDefaults:(id)a1 clientZoneIdentifier:(id)a2;
- (id)_healthErrorSetForKey:(id)a0 byDefault:(id)a1;
- (id)initAsGlobalWithServerConfiguration:(id)a0;
- (float)floatForKey:(id)a0 min:(float)a1 max:(float)a2 byDefault:(float)a3;
- (id)_UTISetFor:(id)a0 startingWithExtensions:(id)a1;
- (unsigned long long)unsignedLongLongForKey:(id)a0 min:(unsigned long long)a1 max:(unsigned long long)a2 byDefault:(unsigned long long)a3;
- (id)_extensionSetForKey:(id)a0 startingWithExtensions:(id)a1;
- (BOOL)boolForKey:(id)a0 inheritFromGlobal:(BOOL)a1 byDefault:(BOOL)a2;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0 inheritFromGlobal:(BOOL)a1 validateWithBlock:(id /* block */)a2;
- (unsigned int)unsignedIntForKey:(id)a0 min:(unsigned int)a1 max:(unsigned int)a2 byDefault:(unsigned int)a3;
- (id)_serverDefaultForKey:(id)a0;
- (id)indexSetForKey:(id)a0 inheritFromGlobal:(BOOL)a1 byDefault:(id)a2;
- (float)_defaultSyncUpMinutelyBudget;
- (double)doubleForKey:(id)a0 min:(double)a1 max:(double)a2 byDefault:(double)a3;
- (unsigned short)_umaskForKey:(id)a0;
- (float)_defaultSyncUpHourlyBudget;
- (BOOL)aggressivelyPCSChainWithSession:(id)a0;
- (float)_defaultSyncUpDailyBudget;
- (id)_loadObjectForKey:(id)a0 inheritFromGlobal:(BOOL)a1 validateWithBlock:(id /* block */)a2;
- (id)stringForKey:(id)a0 byDefault:(id)a1;
- (BOOL)optimisticallyPCSChainWithSession:(id)a0;
- (int)intForKey:(id)a0 min:(int)a1 max:(int)a2 byDefault:(int)a3;
- (id)indexSetForKey:(id)a0 byDefault:(id)a1;
- (BOOL)_shouldRampForKey:(id)a0 session:(id)a1;
- (unsigned int)unsignedIntForKey:(id)a0 inheritFromGlobal:(BOOL)a1 min:(unsigned int)a2 max:(unsigned int)a3 byDefault:(unsigned int)a4;
- (id)stringForKey:(id)a0 inheritFromGlobal:(BOOL)a1 byDefault:(id)a2;
- (id)xpcActivityDictionaryForKey:(id)a0 byDefault:(id)a1;

@end
