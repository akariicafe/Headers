@interface VKAnalyticsDDEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) unsigned long long dataDetectorTypes;

- (id)description;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
