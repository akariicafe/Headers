@class NSArray, DeviceQuery, Device;

@interface GetVolumeLevelIntent : INIntent

@property (copy, nonatomic) Device *device;
@property (copy, nonatomic) NSArray *deviceContext;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
