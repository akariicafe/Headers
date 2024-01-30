@interface MRDeviceInfoRequest : NSObject

+ (id)deviceInfoForOrigin:(id)a0;
+ (void)deviceInfoForOrigin:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (id)cachedDeviceInfoForOrigin:(id)a0;
+ (void)deviceInfoForUID:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
