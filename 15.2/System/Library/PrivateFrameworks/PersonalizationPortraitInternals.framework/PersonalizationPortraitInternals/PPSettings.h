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
+ (BOOL)isCloudSyncEnabled;
+ (BOOL)isVoiceAssistantEnabled;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (void)disableBundleIdentifier:(id)a0;
+ (void)clearTestSettings;

- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (id)userDefaults;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (id)entitiesMappingPreviousTrieSha256;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (BOOL)showLocationsFoundInApps;
- (BOOL)queryPlanLoggingEnabled;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (id)entitiesBackfilledTimestamp;
- (void).cxx_destruct;
- (void)triggerDelayedCloudSyncRewrite;
- (id)init;
- (double)weightMultiplier;
- (double)assetMetadataRefreshIntervalSeconds;
- (id)abGroupOverride;
- (id)trialPathOverrides;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (BOOL)trialUseDefaultFiles;
- (BOOL)isAuthorizedToLogLocation;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)setTrialUseDefaultFiles:(BOOL)a0;

@end
