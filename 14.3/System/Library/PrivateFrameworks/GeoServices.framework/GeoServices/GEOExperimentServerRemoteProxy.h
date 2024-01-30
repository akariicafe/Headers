@class NSString, GEOABAssignmentResponse;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy> {
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _experimentsInfoLock;
    int _experimentsChangedToken;
}

@property (weak, nonatomic) id<GEOExperimentServerProxyDelegate> delegate;
@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)abAssignUUIDWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)a0;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)forceUpdate;
- (void)refreshDatasetABStatus:(id)a0;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)a0;
- (void)_debug_setQuerySubstring:(id)a0 forExperimentType:(long long)a1 dispatcherRequestType:(int)a2;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)a0;

@end
