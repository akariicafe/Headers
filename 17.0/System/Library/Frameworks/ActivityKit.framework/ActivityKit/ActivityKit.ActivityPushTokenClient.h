@interface ActivityKit.ActivityPushTokenClient : NSObject <ACActivityPushTokenXPCClient> {
    void /* unknown type, empty encoding */ _pushTokenPublisher;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ _queue_pushTokens;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)pushTokensChanged:(id)a0;

@end
