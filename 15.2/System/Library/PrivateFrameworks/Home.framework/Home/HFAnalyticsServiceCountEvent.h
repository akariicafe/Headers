@class NSDictionary;

@interface HFAnalyticsServiceCountEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSDictionary *payloadDictionary;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
