@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)eventName;
- (id)appLaunches;
- (id)tipViewTotal;
- (id)desiredOutcomeTotal;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)mutableAnalyticsEventRepresentation;

@end
