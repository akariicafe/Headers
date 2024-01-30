@class NSString;

@interface VKAnalyticsMRCEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSString *barcodeSymbology;
@property (nonatomic) long long _dataType;
@property (readonly, nonatomic) long long dataType;

- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
