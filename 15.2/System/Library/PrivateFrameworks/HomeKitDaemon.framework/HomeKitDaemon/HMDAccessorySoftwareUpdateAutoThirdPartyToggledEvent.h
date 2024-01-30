@class NSString, NSDictionary;

@interface HMDAccessorySoftwareUpdateAutoThirdPartyToggledEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly) BOOL autoThirdPartySoftwareUpdateEnable;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numSecurityClassAccessories;
@property (readonly) unsigned long long numCriticalSensorAccessories;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

@end
