@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPEventClientProtocol;

@interface PPEventServerRequestHandler : NSObject <PPEventServerProtocol> {
    id<PPEventClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)scoredEventsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)setRemoteObjectProxy:(id)a0;
- (void)eventNameRecordsForClient:(id)a0 queryId:(unsigned long long)a1;
- (void)sendRTCLogsWithWithCompletion:(id /* block */)a0;
- (void)unblockPendingQueries;
- (id)init;
- (void)resolveEventNameRecordChanges:(id)a0 client:(id)a1 queryId:(unsigned long long)a2;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)eventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2 queryId:(unsigned long long)a3;

@end
