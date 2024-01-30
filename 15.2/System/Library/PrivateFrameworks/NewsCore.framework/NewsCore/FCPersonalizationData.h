@class NSString, NSMutableDictionary, NSData, FCPersonalizationTreatment, CKRecord, NSObject;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCAppActivityObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource> {
    BOOL _attemptingUpload;
    NSMutableDictionary *_aggregates;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCPersonalizationTreatment *_treatment;
    id<FCOperationThrottler> _saveThrottler;
}

@property (readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (readonly, nonatomic) NSData *pbData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)commandStoreFileName;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresHighPriorityFirstSync;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;

- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)modifyLocalAggregatesForFeatureKeys:(id)a0 withAction:(unsigned long long)a1 actionCount:(unsigned long long)a2 defaultClicks:(double)a3 defaultImpressions:(double)a4 impressionBias:(double)a5 groupBias:(double)a6;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allAggregates;
- (id)aggregatesForFeatures:(id)a0;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (void)activityObservingApplicationWillTerminate;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)d_allGlobalAggregates;
- (void)addObserver:(id)a0;
- (id)aggregatesForFeatureKeys:(id)a0;
- (void)removeObserver:(id)a0;
- (void)updateFeatures:(id)a0 withAction:(unsigned long long)a1 displayRank:(long long)a2 groupRank:(long long)a3 groupType:(long long)a4 individually:(BOOL)a5 configurableValues:(id)a6;
- (void)d_allResults:(id /* block */)a0 completion:(id /* block */)a1;
- (id)createAggregateWith:(id)a0 clicks:(double)a1 impressions:(double)a2;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)enumerateAggregatesUsingBlock:(id /* block */)a0;
- (id)localStoreMigrator;
- (id)initWithAggregates:(id)a0;
- (void)generateDerivedDataWithMaxAggregateCount:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)loadLocalCachesFromStore;
- (id)initWithPBData:(id)a0 treatment:(id)a1;
- (id)lookupAggregatesWith:(id)a0 creationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)aggregateForFeatureKey:(id)a0;
- (void)clearPersonalizationData;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)syncWithCompletion:(id /* block */)a0;
- (void)updateAggregatesWith:(id)a0 creationBlock:(id /* block */)a1 updateBlock:(id /* block */)a2;

@end
