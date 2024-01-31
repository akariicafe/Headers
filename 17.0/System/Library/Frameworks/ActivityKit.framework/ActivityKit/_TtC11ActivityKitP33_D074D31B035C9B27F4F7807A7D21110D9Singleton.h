@interface _TtC11ActivityKitP33_D074D31B035C9B27F4F7807A7D21110D9Singleton : NSObject <ACActivityFrequentUpdatesObservationXPCClient> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ activities;
    void /* unknown type, empty encoding */ activityDiffPublisher;
}

- (id)init;
- (void).cxx_destruct;
- (void)activityDidExceedReducedPushBudgetForIdentifier:(id)a0;
- (void)activityDidUnsubscribeForIdentifier:(id)a0;

@end
