@interface AAIDSProxyNotifier : NSObject

- (void)notifyIDSProxyOfAccount:(id)a0 store:(id)a1 withCommand:(id)a2;
- (void)_notifyIDSProxyOfAccount:(id)a0 store:(id)a1 withCommand:(id)a2;
- (BOOL)_shouldSendAccountChangeOverIDSProxy:(id)a0;
- (void)_showRedirectToBridgeAlertForAccount:(id)a0;
- (id)_saveOptionsForProxiedDeviceAuth;

@end
