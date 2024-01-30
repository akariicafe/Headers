@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPTopicReadOnlyClient : NSObject <PPTopicClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (id)topicCacheSandboxExtensionToken:(id *)a0;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)registerUniversalSearchSpotlightFeedback:(id)a0 completion:(id /* block */)a1;
- (id)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 error:(id *)a2;
- (id)cachePath:(id *)a0;
- (void)_unblockPendingQueries;
- (void).cxx_destruct;
- (id)init;
- (void)topicBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)topicRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)topicExtractionsFromTextBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)scoredMappedTopicBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)rankedTopicsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)topicRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)topicExtractionsFromText:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 handleBatch:(id /* block */)a3;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
