@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WLSourceDevicesControllerSurrogate : WLSourceDevicesController {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _wifiStarted;
    NSString *_deviceDiscoverySession;
}

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)scheduleSurrogateDeviceDiscovery;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;

@end
