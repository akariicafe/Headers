@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPEventClientProtocol;

@interface PPEventServerRequestHandler : NSObject <PPEventServerProtocol> {
    id<PPEventClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)eventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2 queryId:(unsigned long long)a3;
- (void)setRemoteObjectProxy:(id)a0;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unblockPendingQueries;
- (void)sendRTCLogsWithWithCompletion:(id /* block */)a0;
- (void)scoredEventsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)eventNameRecordsForClient:(id)a0 queryId:(unsigned long long)a1;
- (void)resolveEventNameRecordChanges:(id)a0 client:(id)a1 queryId:(unsigned long long)a2;

@end
