@class NSString, NSDictionary;

@interface BCSMegashardPrefetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSPrefetchMetricProtocol>

@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL successful;
@property (nonatomic) long long hoursSinceLastSuccessfulPrefetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricForMegashardType:(long long)a0 postProcessingMetricHandlers:(id)a1;


@end
