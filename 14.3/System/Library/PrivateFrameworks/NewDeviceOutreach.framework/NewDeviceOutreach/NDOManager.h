@interface NDOManager : NSObject

- (id)serialNumber;
- (id)agentConnection;
- (BOOL)isHighServerVersionFeaturesetEnabled;
- (void)scheduleOutreachWithReply:(id /* block */)a0;
- (void)getWarrantyUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)serialNumberOverride:(id /* block */)a0;
- (BOOL)checkIsAvailableInStore:(id)a0;
- (void)appSupportDictionaryWithCompletion:(id /* block */)a0;
- (void)isHighServerVersionFeaturesetEnabledWithStatusHandler:(id /* block */)a0;
- (void)webURLOverride:(id /* block */)a0;

@end
