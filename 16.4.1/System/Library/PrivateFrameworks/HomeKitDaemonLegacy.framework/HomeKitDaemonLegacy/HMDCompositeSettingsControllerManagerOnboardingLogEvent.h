@class NSError, NSString, NSDictionary;

@interface HMDCompositeSettingsControllerManagerOnboardingLogEvent : HMMLogEvent <HMDCompositeSettingsControllerManagerOnboardingLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSError *error;
@property (readonly) long long siriEndpointCertificationReason;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithError:(id)a0 siriEndpointCertificationReason:(long long)a1;

@end
