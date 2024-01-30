@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPContactClient : NSObject <PPContactClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)contactNameRecordChangesForClient:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)contactHandlesForSource:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)rankedContactsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)contactHandlesForTopics:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)contactHandlesForTopicsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)contactNameRecordChangesBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_unblockPendingQueries;
- (void)rankedContactsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)contactNameRecordChangesForClient:(id)a0 completion:(id /* block */)a1;
- (void)contactHandlesForSourceBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)contactNameRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_remoteObjectProxy;
- (BOOL)contactNameRecordsForClient:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;

@end
