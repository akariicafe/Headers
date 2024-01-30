@class NSString, NSNumber;

@interface HFAnalyticsBannerInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSNumber *hiddenBannerCount;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
