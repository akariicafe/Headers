@class NSString, HMDSiriEndpointProfileFields, HMDSiriEndpointProfileAccessorySettingFields, NSDictionary;

@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) NSString *accessoryCategoryType;
@property (readonly) HMDSiriEndpointProfileFields *profileFields;
@property (readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields;
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
- (id)initWithAccessoryCategoryType:(id)a0 profileFields:(id)a1 accessorySettingFields:(id)a2;

@end
