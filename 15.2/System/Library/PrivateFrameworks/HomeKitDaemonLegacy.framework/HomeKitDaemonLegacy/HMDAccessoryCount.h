@class HMDHome;

@interface HMDAccessoryCount : NSObject

@property (weak) HMDHome *home;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numHAPIPAccessoriesSupportAFU;
@property (readonly) unsigned long long numHAPBLEAccessoriesSupportAFU;
@property (readonly) unsigned long long numHAPThreadAccessoriesSupportAFU;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numSecurityClassAccessories;
@property (readonly) unsigned long long numCriticalSensorAccessories;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numHAPAccessoriesWithAnyServiceWithTypes:(id)a0;

@end
