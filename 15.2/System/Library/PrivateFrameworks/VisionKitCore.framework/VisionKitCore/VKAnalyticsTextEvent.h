@interface VKAnalyticsTextEvent : VKAnalyticsEvent

@property (nonatomic) long long source;
@property (nonatomic) long long textEventType;
@property (nonatomic) unsigned long long selectionLength;
@property (nonatomic) unsigned long long selectionWordCount;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) SEL macOSKBNavigationSelector;
@property (readonly, nonatomic) long long eventType;

- (id)description;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithSelectionLength:(unsigned long long)a0 totalLength:(unsigned long long)a1 selectionWordCount:(unsigned long long)a2 macOSSelector:(SEL)a3 eventType:(long long)a4 source:(long long)a5 customIdentifier:(id)a6;

@end
