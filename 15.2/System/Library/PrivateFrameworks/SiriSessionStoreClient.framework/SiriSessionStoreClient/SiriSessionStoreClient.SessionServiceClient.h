@interface SiriSessionStoreClient.SessionServiceClient : NSObject

- (id)getValuesForKeys:(id)a0 assistantId:(id)a1 deviceId:(id)a2 userId:(id)a3;
- (id)getValueForKey:(id)a0 assistantId:(id)a1 deviceId:(id)a2 userId:(id)a3;
- (id)init;
- (id)initForClient:(id)a0;

@end
