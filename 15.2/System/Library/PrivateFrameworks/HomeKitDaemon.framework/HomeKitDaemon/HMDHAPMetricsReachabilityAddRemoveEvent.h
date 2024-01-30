@class NSString, NSDictionary, NSNumber;

@interface HMDHAPMetricsReachabilityAddRemoveEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) unsigned long long addRemoveEvent;
@property (readonly, nonatomic) NSNumber *linkType;


- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 hmdAddRemoveEvent:(unsigned long long)a1 forLinkType:(id)a2;

@end
