@interface NDOManager : NSObject

- (id)pairedDevices;
- (id)defaultDevice;
- (id)agentConnection;
- (void)scheduleOutreachWithReply:(id /* block */)a0;
- (void)getDefaultDeviceInfoUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)getDeviceInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)getAllDeviceInfosUsingPolicy:(unsigned long long)a0 updateFollowUps:(BOOL)a1 withReply:(id /* block */)a2;
- (void)dismissFollowUpForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)getWarrantyUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (BOOL)checkIsAvailableInStore:(id)a0;
- (void)appSupportDictionaryWithReply:(id /* block */)a0;
- (void)webURLOverride:(id /* block */)a0;
- (id)getDefaultDeviceInfoUsingForceCachedPolicy;
- (id)getDeviceInfoUsingForceCachedPolicyForSerialNumber:(id)a0;

@end
