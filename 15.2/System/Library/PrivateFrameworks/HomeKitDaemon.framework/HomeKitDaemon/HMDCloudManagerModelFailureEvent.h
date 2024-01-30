@class NSString, NSNumber, NSDictionary;

@interface HMDCloudManagerModelFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSString *model;
@property (readonly, copy) NSNumber *failureCode;
@property (readonly, copy) NSString *errorDomain;
@property (readonly, copy) NSNumber *errorCode;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 failureCode:(unsigned long long)a1 error:(id)a2;

@end
