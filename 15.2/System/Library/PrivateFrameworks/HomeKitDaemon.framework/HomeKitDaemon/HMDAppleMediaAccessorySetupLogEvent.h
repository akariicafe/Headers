@class NSString, NSDictionary, NSDate, NSNumber, NSError;

@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *role;
@property (readonly, copy) NSDate *setupStartTime;
@property (readonly, copy) NSDate *setupEndTime;
@property (readonly, copy) NSDate *configurationEndTime;
@property (readonly, copy) NSError *setupSessionError;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSNumber *retryCount;


- (void).cxx_destruct;
- (id)initWithRole:(long long)a0 setupStartTime:(id)a1 setupEndTime:(id)a2 configurationEndTime:(id)a3 setupSessionError:(id)a4 category:(id)a5 retryCount:(unsigned long long)a6;

@end
