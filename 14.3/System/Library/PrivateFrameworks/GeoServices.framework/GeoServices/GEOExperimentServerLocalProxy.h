@class NSString, GEOABAssignmentRequest, GEOABAssignmentResponse, GEOXPCActivity;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOPListStateCapturing, GEOExperimentServerProxy> {
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _experimentsInfoLock;
    GEOABAssignmentRequest *_currentRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentRequestLock;
    GEOXPCActivity *_activity;
    unsigned long long _stateCaptureHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOExperimentServerProxyDelegate> delegate;
@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;

+ (void)cancelOldActivities;

- (void)abAssignUUIDWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)dealloc;
- (void)_deleteExperimentInfoFromDisk;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)a0;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)a0;
- (void)_updateIfNecessary;
- (BOOL)_removeOldExperimentsInfoIfNecessary:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)forceUpdate;
- (void)refreshDatasetABStatus:(id)a0;
- (void)_executeRefreshWithinTime:(double)a0;
- (void)_notifyExperimentsInfoChanged:(id)a0 current:(id)a1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)a0;
- (void)_debug_setQuerySubstring:(id)a0 forExperimentType:(long long)a1 dispatcherRequestType:(int)a2;
- (void)_writeExperimentInfoToDisk:(id)a0;
- (void)_loadExperimentsConfiguration:(id /* block */)a0;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)a0;
- (void)_setupRefreshActivity;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;

@end
