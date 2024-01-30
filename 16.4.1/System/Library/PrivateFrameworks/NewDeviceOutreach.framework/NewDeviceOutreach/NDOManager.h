@interface NDOManager : NSObject

+ (void)postCAEventFor:(id)a0 eventDict:(id)a1;

- (id)defaultDevice;
- (id)agentConnection;
- (id)pairedBTDevices;
- (void)webURLOverride:(id /* block */)a0;
- (void)appSupportDictionaryWithReply:(id /* block */)a0;
- (void)dismissFollowUpForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (id)getDecodedParamsForPath:(id)a0;
- (id)getDefaultDeviceInfoUsingForceCachedPolicy;
- (void)getDefaultDeviceInfoUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)getDeviceInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 params:(id)a2 withReply:(id /* block */)a3;
- (void)getDeviceInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 withReply:(id /* block */)a2;
- (id)getDeviceInfoUsingForceCachedPolicyForSerialNumber:(id)a0;
- (id)pairedWatches;
- (void)ulWebURLOverride:(id /* block */)a0;
- (void)appleAccountAddedWithReply:(id /* block */)a0;
- (BOOL)checkIsAvailableInStore:(id)a0;
- (void)dismissNotificationForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)getAllFUPEligibleDeviceInfosUsingPolicy:(unsigned long long)a0 updateFollowUps:(BOOL)a1 withReply:(id /* block */)a2;
- (void)getWarrantyUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)scheduleOutreachAfter:(double)a0 withReply:(id /* block */)a1;

@end
