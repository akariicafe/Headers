@class SGSqlEntityStore, SGServiceContext;
@protocol SGXPCActivityManagerProtocol;

@interface SGDManagerForCTS : NSObject {
    SGSqlEntityStore *_harvestStore;
    SGServiceContext *_context;
    struct SGDSuggestManagerCTSCriteriaState { BOOL hasItemsHighPriority; BOOL hasItemsLowPriority; } _ctsCriteriaState;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _geocodeLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _verificationLock;
    double _lastFrontfillFinishTime;
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
}

+ (id)sharedSingletonInstance;
+ (void)_logCallInteractions:(id)a0;
+ (id)defaultInstance;

- (void)_performVacuumActivity;
- (void)_performIdentityAnalysisActivity:(id)a0;
- (BOOL)hasAlreadyHarvestedSearchableItem:(id)a0;
- (void)_performHarvestedURLMetricUploadAcitivity:(id)a0;
- (id)initWithHarvestStore:(id)a0 xpcActivityManager:(id)a1;
- (void)_performCollectWeeklyStats:(id)a0;
- (void)_registerHarvestedURLMetricUploadActivity;
- (void)_registerForCustomResponseHarvest;
- (void)_registerForCTSVacuumActivity;
- (void)_performTrimActivity:(id)a0;
- (BOOL)processSearchableItemForTesting:(id)a0;
- (void)_performProcessPendingVerificationActivity:(id)a0 overrideVerificationStatus:(id)a1;
- (BOOL)processMailMessage:(id)a0 headers:(id)a1 pipeline:(id)a2 context:(id)a3 harvestMetrics:(id)a4;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_registerProcessPendingVerificationActivity;
- (void)_performSendRTCActivity:(id)a0;
- (BOOL)processSearchableItem:(id)a0 pipeline:(id)a1 context:(id)a2 harvestMetrics:(id)a3;
- (BOOL)_shouldDissectContentWithUniqueIdentifier:(id)a0 domainIdentifier:(id)a1 bundleIdentifier:(id)a2 headers:(id)a3 accountIdentifier:(id)a4;
- (void)_performMailIntelligenceTasksActivity:(id)a0;
- (void)waitForXpcActivityQueue;
- (void)_performCustomResponseHarvest:(id)a0;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_registerForCTSSendRTCActivity;
- (void).cxx_destruct;
- (void)_registerMailIntelligenceTasksActivity;
- (void)_registerForPhoneQREngagementDataSync;
- (void)_performMobileAssetMetadataDownloadActivity:(id)a0;
- (void)_performPhoneQREngagementDataSync:(id)a0;
- (void)_registerForCTSIdentityAnalysisActivity;
- (id)serviceContext;
- (void)dealloc;
- (BOOL)processSearchableItem:(id)a0 pipeline:(id)a1 context:(id)a2;
- (void)_registerProcessPendingGeocodesActivity;
- (BOOL)_processMessage:(id)a0 pipeline:(id)a1 context:(id)a2 harvestMetrics:(id)a3;
- (BOOL)processTextMessage:(id)a0 pipeline:(id)a1 context:(id)a2 harvestMetrics:(id)a3;
- (void)performContactDetailCacheRebuildActivity:(id)a0;
- (void)_registerForCollectWeeklyStats;
- (void)_registerForCTSTrimActivity;
- (void)registerForCTS;
- (void)_performProcessPendingGeocodesActivity:(id)a0;

@end
