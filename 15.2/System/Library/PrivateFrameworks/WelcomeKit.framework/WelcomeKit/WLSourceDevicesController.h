@protocol WLSourceDevicesDelegate;

@interface WLSourceDevicesController : WLDaemonConnection

@property (weak, nonatomic) id<WLSourceDevicesDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)a0;
- (void)attemptDirectConnectionToAddress:(id)a0;

@end
