@class NSData, BRCItemGlobalID, NSMutableDictionary, BRCAccountSession, BRCMetricEndpoint, NSObject, BRCSyncHealthReport, NSNumber;
@protocol OS_dispatch_queue;

@interface BRCAnalyticsReporter : NSObject {
    BRCAccountSession *_session;
    long long _telemetryEventCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_waitOnIdleQueue;
    BRCMetricEndpoint *_metricEndpoint;
    NSMutableDictionary *_eventsByKind;
    BRCSyncHealthReport *_syncHealthReport;
    BRCItemGlobalID *_currentTelemetryItemGlobalID;
    NSNumber *_currentTelemetryToken;
    NSData *_lastSentTelemetryEvents;
    char _syncTelemetryState;
}

- (id)initWithSession:(id)a0;
- (void)dumpToContext:(id)a0;
- (void).cxx_destruct;
- (void)submitEventMetric:(id)a0;
- (id)syncTelemetryEventsToSend;
- (void)updateCurrentTelemetryToken:(id)a0;
- (void)submitSyncTelemetryEvent:(id)a0;
- (void)_gatherAppTelemetryEventsWithActivity:(id)a0;
- (void)_handleApplySchedulerTimeoutWithActivity:(id)a0;
- (void)_reportSyncUpBackoffInfo;
- (void)_waitForApplySchedulerToBeIdleWithCompletion:(id /* block */)a0;
- (void)_forgetEventMetrics:(id)a0;
- (void)_cleanupTimedOutEventMetrics:(id)a0;
- (void)_withEventMetricsOfKind:(id)a0 accessor:(id /* block */)a1;
- (void)dropAllSyncTelemetryEvents;
- (id)dequeueSyncTelemetryEvents;
- (void)_fetchTelemetryEventCountOrAdd:(long long)a0;
- (void)forgetEventMetric:(id)a0;
- (void)createFSEventToSyncUpEventForFileID:(unsigned long long)a0 genID:(unsigned int)a1;
- (void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)a0 genID:(unsigned int)a1 accessor:(id /* block */)a2;
- (void)lookupFSEventToSyncUpEventByItemID:(id)a0 accessor:(id /* block */)a1;
- (void)createUserDownloadEventForOperationID:(id)a0 isRecursive:(BOOL)a1 isForBackup:(BOOL)a2;
- (void)lookupUserDownloadEventByOperationID:(id)a0 accessor:(id /* block */)a1;
- (void)lookupUserDownloadEventByDocID:(id)a0 accessor:(id /* block */)a1;
- (id)currentTelemetryToken;
- (void)deleteMissingErrorThrottles;
- (void)didApplyItemInsideSharedItemID:(id)a0;

@end
