@class NSDictionary;

@interface NEAppPushProvider : NEProvider

@property (retain) NSDictionary *providerConfiguration;

- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)reportIncomingCallWithUserInfo:(id)a0;
- (void)handleTimerEvent;
- (void)reportPushToTalkMessageWithUserInfo:(id)a0;
- (void)stopWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
