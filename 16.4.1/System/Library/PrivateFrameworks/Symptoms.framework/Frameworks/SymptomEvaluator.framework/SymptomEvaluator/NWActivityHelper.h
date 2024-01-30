@class AnalyticsWorkspace, NSObject;
@protocol OS_dispatch_queue;

@interface NWActivityHelper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AnalyticsWorkspace *_workspace;
}

- (id)init;
- (id)analyticsWorkspace;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)_createDictionarySupermetricForActivity:(id)a0 withContext:(id)a1;
- (id)_createSupermetricFromFragments:(id)a0 forMetricUUID:(id)a1;
- (void)_deleteAllFragmentsMatchingPredicate:(id)a0;
- (void)_deleteAllMetrics;
- (void)_deleteNWActivityFragment:(id)a0 fromContext:(id)a1;
- (void)_deleteOldMetrics;
- (id)_fetchActivitiesWithPredicate:(id)a0 batch:(BOOL)a1;
- (id)_fetchChildrenForUUID:(id)a0 fromContext:(id)a1 withError:(id *)a2;
- (id)_fetchFragmentsForUUID:(id)a0 fromContext:(id)a1 withError:(id *)a2;
- (void)_fetchMetricsForActivity:(id)a0 maxChildDepth:(unsigned char)a1 destinationArray:(id)a2;
- (id)_fetchMetricsForUUID:(id)a0;
- (id)_findNWActivityMetricsForUploading;
- (void)_garbageCollectNWActivityMetrics;
- (void)_uploadCompleteNWActivityMetrics;
- (void)cleanOutNWActivityMetrics;
- (void)purgeOldNWActivityMetrics;
- (void)retrieveNWActivityMetricsForActivity:(id)a0 completion:(id /* block */)a1;
- (void)sendReportToMetricStream:(id)a0;
- (BOOL)shouldSendMetricStream;
- (void)startNWActivitySuperMetricProcessing;

@end
