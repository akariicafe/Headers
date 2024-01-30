@class REFeatureSet, NSHashTable, NSLock, REUpNextScheduler, REDependencyGraph, NSDictionary, REUpNextDisjointSet, NSMutableArray, NSMutableSet, NSMapTable;
@protocol RERelevanceProviderEnvironmentDelegate;

@interface RERelevanceProviderEnvironment : RERelevanceEngineSubsystem <RERelevanceProviderEnvironmentProperties, REElementRelevanceProviderGenerator> {
    NSMutableArray *_relevanceManagers;
    NSMapTable *_relevanceClassManagerMap;
    NSMapTable *_relevanceHistogramMap;
    REUpNextDisjointSet *_relevanceProviderSet;
    REDependencyGraph *_dependencyGraph;
    NSMapTable *_relevanceValues;
    NSHashTable *_customProviders;
    NSLock *_relevanceValuesLock;
    REFeatureSet *_supportedFeatures;
    REUpNextScheduler *_scheduler;
    NSHashTable *_providersToUpdate;
    NSMutableSet *_providerManagersToUpdate;
    NSMutableArray *_updateCompletionBlocks;
}

@property (weak, nonatomic) id<RERelevanceProviderEnvironmentDelegate> delegate;
@property (nonatomic) BOOL allowsLocationUse;
@property (readonly, nonatomic) unsigned long long relevanceProviderCount;
@property (readonly, nonatomic) REFeatureSet *supportedFeatures;
@property (readonly, nonatomic) NSDictionary *allProviderValues;

- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (id)initWithRelevanceEngine:(id)a0;
- (void)immediateUpdateForRelevanceProviderManager:(id)a0 completion:(id /* block */)a1;
- (void)scheduleUpdateForRelevanceProviderManager:(id)a0 completion:(id /* block */)a1;
- (void)scheduleUpdateForRelevanceProvider:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSupportedRelevanceProvider:(id)a0;
- (id)currentRelevanceProvidersState;
- (void)_setupRelevanceProviderManagers;
- (void)_queue_performUpdate:(id /* block */)a0;
- (id)_histogramForFeature:(id)a0;
- (id)_providerManagerForProvider:(id)a0;
- (void)_removeRelevanceValueForProvider:(id)a0;
- (void)_addRelevanceValue:(id)a0 forProvider:(id)a1;
- (id)_histogramForProvider:(id)a0;
- (BOOL)containsRelevanceProvider:(id)a0;
- (id)relevancesForRelevanceProvider:(id)a0;
- (void)_scaleRelevanceProviderValues:(id)a0 values:(id)a1;
- (id)featuresForRelevanceProvider:(id)a0;
- (id)_relevaneProviderWithType:(id)a0 withOptions:(id)a1;
- (id)createRelevaneProviderWithType:(id)a0 withOptions:(id)a1;
- (id)encodeRelevaneProvider:(id)a0;
- (void)addRelevanceProvider:(id)a0 completion:(id /* block */)a1;
- (void)removeRelevanceProvider:(id)a0 completion:(id /* block */)a1;
- (BOOL)isRelevanceProviderLoaded:(id)a0;
- (void)relateRelevanceProvider:(id)a0 toRelevanceProvider:(id)a1;
- (BOOL)isRelevanceProviderHistoric:(id)a0;
- (id)relevancesForRelevanceProvider:(id)a0 usingContext:(id)a1;
- (void)accessHistogramForFeature:(id)a0 usingBlock:(id /* block */)a1;

@end
