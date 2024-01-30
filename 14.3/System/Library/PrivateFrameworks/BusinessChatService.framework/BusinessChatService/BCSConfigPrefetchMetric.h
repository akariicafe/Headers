@class NSString, NSDictionary;

@interface BCSConfigPrefetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSConfigItemIdentifying, BCSPrefetchMetricProtocol>

@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL successful;
@property (nonatomic) long long hoursSinceLastSuccessfulPrefetch;

+ (id)metricForConfigType:(long long)a0 postProcessingMetricHandlers:(id)a1;


@end
