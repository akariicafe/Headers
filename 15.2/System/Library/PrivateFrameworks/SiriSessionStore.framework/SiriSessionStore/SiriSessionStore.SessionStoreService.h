@interface SiriSessionStore.SessionStoreService : NSObject <SiriSessionStoreClient.SiriSessionService>

- (id)init;
- (void)getValueForId:(id)a0 forKey:(id)a1 withValue:(id /* block */)a2;
- (void)getLastCommittedValuesForId:(id)a0 withValues:(id /* block */)a1;
- (void)writeValuesForId:(id)a0 values:(id)a1;
- (void)getValuesForId:(id)a0 forKeys:(id)a1 withValues:(id /* block */)a2;
- (void)clearSessionStateForId:(id)a0;

@end
