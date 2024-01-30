@class ATXNotificationsAggregateLogger, NSXPCConnection;

@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol> {
    NSXPCConnection *_xpcConnection;
    ATXNotificationsAggregateLogger *_logger;
}

+ (id)sharedInstance;

- (void)logTapCoalesceForNotificationId:(id)a0 andBundleId:(id)a1 timestamp:(id)a2;
- (void)logSuggestionDeduped:(id)a0 timestamp:(id)a1;
- (void)suggestionForNotification:(id)a0 reply:(id /* block */)a1;
- (void)shouldMakeQuietingSuggestionForBundleId:(id)a0 withReply:(id /* block */)a1;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2;
- (void)logSuggestionShown:(id)a0 forType:(long long)a1 timestamp:(id)a2;
- (void)submitGrading:(id)a0 rating:(id)a1 category:(id)a2 userId:(id)a3;
- (void)shouldMakePromotingSuggestionForBundleId:(id)a0 withReply:(id /* block */)a1;
- (void)quietingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2 withReply:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 supplementaryAction:(id)a2 timestamp:(id)a3;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1 timestamp:(id)a2;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0 withBundleId:(id)a1;
- (void)logSuggestionEvent:(long long)a0 suggestionType:(long long)a1 suggestionIdentifier:(id)a2 timestamp:(id)a3;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1 reason:(unsigned long long)a2;
- (void)logSuggestionEvent:(long long *)a0 forSuggestion:(id)a1;
- (void)dealloc;
- (void)logRealTimeTuningCountFrom:(unsigned long long)a0;
- (void)promotingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1;
- (void)logNotificationDeliveryUI:(unsigned long long)a0 notificationUUIDs:(id)a1;
- (void)logNotification:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;

@end
