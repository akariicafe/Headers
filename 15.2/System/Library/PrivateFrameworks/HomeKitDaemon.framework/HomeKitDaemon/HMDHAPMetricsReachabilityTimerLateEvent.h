@class NSString, NSDictionary, NSNumber;

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *expectedDuration;


- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 duration:(id)a1 expectedDuration:(id)a2;

@end
