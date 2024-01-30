@class NSArray, NSMutableDictionary;

@interface RTWiFiManager_MobileWiFi : RTWiFiManager

@property (nonatomic) struct __WiFiManagerClient { } *wifiManager;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSMutableDictionary *accessPointForInterface;

+ (id)defaultScanRequest;
+ (id)scanRequestWithType:(long long)a0 dwellTime:(long long)a1 channels:(id)a2 lowPriority:(BOOL)a3;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_pollManagerPowerStatus;
- (void)_cancelScan;
- (void)_setup;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_establishConnectionToWiFiManager;
- (void)_setRegisteredForPowerCallbacks:(BOOL)a0;
- (void)_handleScanResultsCallback:(id)a0 error:(int)a1;
- (void).cxx_destruct;
- (void)_setRegisteredForExtendedLinkCallbacks:(BOOL)a0;
- (void)_setRegisteredForScanUpdateCallbacks:(BOOL)a0;
- (void)handleWiFiDeviceClientPowerCallback:(struct __WiFiDeviceClient { } *)a0;
- (void)_handleWiFiDeviceClientExtendedLinkCallback:(struct __WiFiDeviceClient { } *)a0 eventData:(id)a1;
- (void)_destroyConnectionToWiFiManager;
- (void)handleWiFiDeviceClientScanUpdateCallback:(struct __WiFiDeviceClient { } *)a0 scanRequest:(id)a1 scanResults:(id)a2 error:(int)a3;
- (void)_pollAccessPoints;
- (void)handleWiFiDeviceClientScanCallback:(struct __WiFiDeviceClient { } *)a0 scanResults:(id)a1 error:(int)a2;
- (void)_handleWiFiDeviceClientPowerCallback:(struct __WiFiDeviceClient { } *)a0;
- (void)_scheduleScan;
- (void)handleWiFiDeviceClientExtendedLinkCallback:(struct __WiFiDeviceClient { } *)a0 eventData:(id)a1;

@end
