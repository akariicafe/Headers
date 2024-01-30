@class NSString, NSNumber, NSDictionary;

@interface HMDMediaDestinationManagerFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSString *errorDomain;
@property (readonly, copy) NSNumber *errorCode;
@property (readonly, copy) NSNumber *failureCode;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithFailureCode:(unsigned long long)a0 error:(id)a1;

@end
