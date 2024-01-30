@class NSString;

@interface HFAnalyticsDiscoverTabContentViewedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *locale;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
