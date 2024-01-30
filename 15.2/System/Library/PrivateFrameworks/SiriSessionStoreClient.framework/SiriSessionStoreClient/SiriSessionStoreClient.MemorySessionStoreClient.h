@interface SiriSessionStoreClient.MemorySessionStoreClient : NSObject <SiriSessionStoreClient.SessionStoreClient>

- (id)getValuesForKeys:(id)a0 assistantId:(id)a1 deviceId:(id)a2 userId:(id)a3;
- (id)getValueForKey:(id)a0 assistantId:(id)a1 deviceId:(id)a2 userId:(id)a3;
- (void)loadSessionStoreWithAssistantId:(id)a0 deviceId:(id)a1 userId:(id)a2;
- (id)init;
- (id)initForClient:(id)a0;

@end
