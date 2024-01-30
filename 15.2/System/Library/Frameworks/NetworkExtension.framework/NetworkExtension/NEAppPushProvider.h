@class NSDictionary;

@interface NEAppPushProvider : NEProvider

@property (readonly) NSDictionary *providerConfiguration;

- (void)handleTimerEvent;
- (void)stopWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)reportIncomingCallWithUserInfo:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)setProviderConfiguration:(id)a0;

@end
