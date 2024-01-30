@interface iCloudSubscriptionOptimizerClient.MetricsQuotaClient : ISOQuotaClient {
    void /* unknown type, empty encoding */ innerClient;
    void /* unknown type, empty encoding */ clientLibEvents;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearNotificationState:(id /* block */)a0;
- (void)newOffer:(id)a0 andCallback:(id /* block */)a1;
- (id)parseDelayedOfferFromJson:(id)a0;
- (id)parseNotification:(id)a0;
- (id)failsafeDelayedOfferJsonContext;
- (void)isNotificationPending:(id /* block */)a0;
- (void)logFailsafeEvent:(id)a0;
- (id)parseDelayedOffer:(id)a0;

@end
