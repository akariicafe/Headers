@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (BOOL)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)_unblockPendingQueries;
- (void)namedEntityRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)namedEntityBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
