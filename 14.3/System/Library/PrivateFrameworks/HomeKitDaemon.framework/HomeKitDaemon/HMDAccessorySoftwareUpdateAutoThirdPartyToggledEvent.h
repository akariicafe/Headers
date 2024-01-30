@class NSUUID;

@interface HMDAccessorySoftwareUpdateAutoThirdPartyToggledEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly) NSUUID *uuid;

@property (readonly) BOOL autoThirdPartySoftwareUpdateEnable;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numSecurityClassAccessories;
@property (readonly) unsigned long long numCriticalSensorAccessories;

+ (id)eventWithAutoThirdPartyUpdateEnable:(BOOL)a0 numHAPAccessories:(unsigned long long)a1 numCameraAccessories:(unsigned long long)a2 numCameraAccessoriesRecordingEnabled:(unsigned long long)a3 numSecurityClassAccessories:(unsigned long long)a4 numCriticalSensorAccessories:(unsigned long long)a5;
+ (id)eventWithHome:(id)a0;

- (id)eventName;
- (id)initWithAutoThirdPartyUpdateEnable:(BOOL)a0 numHAPAccessories:(unsigned long long)a1 numCameraAccessories:(unsigned long long)a2 numCameraAccessoriesRecordingEnabled:(unsigned long long)a3 numSecurityClassAccessories:(unsigned long long)a4 numCriticalSensorAccessories:(unsigned long long)a5;
- (id)serializedEvent;

@end
