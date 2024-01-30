@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPTemporalClusterClient : NSObject <PPTemporalClusterClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)_unblockPendingQueries;
- (void).cxx_destruct;
- (id)init;
- (id)_remoteObjectProxy;
- (void)rankedTemporalClusterBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)rankedTemporalClustersForStartDate:(id)a0 endDate:(id)a1 error:(id *)a2 handleBatch:(id /* block */)a3;

@end
