@interface TPSBiomeEventsProvider : TPSEventsProvider

+ (unsigned long long)_limitForContextualBiomeEvent:(id)a0;
+ (id)_eventSinceDateForContextualEvent:(id)a0;

- (void)queryEvents:(id)a0;
- (void)registerEventsForCallback:(id)a0;
- (void)registerEventsForWakingCallback:(id)a0 clientIdentifier:(id)a1;
- (void)deregisterEventsForCallback:(id)a0;
- (void)_processProviderResults:(id)a0 bookmark:(id)a1 forEvent:(id)a2;

@end
