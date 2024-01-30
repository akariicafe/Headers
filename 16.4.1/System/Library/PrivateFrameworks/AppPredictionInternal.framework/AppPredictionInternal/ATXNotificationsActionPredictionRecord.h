@class NSString;

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {
    NSString *_actionPredBundleId;
}

- (BOOL)addEvent:(id)a0;
- (long long)determineEndingInteraction;
- (BOOL)isMatchActionPredBundleId:(id)a0;
- (id)init;
- (id)initWithNotificationId:(id)a0 timestamp:(id)a1;
- (void).cxx_destruct;

@end
