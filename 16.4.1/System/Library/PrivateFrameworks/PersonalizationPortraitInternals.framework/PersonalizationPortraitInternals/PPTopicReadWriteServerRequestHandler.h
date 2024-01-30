@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>

- (void)computeAndCacheTopicScores:(id /* block */)a0;
- (void)clearWithCompletion:(id /* block */)a0;
- (void)cloudSyncWithCompletion:(id /* block */)a0;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 completion:(id /* block */)a2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 completion:(id /* block */)a3;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 completion:(id /* block */)a2;
- (void)deleteAllTopicsWithTopicId:(id)a0 completion:(id /* block */)a1;
- (void)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 exactMatchesInSourceText:(id)a5 completion:(id /* block */)a6;

@end
