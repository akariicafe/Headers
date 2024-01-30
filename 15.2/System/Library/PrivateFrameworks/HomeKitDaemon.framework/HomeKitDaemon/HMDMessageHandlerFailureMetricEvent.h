@class NSString, NSDictionary;

@interface HMDMessageHandlerFailureMetricEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *messageName;
@property (readonly, copy) NSString *type;


- (void).cxx_destruct;
- (id)initWithFailureType:(unsigned long long)a0 messageName:(id)a1;

@end
