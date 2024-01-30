@class NSNumber, NSString, NSDictionary;

@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSNumber *numberOfResidents;
@property (readonly, copy) NSNumber *numberOfRetries;
@property (readonly, copy) NSNumber *totalNumberOfJobSlots;
@property (readonly, copy) NSNumber *remainingNumberOfJobSlots;
@property (readonly, copy) NSString *selectedResidentDeviceType;
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel;
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams;
@property (readonly, copy) NSNumber *selectedResidentJobSlots;
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots;
@property (readonly) BOOL selectedResidentHasActiveSessionWithCamera;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithNumberOfResidents:(id)a0 numberOfRetries:(id)a1 totalNumberOfJobSlots:(id)a2 remainingNumberOfJobSlots:(id)a3 selectedResidentDeviceType:(id)a4 selectedResidentNumberOfActiveStreams:(id)a5 selectedResidentSystemResourceUsageLevel:(id)a6 selectedResidentJobSlots:(id)a7 selectedResidentPartialJobSlots:(id)a8 selectedResidentHasActiveSessionWithCamera:(BOOL)a9;

@end
