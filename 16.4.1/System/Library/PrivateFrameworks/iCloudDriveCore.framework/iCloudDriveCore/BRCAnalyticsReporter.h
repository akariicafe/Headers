@class NSData, BRCItemGlobalID, NSSet, NSMutableDictionary, BRCMetricEndpoint, BRCSyncHealthReport, NSObject, NSNumber, BRCAccountSessionFPFS;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCAnalyticsReporter : NSObject {
    BRCAccountSessionFPFS *_session;
    long long _telemetryEventCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_waitOnIdleQueue;
    BRCMetricEndpoint *_metricEndpoint;
    NSMutableDictionary *_eventsByKind;
    BRCSyncHealthReport *_syncHealthReport;
    BRCItemGlobalID *_currentTelemetryItemGlobalID;
    NSNumber *_currentTelemetryToken;
    NSData *_lastSentTelemetryEvents;
    NSSet *_lastTelemetryBatchRowIDs;
    char _syncTelemetryState;
    NSObject<OS_dispatch_source> *_syncConsistencyDeferralTimer;
    NSObject<OS_dispatch_source> *_syncConsistencyCancellationTimer;
    BOOL _forceTelemetryDequeueQueued;
}

+ (void)cancelSyncConsistencyReportWithMountPath:(id)a0 queue:(id)a1;
+ (BOOL)isTelemetryReportingEnabled;

- (void)submitEventMetric:(id)a0;
- (void)dumpToContext:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_fetchTelemetryEventCountOrAdd:(long long)a0;
- (void)didApplyItemInsideSharedItemID:(id)a0;
- (void)registerBackgroundXPCActivities;
- (BOOL)_shouldDeferForExistingSnapshot;
- (void)_checkSyncConsistencyWithActivity:(id)a0;
- (void)_cleanupTimedOutEventMetrics:(id)a0;
- (void)_forgetEventMetrics:(id)a0;
- (void)_gatherAppTelemetryEventsWithActivity:(id)a0;
- (int)_getPriorityOfEvent:(id)a0;
- (void)_handleApplySchedulerTimeoutWithActivity:(id)a0 telemetryEventType:(int)a1;
- (id)_prepareSyncTelemetryEventsToSend;
- (void)_reportSyncUpBackoffInfo;
- (BOOL)_resumePausedTreeConsistencyCheckOperationWithActivity:(id)a0;
- (void)_setupSyncConsistencyCancellationTimerWithActivity:(id)a0 session:(id)a1;
- (void)_setupSyncConsistencyDeferralTimerWithActivity:(id)a0;
- (void)_waitForApplySchedulerToBeIdleWithCompletion:(id /* block */)a0;
- (void)_withEventMetricsOfKind:(id)a0 accessor:(id /* block */)a1;
- (void)createFSEventToSyncUpEventForFileID:(unsigned long long)a0 genID:(unsigned int)a1;
- (id)createSQLConditionForRowIDs:(id)a0;
- (void)createUserDownloadEventForOperationID:(id)a0 isRecursive:(BOOL)a1 isForBackup:(BOOL)a2;
- (id)currentTelemetryToken;
- (void)deleteMissingErrorThrottles;
- (void)dropAllSyncTelemetryEvents;
- (void)forceTelemetryDequeue;
- (void)forceTelemetryDequeueWithCompletionHandler:(id /* block */)a0;
- (void)forgetEventMetric:(id)a0;
- (void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)a0 genID:(unsigned int)a1 accessor:(id /* block */)a2;
- (void)lookupFSEventToSyncUpEventByItemID:(id)a0 accessor:(id /* block */)a1;
- (void)lookupUserDownloadEventByFileObjectID:(id)a0 accessor:(id /* block */)a1;
- (void)lookupUserDownloadEventByOperationID:(id)a0 accessor:(id /* block */)a1;
- (void)submitSyncTelemetryEvent:(id)a0;
- (id)syncTelemetryEventsToSend;
- (void)updateCurrentTelemetryToken:(id)a0;

@end
