@interface SXVideoAdEngagementEvent : SXVideoAdAnalyticsEvent

@property (readonly, nonatomic) unsigned long long engagementType;

- (id)initWithCampaign:(id)a0 line:(id)a1 creative:(id)a2 impressionIdentifier:(id)a3 impressionThreshold:(double)a4 duration:(double)a5 timeplayed:(double)a6 engagementType:(unsigned long long)a7;

@end
