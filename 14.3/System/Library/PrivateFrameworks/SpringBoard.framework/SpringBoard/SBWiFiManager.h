@class NSRecursiveLock, NSString, NWSystemPathMonitor, NSObject;
@protocol OS_dispatch_source;

@interface SBWiFiManager : NSObject {
    NSRecursiveLock *_lock;
    struct __CFRunLoop { } *_callbackRunLoop;
    struct __WiFiManagerClient { } *_manager;
    struct __WiFiDeviceClient { } *_device;
    NSString *_deviceInterfaceName;
    BOOL _mainThread_devicePresent;
    struct __WiFiNetwork { } *_currentNetwork;
    struct __WiFiNetwork { } *_previousNetwork;
    BOOL _currentNetworkHasBeenSet;
    BOOL _currentNetworkIsIOSHotspot;
    BOOL _currentNetworkIsIOSHotspotHasBeenSet;
    BOOL _powered;
    BOOL _poweredHasBeenSet;
    int _mainThread_signalStrengthBars;
    int _mainThread_signalStrengthRSSI;
    BOOL _mainThread_signalStrengthHasBeenSet;
    NWSystemPathMonitor *_systemPathMonitor;
    NSObject<OS_dispatch_source> *_primaryInterfaceUpdateTimeoutSource;
    struct __WiFiNetwork { } *_primaryInterface;
    BOOL _primaryInterfaceHasBeenSet;
    BOOL _isPrimaryInterface;
    BOOL _isPrimaryInterfaceChanging;
}

+ (id)sharedInstance;

- (int)signalStrengthBars;
- (BOOL)isAssociatedToIOSHotspot;
- (id)init;
- (void)setWiFiEnabled:(BOOL)a0;
- (void)_lock_spawnManagerCallbackThread;
- (void).cxx_destruct;
- (BOOL)isPowered;
- (void)_linkDidChange;
- (void)_powerStateDidChange;
- (void)_updateSignalStrengthFromRawRSSI:(int)a0 andScaledRSSI:(float)a1;
- (BOOL)isAssociated;
- (void)_updateWiFiDevice;
- (void)_runManagerCallbackThread;
- (struct __CFRunLoop { } *)wifiRunLoopRef;
- (void)setPowered:(BOOL)a0;
- (void)_updateWiFiState;
- (void)_updateCurrentNetwork;
- (int)signalStrengthRSSI;
- (void)_lock_setWiFiDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)_primaryInterfaceChanged:(BOOL)a0;
- (BOOL)_cachedIsAssociated;
- (id)currentNetworkName;
- (void)_updateSignalStrength;
- (BOOL)isPrimaryInterface;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)wiFiEnabled;
- (struct __WiFiManagerClient { } *)_lock_manager;
- (id)_wifiInterface;
- (void)_updateDevicePresence;

@end
