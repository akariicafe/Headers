@class NSString;

@interface SXAdAnalyticsEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSString *adCampaign;
@property (readonly, nonatomic) NSString *adLine;
@property (readonly, nonatomic) NSString *adCreative;
@property (readonly, nonatomic) NSString *impressionIdentifier;
@property (readonly, nonatomic) double impressionThreshold;

- (void).cxx_destruct;
- (id)initWithCampaign:(id)a0 line:(id)a1 creative:(id)a2 impressionIdentifier:(id)a3 impressionThreshold:(double)a4;

@end
