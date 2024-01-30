@interface ActivityKit.ActivityAuthorizationClient : NSObject <ACActivityAuthorizationXPCClient> {
    void /* unknown type, empty encoding */ _activityAuthorizationPublisher;
    void /* unknown type, empty encoding */ _frequentUpdatesPublisher;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ queue;
}

- (void)activityAuthorizationDidChangeWithOptions:(id)a0;
- (void)frequentUpdatesAuthorizationDidChangeWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
