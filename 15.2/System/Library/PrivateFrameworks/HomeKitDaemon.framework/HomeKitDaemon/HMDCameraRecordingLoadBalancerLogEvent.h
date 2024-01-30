@class NSNumber, NSString, NSDictionary;

@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSNumber *numberOfResidents;
@property (readonly, copy) NSNumber *numberOfRetries;
@property (readonly, copy) NSNumber *totalNumberOfJobSlots;
@property (readonly, copy) NSNumber *remainingNumberOfJobSlots;
@property (readonly, copy) NSString *selectedResidentDeviceType;
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel;
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams;
@property (readonly, copy) NSNumber *selectedResidentJobSlots;
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)initWithNumberOfResidents:(id)a0 numberOfRetries:(id)a1 totalNumberOfJobSlots:(id)a2 remainingNumberOfJobSlots:(id)a3 selectedResidentDeviceType:(id)a4 selectedResidentNumberOfActiveStreams:(id)a5 selectedResidentSystemResourceUsageLevel:(id)a6 selectedResidentJobSlots:(id)a7 selectedResidentPartialJobSlots:(id)a8;

@end
