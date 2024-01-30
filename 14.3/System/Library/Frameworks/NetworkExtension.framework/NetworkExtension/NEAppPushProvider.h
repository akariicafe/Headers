@class NSDictionary;

@interface NEAppPushProvider : NEProvider

@property (readonly) NSDictionary *providerConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)reportIncomingCallWithUserInfo:(id)a0;
- (void)handleTimerEvent;
- (void)setProviderConfiguration:(id)a0;
- (void)stopWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
