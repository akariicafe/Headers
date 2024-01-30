@class NSString, NSNumber, NSDictionary;

@interface HMDAggregateRemoteMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy, nonatomic) NSString *transportType;
@property (readonly, copy, nonatomic) NSString *direction;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, copy, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)__initWithMessageName:(id)a0 deviceType:(id)a1 transportType:(id)a2 direction:(id)a3 count:(id)a4;

@end
