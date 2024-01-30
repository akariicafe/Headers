@class NSString, NSDictionary;

@interface HMDMediaDestinationControllerReceivedUpdateDestinationRequestMessageLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


@end
