@interface TPSAnalyticsEventHLPSearchUsed : TPSAnalyticsEvent

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;

@end
