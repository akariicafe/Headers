@class PETEventTracker2, SGSqlEntityStore, SGServiceContext, NSObject;
@protocol SGXPCActivityManagerProtocol, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface SGDManagerForCTS : NSObject {
    SGSqlEntityStore *_harvestStore;
    SGServiceContext *_context;
    NSObject<OS_dispatch_queue> *_harvestQueue;
    NSObject<OS_dispatch_queue> *_frontfillQueue;
    NSObject<OS_dispatch_source> *_frontfillSource;
    NSObject<OS_dispatch_semaphore> *_frontfillSemaphoreForTesting;
    struct SGDSuggestManagerCTSCriteriaState { BOOL hasItemsHighPriority; BOOL hasItemsLowPriority; } _ctsCriteriaState;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _geocodeLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _verificationLock;
    double _lastFrontfillFinishTime;
    PETEventTracker2 *_pet2tracker;
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
    NSObject<OS_dispatch_source> *_adjustActivitySource;
}

+ (id)sharedSingletonInstance;
+ (id)defaultInstance;
+ (void)_logCallInteractions:(id)a0;

- (void)resumeFrontfillForTesting;
- (void)_registerForCustomResponseHarvest;
- (void)drainDefaultQueueWithStructuredEventsCandidatesPriorityOption;
- (void)_performProcessPendingVerificationActivity:(id)a0 overrideVerificationStatus:(id)a1;
- (void).cxx_destruct;
- (void)_doAdjustCriteriaForCTS;
- (void)dealloc;
- (BOOL)processSearchableItem:(id)a0 pipeline:(id)a1 context:(id)a2 harvestMetrics:(id)a3;
- (void)_registerForCTSHarvestActivity;
- (void)suspendFrontfillForTesting;
- (void)triggerFrontfillHarvest;
- (void)_performCustomResponseHarvest:(id)a0;
- (BOOL)hasAlreadyHarvestedSearchableItem:(id)a0;
- (void)_performCollectWeeklyStats:(id)a0;
- (void)drainDefaultQueueCompletely;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCollectWeeklyStats;
- (void)_registerForCTSVacuumActivity;
- (void)_performProcessPendingGeocodesActivity:(id)a0;
- (BOOL)processSearchableItem:(id)a0 pipeline:(id)a1 context:(id)a2;
- (void)_registerProcessPendingGeocodesActivity;
- (void)adjustCriteriaForCTS;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_performTrimActivity:(id)a0;
- (void)waitUntilFrontfillFinishedForTesting;
- (BOOL)processSearchableItemForTesting:(id)a0;
- (void)_performSendRTCActivity;
- (void)_registerForCTSTrimActivity;
- (void)resetLastFrontfillFinishTimeForTesting;
- (void)_doFrontfillHarvestOnFrontfillQueue;
- (BOOL)_attemptToProcessSearchableItemWithoutDissection:(id)a0;
- (void)_registerForCTSSendRTCActivity;
- (BOOL)drainHarvestQueue:(id)a0 priorityOption:(unsigned char)a1 continuingWhile:(id /* block */)a2;
- (void)_performHarvestActivity:(id)a0 callback:(id /* block */)a1;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_performVacuumActivity;
- (void)registerForCTS;
- (void)performContactDetailCacheRebuildActivity:(id)a0;
- (void)_performIdentityAnalysisActivity:(id)a0;
- (void)_registerProcessPendingVerificationActivity;
- (void)waitForXpcActivityQueue;
- (id)initWithHarvestStore:(id)a0 xpcActivityManager:(id)a1;
- (void)_performMobileAssetMetadataDownloadActivity:(id)a0;

@end
