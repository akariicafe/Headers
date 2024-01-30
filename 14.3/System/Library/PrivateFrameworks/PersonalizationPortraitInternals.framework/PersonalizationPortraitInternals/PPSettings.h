@class NSUserDefaults, PPKVOObserver, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSettings : NSObject {
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}

@property (nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled;

+ (id)sharedInstance;
+ (void)initialize;
+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isVoiceAssistantEnabled;
+ (BOOL)isCloudSyncEnabled;
+ (id)cloudSyncDisabledFirstPartyBundleIds;

- (id)userDefaults;
- (id)_donationDisabledBundleIds;
- (void)_updateAppConnectionsSettings;
- (void)registerDisabledBundleIdPurgeHandler;
- (id)init;
- (void)_triggerDelayedBundleIdPurge;
- (void).cxx_destruct;
- (void)_refreshCloudKitDisabledBundleIds;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (id)abGroupOverride;
- (BOOL)isAuthorizedToLogLocation;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)_purgeRecordsForDisabledBundleIdsAsync;
- (id)entitiesBackfilledTimestamp;
- (id)trialPathOverrides;
- (void)_invokeChangeHandlersAsync;
- (void)_disableBundleIdentifier:(id)a0;
- (void)_handleCloudStorageDeletedByUser;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (BOOL)showLocationsFoundInApps;
- (BOOL)trialUseDefaultFiles;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (BOOL)queryPlanLoggingEnabled;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (void)_refreshDisabledBundleIds;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (id)_cloudKitDisabledBundleIds;
- (void)_triggerDelayedOperationWithCoalescingToken:(_Atomic int *)a0 operation:(id /* block */)a1;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (void)_updateQueryPlanLogging;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (double)assetMetadataRefreshIntervalSeconds;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (void)_clearTestSettings;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (double)weightMultiplier;
- (void)triggerDelayedCloudSyncRewrite;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (id)entitiesMappingPreviousTrieSha256;

@end
