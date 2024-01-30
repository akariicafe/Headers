@class NSString, GEOObserverHashTable, GEOABAssignmentResponse;
@protocol GEOExperimentServerProxy;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {
    id<GEOExperimentServerProxy> _serverProxy;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _experimentsInfoLock;
    GEOObserverHashTable *_experimentObservers;
}

@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useProxy:(Class)a0;
+ (id)sharedConfiguration;

- (id)detailedDescription;
- (id)clientConfig;
- (void)_debug_forceUpdate;
- (void)_debug_setActiveExperimentBranch:(id)a0;
- (id)_reportAProblemClientMetadata;
- (id)_mapsAbClientMetadata;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)a0;
- (id)_parsecClientMetadata;
- (id)_siriClientMetadata;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)a0;
- (void)_fetchAllAvailableExperimentsResponse:(id /* block */)a0;
- (void)refreshDatasetABStatus:(id)a0;
- (void)removeExperimentObserver:(id)a0;
- (void)addExperimentObserver:(id)a0 queue:(id)a1;
- (id)_debug_customQuerySubstringForType:(long long)a0 dispatcherRequestType:(int)a1;
- (void)_debug_forEachExperimentType:(id /* block */)a0;
- (id)_debug_configurationDate;
- (void)dealloc;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)a0;
- (id)_debug_bucketId;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)a0;
- (id)experimentAssignments;
- (id)init;
- (void)updateURLComponents:(id)a0 forRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1;
- (id)experimentURLForURL:(id)a0 requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)a0;
- (id)clientConfigurationValueForKey:(id)a0;
- (void)serverProxy:(id)a0 didChangeExperimentsInfo:(id)a1;
- (void)_debug_setCustomQuerySubstring:(id)a0 forExperimentType:(long long)a1 dispatcherRequestType:(int)a2;
- (void).cxx_destruct;
- (id)_debug_datasetId;
- (id)detailedDescriptionDictionaryRepresentation;

@end
