@class NSArray, NSMutableDictionary;

@interface RTWiFiManager_MobileWiFi : RTWiFiManager

@property (nonatomic) struct __WiFiManagerClient { } *wifiManager;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSMutableDictionary *accessPointForInterface;

+ (id)cacheScanRequest;
+ (id)defaultScanRequest;
+ (id)scanRequestWithType:(long long)a0 dwellTime:(long long)a1 channels:(id)a2 lowPriority:(BOOL)a3 merge:(BOOL)a4;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_setup;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_cancelScan;
- (void)_destroyConnectionToWiFiManager;
- (void)_establishConnectionToWiFiManager;
- (void)_handleScanResultsCallback:(id)a0 attemptCacheFallback:(BOOL)a1 error:(int)a2;
- (void)_handleWiFiDeviceClientExtendedLinkCallback:(struct __WiFiDeviceClient { } *)a0 eventData:(id)a1;
- (void)_handleWiFiDeviceClientPowerCallback:(struct __WiFiDeviceClient { } *)a0;
- (void)_pollAccessPoints;
- (void)_pollManagerPowerStatus;
- (void)_scheduleScan;
- (void)_scheduleScanWithCache;
- (void)_scheduleScanWithChannels:(id)a0;
- (void)_setRegisteredForExtendedLinkCallbacks:(BOOL)a0;
- (void)_setRegisteredForPowerCallbacks:(BOOL)a0;
- (void)_setRegisteredForScanUpdateCallbacks:(BOOL)a0;
- (void)handleWiFiDeviceClientCacheScanCallback:(struct __WiFiDeviceClient { } *)a0 scanResults:(id)a1 error:(int)a2;
- (void)handleWiFiDeviceClientExtendedLinkCallback:(struct __WiFiDeviceClient { } *)a0 eventData:(id)a1;
- (void)handleWiFiDeviceClientPowerCallback:(struct __WiFiDeviceClient { } *)a0;
- (void)handleWiFiDeviceClientScanCallback:(struct __WiFiDeviceClient { } *)a0 scanResults:(id)a1 error:(int)a2;
- (void)handleWiFiDeviceClientScanUpdateCallback:(struct __WiFiDeviceClient { } *)a0 scanRequest:(id)a1 scanResults:(id)a2 error:(int)a3;

@end
