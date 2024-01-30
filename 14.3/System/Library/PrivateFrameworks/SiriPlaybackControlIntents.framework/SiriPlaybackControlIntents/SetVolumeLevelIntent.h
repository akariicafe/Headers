@class NSArray, VolumeLevel, DeviceQuery, Device;

@interface SetVolumeLevelIntent : INIntent

@property (copy, nonatomic) Device *device;
@property (copy, nonatomic) NSArray *deviceContext;
@property (copy, nonatomic) VolumeLevel *volumeLevel;
@property (nonatomic) long long settingAttribute;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
