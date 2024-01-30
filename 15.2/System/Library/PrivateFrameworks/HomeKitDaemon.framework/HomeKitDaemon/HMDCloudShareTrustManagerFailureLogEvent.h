@class NSString, NSDictionary, NSNumber;

@interface HMDCloudShareTrustManagerFailureLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *trustManagerErrorCode;


- (void).cxx_destruct;
- (id)initWithTrustManagerErrorCode:(long long)a0 error:(id)a1;

@end
