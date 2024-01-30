@class NSString, NSDictionary;

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long reason;
@property (readonly) BOOL reachable;
@property (readonly) BOOL targetSupportsIDSPresence;


@end
