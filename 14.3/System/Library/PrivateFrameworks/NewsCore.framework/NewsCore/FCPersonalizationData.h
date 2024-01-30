@class NSObject, NSMutableDictionary, NSString, NSData, FCPersonalizationTreatment, CKRecord, NSMutableArray;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCAppActivityObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource>

@property (retain, nonatomic) NSMutableDictionary *aggregates;
@property (retain, nonatomic) NSMutableDictionary *openChangeGroupDeltas;
@property (retain, nonatomic) NSMutableArray *closedChangeGroups;
@property (retain, nonatomic) CKRecord *remoteRecord;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain) FCPersonalizationTreatment *treatment;
@property (retain, nonatomic) id<FCOperationThrottler> saveThrottler;
@property BOOL attemptingUpload;
@property (readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (readonly, nonatomic) NSData *pbData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (id)localStoreMigrator;
+ (BOOL)requiresBatchedSync;

- (void)_applicationDidEnterBackground;
- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)generateDerivedDataWithQualityOfService:(long long)a0 completion:(id /* block */)a1;
- (id)aggregatesForFeatures:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)init;
- (void)_reloadTreatment;
- (void).cxx_destruct;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)_closeOpenChangeGroupFromInstance:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)activityObservingApplicationWillTerminate;
- (void)addObserver:(id)a0;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)a0;
- (void)_applicationDidEnterForeground;
- (id)aggregatesForFeatureKeys:(id)a0;
- (void)syncWithCompletion:(id /* block */)a0;
- (id)initWithPBData:(id)a0 treatment:(id)a1;
- (void)clearPersonalizationData;
- (void)saveReadableAggregates;
- (void)submitPersonalizationVector;
- (void)_writeToLocalStoreWithCompletionHandler:(id /* block */)a0;
- (void)updateAggregatesWith:(id)a0 creationBlock:(id /* block */)a1 updateBlock:(id /* block */)a2;
- (void)updateFeatures:(id)a0 withAction:(unsigned long long)a1 displayRank:(long long)a2 groupRank:(long long)a3 groupType:(long long)a4 individually:(BOOL)a5 configurableValues:(id)a6 featuresUpdatedBlock:(id /* block */)a7;
- (id)aggregateForFeatureKey:(id)a0;
- (void)_updateWithRemoteRecord:(id)a0 profile:(id)a1;
- (void)enumerateAggregatesUsingBlock:(id /* block */)a0;
- (id)modifyLocalAggregatesForFeatureKeys:(id)a0 withAction:(unsigned long long)a1 actionCount:(unsigned long long)a2 defaultClicks:(double)a3 defaultImpressions:(double)a4 impressionBias:(double)a5 groupBias:(double)a6;
- (id)initWithAggregates:(id)a0;
- (void)cacheGSToken;
- (void)loadLocalCachesFromStore;
- (void)d_allResults:(id /* block */)a0 completion:(id /* block */)a1;
- (id)d_allGlobalAggregates;
- (id)createAggregateWith:(id)a0 clicks:(double)a1 impressions:(double)a2;
- (id)_instanceIdentifier;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (id)lookupAggregatesWith:(id)a0 creationBlock:(id /* block */)a1;
- (void)activityObservingApplicationWindowDidBecomeBackground;

@end
