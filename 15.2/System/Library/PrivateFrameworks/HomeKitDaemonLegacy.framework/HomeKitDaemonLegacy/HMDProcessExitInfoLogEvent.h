@class NSString, NSDictionary;

@interface HMDProcessExitInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy, nonatomic) NSString *exitType;
@property (readonly, copy, nonatomic) NSString *exitReason;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)initWithExitType:(id)a0 reason:(id)a1;

@end
