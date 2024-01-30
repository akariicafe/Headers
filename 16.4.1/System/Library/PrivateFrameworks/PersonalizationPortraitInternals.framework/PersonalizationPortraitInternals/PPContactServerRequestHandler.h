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
- (id)initWithStore:(id)a0;
- (void)rankedContactsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)upcomingRelevantContactsForQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)setRemoteObjectProxy:(id)a0;
- (void)contactHandlesForTopics:(id)a0 queryId:(unsigned long long)a1;
- (void)contactNameRecordChangesForClient:(id)a0 queryId:(unsigned long long)a1;
- (void)setIsTerminated;
- (void)contactNameRecordsForClient:(id)a0 queryId:(unsigned long long)a1;
- (void)unblockPendingQueries;
- (id)init;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)contactHandlesForSource:(id)a0 queryId:(unsigned long long)a1;
- (void)contactNameRecordChangesForClient:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
