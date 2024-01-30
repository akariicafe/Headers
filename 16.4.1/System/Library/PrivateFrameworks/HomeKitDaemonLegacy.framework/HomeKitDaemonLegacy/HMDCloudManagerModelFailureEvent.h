@class NSString, NSNumber, NSDictionary;

@interface HMDCloudManagerModelFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSString *model;
@property (readonly, copy) NSNumber *failureCode;
@property (readonly, copy) NSString *errorDomain;
@property (readonly, copy) NSNumber *errorCode;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 failureCode:(unsigned long long)a1 error:(id)a2;

@end
