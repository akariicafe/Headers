@interface SiriSessionStoreClient.PersistentSessionStoreClient : SiriSessionStoreClient.MemorySessionStoreClient

- (id)init;
- (id)initForClient:(id)a0;
- (void)writeAndCommitValuesForKeysWithValues:(id)a0 assistantId:(id)a1 deviceId:(id)a2 userId:(id)a3;
- (void)writeAndCommitValuesForKeysWithValues:(id)a0 assistantId:(id)a1 deviceId:(id)a2 userId:(id)a3 keysToRemove:(id)a4;

@end
