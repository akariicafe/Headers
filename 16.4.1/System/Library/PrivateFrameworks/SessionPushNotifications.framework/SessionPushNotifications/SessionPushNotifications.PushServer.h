@interface SessionPushNotifications.PushServer : NSObject {
    void /* unknown type, empty encoding */ _eventPublisher;
    void /* unknown type, empty encoding */ _tokenPublisher;
    void /* unknown type, empty encoding */ _subscriptionExceedingReducedBudgetPublisher;
    void /* unknown type, empty encoding */ _unsubscribedActivityPublisher;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ apsQueue;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ connectionFactory;
    void /* unknown type, empty encoding */ subscriptionStore;
    void /* unknown type, empty encoding */ publicTokenStore;
    void /* unknown type, empty encoding */ tokenStore;
    void /* unknown type, empty encoding */ budgetEnforcementPolicyProvider;
    void /* unknown type, empty encoding */ budgetEnforcementPolicyProviderSubscription;
    void /* unknown type, empty encoding */ taskScheduler;
    void /* unknown type, empty encoding */ nextBudgetTimeoutExpirationWake;
    void /* unknown type, empty encoding */ topicsByPriority;
}

- (id)init;
- (void).cxx_destruct;

@end
