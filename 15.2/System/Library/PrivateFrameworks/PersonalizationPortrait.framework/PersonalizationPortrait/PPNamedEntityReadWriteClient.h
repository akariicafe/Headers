@class PPXPCClientHelper;

@interface PPNamedEntityReadWriteClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)donateLocationNamedEntities:(id)a0 bundleId:(id)a1 groupId:(id)a2 error:(id *)a3;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)removeMapItemForPlaceName:(id)a0 error:(id *)a1;
- (BOOL)flushDonationsWithError:(id *)a0;
- (BOOL)donateMapItem:(id)a0 forPlaceName:(id)a1 error:(id *)a2;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 error:(id *)a5;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (BOOL)cloudSyncWithError:(id *)a0;
- (BOOL)_doSyncCallWithError:(id *)a0 syncCall:(id /* block */)a1;
- (BOOL)_doDeletionSyncCallWithError:(id *)a0 deletedCount:(unsigned long long *)a1 syncCall:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)removeMapItemsBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
