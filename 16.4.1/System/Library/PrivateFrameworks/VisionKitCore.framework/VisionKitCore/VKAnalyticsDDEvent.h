@interface VKAnalyticsDDEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) unsigned long long dataDetectorTypes;

- (long long)type;
- (id)coreAnalyticsDictionary;
- (id)eventKey;
- (id)description;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
