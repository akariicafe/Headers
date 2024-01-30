@class NSString, PPXPCServerPipelinedBatchQueryManager, PPLocalContactStore;
@protocol PPContactClientProtocol;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {
    id<PPContactClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    _Atomic BOOL _isTerminated;
    PPLocalContactStore *_store;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)rankedContactsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (id)initWithStore:(id)a0;
- (void)contactNameRecordsForClient:(id)a0 queryId:(unsigned long long)a1;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setIsTerminated;
- (void)upcomingRelevantContactsForQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)setRemoteObjectProxy:(id)a0;
- (void).cxx_destruct;
- (void)contactNameRecordChangesForClient:(id)a0 queryId:(unsigned long long)a1;
- (id)init;
- (void)unblockPendingQueries;
- (void)contactHandlesForSource:(id)a0 queryId:(unsigned long long)a1;
- (void)contactNameRecordChangesForClient:(id)a0 completion:(id /* block */)a1;
- (void)contactHandlesForTopics:(id)a0 queryId:(unsigned long long)a1;

@end
