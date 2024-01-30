@class NSString;

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {
    NSString *_actionPredBundleId;
}

- (BOOL)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNotificationId:(id)a0 timestamp:(id)a1;
- (BOOL)isMatchActionPredBundleId:(id)a0;
- (long long)determineEndingInteraction;

@end
