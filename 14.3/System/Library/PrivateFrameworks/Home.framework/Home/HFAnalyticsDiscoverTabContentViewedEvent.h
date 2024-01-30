@class NSString;

@interface HFAnalyticsDiscoverTabContentViewedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *locale;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
