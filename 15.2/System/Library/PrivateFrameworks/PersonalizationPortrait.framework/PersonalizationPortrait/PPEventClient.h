@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPEventClient : NSObject <PPEventClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)eventNameRecordsForClient:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)eventNameRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)sendRTCLogsWithError:(id *)a0;
- (BOOL)resolveEventNameRecordChanges:(id)a0 client:(id)a1 error:(id *)a2 handleBatch:(id /* block */)a3;
- (BOOL)scoredEventsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)interactionSummaryMetricsWithError:(id *)a0 handleBatch:(id /* block */)a1;
- (void)_unblockPendingQueries;
- (void)interactionSummaryMetricsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void).cxx_destruct;
- (BOOL)eventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2 error:(id *)a3 handleBatch:(id /* block */)a4;
- (id)init;
- (void)eventHighlightsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)eventNameRecordChangesBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)scoredEventsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_remoteObjectProxy;

@end
