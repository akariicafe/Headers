@class NSDictionary, HMDMetricsManager, NSString;

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly, nonatomic) HMDMetricsManager *metricsManager;
@property (retain, nonatomic) NSDictionary *homeConfigurationCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithMetricsManager:(id)a0;
- (void)addHistogrammedCommonConfigurationDimensionsToEventDictionary:(id)a0;
- (void)addEventDurationInMillisecondsToEventDictionary:(id)a0 logEvent:(id)a1;
- (id)dictionaryFromEvent:(id)a0;

@end
