@protocol WLSourceDevicesDelegate;

@interface WLSourceDevicesController : WLDaemonConnection

@property (weak, nonatomic) id<WLSourceDevicesDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)attemptDirectConnectionToAddress:(id)a0;

@end
