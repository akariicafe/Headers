@class PPXPCClientHelper;

@interface PPTopicReadWriteClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)cloudSyncWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 exactMatchesInSourceText:(id)a5 error:(id *)a6;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)_doSyncCallWithError:(id *)a0 syncCall:(id /* block */)a1;
- (BOOL)_doDeletionSyncCallWithError:(id *)a0 deletedCount:(unsigned long long *)a1 syncCall:(id /* block */)a2;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;

@end
