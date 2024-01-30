@class NSNumber;

@interface HFAnalyticsDiscoverTabTapEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *tapCount;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
