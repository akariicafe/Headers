@class TPSDuetDataProvider;

@interface TPSDuetEventsProvider : TPSEventsProvider {
    TPSDuetDataProvider *_duetDataProvider;
}

+ (unsigned long long)_limitForDeliveryDuetEvent:(id)a0;
+ (id)_predicateForDeliveryDuetEvent:(id)a0 stateResults:(id)a1;
+ (id)_duetRegistrationIDForEventID:(id)a0;
+ (id)_eventSinceDateForContextualEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_deregisterToGetNotifiedWithEvents:(id)a0;
- (void)_queryDuetWithEvents:(id)a0;
- (void)registerEventsForWakingCallback:(id)a0 clientIdentifier:(id)a1;
- (void)_queryDuetWithEvent:(id)a0 limit:(unsigned long long)a1 stateResults:(id)a2 completion:(id /* block */)a3;
- (void)deregisterEventsForCallback:(id)a0;
- (void)queryEvents:(id)a0;
- (id)initWithDuetDataProvider:(id)a0;
- (void)registerEventsForCallback:(id)a0;
- (void)_registerToGetNotifiedWithEvents:(id)a0 clientIdentifier:(id)a1;

@end
