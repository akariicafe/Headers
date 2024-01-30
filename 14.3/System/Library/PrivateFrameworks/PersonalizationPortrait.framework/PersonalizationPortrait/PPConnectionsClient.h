@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPConnectionsClient : NSObject <PPConnectionsClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)recentLocationDonationsSinceDate:(id)a0 client:(id)a1 error:(id *)a2 handleBatch:(id /* block */)a3;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)recentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 client:(id)a4 error:(id *)a5 handleBatch:(id /* block */)a6;
- (void)_unblockPendingQueries;
- (void)recentLocationsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_remoteObjectProxy;

@end
