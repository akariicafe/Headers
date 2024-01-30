@class NSString, NSDictionary, NSNumber;

@interface HMDCloudShareTrustManagerTrustActivityLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *trustActivityType;
@property (readonly, copy) NSNumber *privilege;
@property (readonly, copy) NSNumber *isPrimaryResident;


- (void).cxx_destruct;
- (id)initWithTrustActivityType:(long long)a0 privilege:(unsigned long long)a1 isPrimaryResident:(BOOL)a2;

@end
