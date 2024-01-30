@class NSString;

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {
    NSString *_actionPredBundleId;
}

- (BOOL)addEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNotificationId:(id)a0 timestamp:(id)a1;
- (BOOL)isMatchActionPredBundleId:(id)a0;
- (long long)determineEndingInteraction;

@end
