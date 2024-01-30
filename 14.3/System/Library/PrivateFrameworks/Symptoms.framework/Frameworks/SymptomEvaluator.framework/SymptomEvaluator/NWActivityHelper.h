@class AnalyticsWorkspace, NSObject;
@protocol OS_dispatch_queue;

@interface NWActivityHelper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AnalyticsWorkspace *_workspace;
}

- (id)init;
- (id)analyticsWorkspace;
- (void).cxx_destruct;
- (void)_uploadCompleteNWActivityMetrics;
- (void)_garbageCollectNWActivityMetrics;
- (void)_deleteAllMetrics;
- (void)_deleteOldMetrics;
- (void)_deleteAllFragmentsMatchingPredicate:(id)a0;
- (id)_fetchActivitiesWithPredicate:(id)a0 batch:(BOOL)a1;
- (void)_deleteNWActivityFragment:(id)a0 fromContext:(id)a1;
- (id)_findNWActivityMetricsForUploading;
- (void)sendReportToMetricStream:(id)a0;
- (BOOL)shouldSendMetricStream;
- (void)startNWActivitySuperMetricProcessing;
- (void)cleanOutNWActivityMetrics;
- (void)purgeOldNWActivityMetrics;

@end
