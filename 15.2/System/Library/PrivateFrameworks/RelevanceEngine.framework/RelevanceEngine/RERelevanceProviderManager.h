@class REFeatureSet, NSHashTable, NSArray, REPriorityQueue, NSString, RERelevanceProviderEnvironment, NSDictionary, NSObject, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceProviderManager : NSObject <RERelevanceProviderManagerProperties> {
    RERelevanceProviderEnvironment *_environment;
    NSHashTable *_providers;
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    NSArray *_effectiveFeatures;
    NSDictionary *_inflectionValues;
    BOOL _dataStoresOpened;
    BOOL _hasSeperateRelevanceQueue;
    BOOL _implementsPrepareForUpdate;
    NSObject<OS_dispatch_queue> *_relevanceQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_loggingHeader;
}

@property (weak, nonatomic) RERelevanceProviderEnvironment *environment;
@property (retain, nonatomic) REFeatureSet *supportedFeatures;
@property (readonly, nonatomic) NSArray *effectiveFeatures;
@property (readonly, nonatomic) NSArray *allProviders;
@property (readonly, nonatomic) NSArray *allRelevanceProviders;
@property (readonly, nonatomic) unsigned long long scheduledUpdatesCount;
@property (readonly, nonatomic) BOOL dataSourcesOpened;

+ (BOOL)_supportsHistoricProviders;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;
+ (void)setProviderManagerClassesLoadingBlock:(id /* block */)a0;
+ (id)providerManagerClasses;
+ (id)_dependencyClasses;
+ (BOOL)_wantsDelayedUpdate;
+ (BOOL)_requiresLocationServices;
+ (BOOL)supportsHistoricProviders;

- (id)initWithQueue:(id)a0;
- (void)pauseWithCompletion:(id /* block */)a0;
- (void)endActivity:(id)a0;
- (BOOL)_isHistoricProvider:(id)a0;
- (float)_relevanceForProvider:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (float)_relevanceForHistoricProvider:(id)a0;
- (void)_loadLoggingHeader;
- (void)_handleSignificantTimeChange;
- (void)resume;
- (unsigned long long)hash;
- (void)dealloc;
- (void)resumeWithCompletion:(id /* block */)a0;
- (void)beginActivity:(id)a0;
- (void)_prepareForUpdate;
- (BOOL)_isValidProvider:(id)a0;
- (void)_addedProvider:(id)a0;
- (void)_scheduleUpdate:(id)a0;
- (void)_accessQueue_scheduleUpdate:(id)a0;
- (void)_removeProvider:(id)a0;
- (id)_valuesForProvider:(id)a0 context:(id)a1 features:(id)a2;
- (id)_valueForHistoricProvider:(id)a0 feature:(id)a1;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (void)_relevanceQueue_openDataStores;
- (void)_accessQueue_performPendingUpdatesAndScheduleTimerIfNeeded;
- (void)_accessQueue_resetTimer;
- (void)_accessQueue_performUpdate:(id)a0;
- (void)_accessQueue_performImmediateUpdate:(id)a0;
- (void)_accessQueue_appendCompletionHandlerForScheduledUpdate:(id)a0;
- (void)addProvider:(id)a0 completion:(id /* block */)a1;
- (void)removeProvider:(id)a0 completion:(id /* block */)a1;
- (BOOL)containsProvider:(id)a0;
- (void)relevanceForProvider:(id)a0 completion:(id /* block */)a1;
- (id)relevanceForProvider:(id)a0 context:(id)a1;
- (void)isProviderHistoric:(id)a0 completion:(id /* block */)a1;
- (void)relevanceForHistoricProvider:(id)a0 completion:(id /* block */)a1;
- (void)enumerateInflectionFeatureValues:(id /* block */)a0;
- (BOOL)_dataSourcesOpened;
- (id)_manager_queue;
- (void)_enumerateProviders:(id /* block */)a0;
- (void)beginFetchingData;
- (void)finishFetchingData;
- (void)_removeAllPendingUpdates;
- (void)_prepareForUpdateWithCompletion:(id /* block */)a0;

@end
