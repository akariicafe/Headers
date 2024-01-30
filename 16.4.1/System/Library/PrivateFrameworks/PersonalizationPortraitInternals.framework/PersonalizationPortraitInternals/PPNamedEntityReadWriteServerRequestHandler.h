@interface PPNamedEntityReadWriteServerRequestHandler : NSObject <PPNamedEntityReadWriteServerProtocol>

- (void)clearWithCompletion:(id /* block */)a0;
- (void)cloudSyncWithCompletion:(id /* block */)a0;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 completion:(id /* block */)a2;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 completion:(id /* block */)a3;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 completion:(id /* block */)a2;
- (void)donateLocationNamedEntities:(id)a0 bundleId:(id)a1 groupId:(id)a2 completion:(id /* block */)a3;
- (void)donateMapItem:(id)a0 forPlaceName:(id)a1 completion:(id /* block */)a2;
- (void)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 completion:(id /* block */)a5;
- (void)flushDonationsWithCompletion:(id /* block */)a0;
- (void)removeMapItemForPlaceName:(id)a0 completion:(id /* block */)a1;
- (void)removeMapItemsBeforeCutoffDate:(id)a0 completion:(id /* block */)a1;

@end
