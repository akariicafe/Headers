@class CUMobileDevice, CUMobileDeviceDiscovery;

@interface CUMobileDeviceMonitorContext : NSObject

@property (retain, nonatomic) CUMobileDevice *device;
@property (retain, nonatomic) CUMobileDeviceDiscovery *discovery;

- (void).cxx_destruct;

@end
