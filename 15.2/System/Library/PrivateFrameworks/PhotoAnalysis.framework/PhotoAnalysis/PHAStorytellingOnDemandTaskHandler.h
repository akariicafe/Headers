@class NSMutableArray, NSString, PGProgressCallChecker, MARootProgressReporter, PHPhotoLibrary, PGManager, NSObject;
@protocol PHAStorytellingOnDemandTaskHandlerDelegate, OS_os_log, PHAJobTimeHandlerProtocol, OS_dispatch_queue;

@interface PHAStorytellingOnDemandTaskHandler : NSObject <PHAServiceOperationHandling> {
    PGManager *_graphManager;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableArray *_operationsToRun;
    PGProgressCallChecker *_progressCallChecker;
    BOOL _isShutdown;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) MARootProgressReporter *onDemandTaskProgressReporter;
@property (readonly, nonatomic) BOOL isQuiescent;
@property (weak, nonatomic) id<PHAStorytellingOnDemandTaskHandlerDelegate> delegate;
@property (readonly, weak, nonatomic) id<PHAJobTimeHandlerProtocol> jobTimeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringForQoS:(unsigned int)a0;
- (void)handleOperation:(id)a0;
- (void)reportMetricsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestHighlightEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)cacheCPAnalyticsPropertiesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)shutdown;
- (void)generateMemoriesWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)dequeueOperationsIfNeeded;
- (void)requestOnDemandTasksWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)generateSuggestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)nextOperation;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSyndicationProcessingWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)rebuildGraphWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetRevGeocodingWithContext:(id)a0 reply:(id /* block */)a1;
- (id)initWithGraphManager:(id)a0 jobTimeHandler:(id)a1;
- (void)requestGenerateQuestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (BOOL)hasRemainingOperations;
- (void)forceCancellationIfShutdown;

@end
