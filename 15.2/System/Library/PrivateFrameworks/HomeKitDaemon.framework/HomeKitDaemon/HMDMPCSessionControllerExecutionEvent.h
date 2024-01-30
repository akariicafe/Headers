@class NSString, NSDictionary;

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property BOOL didPartiallySucceed;
@property (readonly, copy) NSString *resultString;

+ (id)identifier;


@end
