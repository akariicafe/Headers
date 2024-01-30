@class NSString, NSDictionary, NSNumber;

@interface HMDProcessRelaunchThresholdLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *timeIntervalSincePreviousProcessLaunch;


- (void).cxx_destruct;
- (id)initWithTimeSincePreviousLaunch:(id)a0;

@end
