@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

+ (id)event;
+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)notificationsPosted;
- (id)appLaunches;
- (id)tipViewTotal;
- (id)desiredOutcomeTotal;
- (double)timeSinceLastNotification;

@end
