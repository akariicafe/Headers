@class NSArray, NSMutableDictionary;

@interface RTWiFiManager_MobileWiFi : RTWiFiManager

@property (nonatomic) struct __WiFiManagerClient { } *wifiManager;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSMutableDictionary *accessPointForInterface;

+ (id)defaultScanRequest;
+ (id)scanRequestWithType:(long long)a0 dwellTime:(long long)a1 channels:(id)a2 lowPriority:(BOOL)a3;

- (void)_shutdown;
- (void)_setup;
- (void).cxx_destruct;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_scheduleScan;
- (void)_cancelScan;
- (void)_establishConnectionToWiFiManager;
- (void)_destroyConnectionToWiFiManager;
- (void)_setRegisteredForScanUpdateCallbacks:(BOOL)a0;
- (void)_setRegisteredForExtendedLinkCallbacks:(BOOL)a0;
- (void)_setRegisteredForPowerCallbacks:(BOOL)a0;
- (void)_pollAccessPoints;
- (void)_pollManagerPowerStatus;
- (void)_handleWiFiDeviceClientPowerCallback:(struct __WiFiDeviceClient { } *)a0;
- (void)_handleWiFiDeviceClientExtendedLinkCallback:(struct __WiFiDeviceClient { } *)a0 eventData:(id)a1;
- (void)_handleScanResultsCallback:(id)a0 error:(int)a1;
- (void)handleWiFiDeviceClientPowerCallback:(struct __WiFiDeviceClient { } *)a0;
- (void)handleWiFiDeviceClientExtendedLinkCallback:(struct __WiFiDeviceClient { } *)a0 eventData:(id)a1;
- (void)handleWiFiDeviceClientScanUpdateCallback:(struct __WiFiDeviceClient { } *)a0 scanRequest:(id)a1 scanResults:(id)a2 error:(int)a3;
- (void)handleWiFiDeviceClientScanCallback:(struct __WiFiDeviceClient { } *)a0 scanResults:(id)a1 error:(int)a2;

@end
