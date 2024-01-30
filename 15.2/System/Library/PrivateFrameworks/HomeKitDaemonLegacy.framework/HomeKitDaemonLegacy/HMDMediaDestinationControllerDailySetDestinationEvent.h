@class NSString, NSDictionary;

@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *existingDestinationType;


- (void).cxx_destruct;
- (id)initWithExistingDestinationType:(id)a0;

@end
