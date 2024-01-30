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
+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isVoiceAssistantEnabled;
+ (BOOL)isCloudSyncEnabled;
+ (id)cloudSyncDisabledFirstPartyBundleIds;

- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)triggerDelayedCloudSyncRewrite;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (id)entitiesMappingPreviousTrieSha256;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (id)userDefaults;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (double)assetMetadataRefreshIntervalSeconds;
- (BOOL)queryPlanLoggingEnabled;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (BOOL)trialUseDefaultFiles;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (id)abGroupOverride;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (BOOL)isAuthorizedToLogLocation;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (id)entitiesBackfilledTimestamp;
- (id)init;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (id)trialPathOverrides;
- (double)weightMultiplier;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (void).cxx_destruct;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (BOOL)showLocationsFoundInApps;

@end
