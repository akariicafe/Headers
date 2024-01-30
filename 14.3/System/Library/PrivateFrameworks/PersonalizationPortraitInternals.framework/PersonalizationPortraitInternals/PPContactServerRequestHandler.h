@class NSString, PPXPCServerPipelinedBatchQueryManager, PPLocalContactStore;
@protocol PPContactClientProtocol;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {
    id<PPContactClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    _Atomic BOOL _isTerminated;
    PPLocalContactStore *_store;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (id)initWithStore:(id)a0;
- (void)setRemoteObjectProxy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)contactNameRecordsForClient:(id)a0 queryId:(unsigned long long)a1;
- (void)rankedContactsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)unblockPendingQueries;
- (void)setIsTerminated;
- (void)contactNameRecordChangesForClient:(id)a0 completion:(id /* block */)a1;
- (void)contactHandlesForTopics:(id)a0 queryId:(unsigned long long)a1;
- (void)contactHandlesForSource:(id)a0 queryId:(unsigned long long)a1;
- (void)contactNameRecordChangesForClient:(id)a0 queryId:(unsigned long long)a1;

@end
