@class NSString, NSNumber;

@interface HFAnalyticsHiddenBannerEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *hiddenBannerItemClassName;
@property (retain, nonatomic) NSString *tappedBannerItemClassName;
@property (retain, nonatomic) NSNumber *hiddenBannerCount;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
