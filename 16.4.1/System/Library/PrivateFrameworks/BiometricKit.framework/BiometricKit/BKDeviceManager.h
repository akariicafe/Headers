@interface BKDeviceManager : NSObject

+ (void)initialize;
+ (id)availableDevices;
+ (id)availableDevicesWithFailure:(BOOL *)a0;

@end
