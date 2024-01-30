@class NSString, NSError, SXADBannerView;

@interface SXAdOpportunityEvent : SXAnalyticsEvent

@property (retain, nonatomic) NSString *opportunityIdentifier;
@property (nonatomic) double positionInArticle;
@property (retain, nonatomic) NSString *componentIdentifier;
@property (nonatomic) int opportunityError;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SXADBannerView *bannerView;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL shown;

- (void).cxx_destruct;
- (id)description;

@end
