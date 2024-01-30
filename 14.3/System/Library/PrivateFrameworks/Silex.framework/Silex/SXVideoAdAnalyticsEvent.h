@interface SXVideoAdAnalyticsEvent : SXAdAnalyticsEvent

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double timePlayed;

- (id)initWithCampaign:(id)a0 line:(id)a1 creative:(id)a2 impressionIdentifier:(id)a3 impressionThreshold:(double)a4 duration:(double)a5 timeplayed:(double)a6;

@end
