@class NSString, HMDSiriEndpointProfileFields, HMDSiriEndpointProfileAccessorySettingFields, NSDictionary;

@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly) NSString *accessoryCategoryType;
@property (readonly) HMDSiriEndpointProfileFields *profileFields;
@property (readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAccessoryCategoryType:(id)a0 profileFields:(id)a1 accessorySettingFields:(id)a2;

@end
