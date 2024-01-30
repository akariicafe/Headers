@class ATXNotificationsAggregateLogger, NSXPCConnection;

@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol> {
    NSXPCConnection *_xpcConnection;
    ATXNotificationsAggregateLogger *_logger;
}

+ (id)sharedInstance;

- (void)getAppUsageDataFromStartDate:(id)a0 reply:(id /* block */)a1;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0 withBundleId:(id)a1;
- (void)logSuggestionShown:(id)a0 forType:(long long)a1 timestamp:(id)a2;
- (id)init;
- (void)makeSuggestionForNextNotification;
- (void)submitGrading:(id)a0 rating:(id)a1 category:(id)a2 userId:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)quietingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)promotingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2 withReply:(id /* block */)a3;
- (void)logNotification:(id)a0 withNotificationId:(id)a1 timestamp:(id)a2;
- (void)logTapCoalesceForNotificationId:(id)a0 andBundleId:(id)a1 timestamp:(id)a2;
- (void)shouldMakeQuietingSuggestionForBundleId:(id)a0 withReply:(id /* block */)a1;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 supplementaryAction:(id)a2 timestamp:(id)a3;
- (void)logSuggestionDeduped:(id)a0 timestamp:(id)a1;
- (void)makeQuietingSuggestionForNextNotification;
- (void)makePromotingSuggestionForNextNotification;
- (void)shouldMakePromotingSuggestionForBundleId:(id)a0 withReply:(id /* block */)a1;
- (void)logEvent:(long long)a0 forNotificationId:(id)a1 timestamp:(id)a2;
- (void)logRealTimeTuningCountFrom:(unsigned long long)a0;

@end
