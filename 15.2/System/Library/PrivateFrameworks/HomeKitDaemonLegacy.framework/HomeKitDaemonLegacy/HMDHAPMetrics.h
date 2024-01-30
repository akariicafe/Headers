@class NSString, NSDictionary;

@interface HMDHAPMetrics : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (retain, nonatomic) NSString *firmwareVersion;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)initWithHMDAccessory:(id)a0;

@end
