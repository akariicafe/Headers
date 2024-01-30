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

- (void)_runManagerCallbackThread;
- (void)_primaryInterfaceChanged:(BOOL)a0;
- (int)signalStrengthBars;
- (struct __WiFiManagerClient { } *)_lock_manager;
- (int)signalStrengthRSSI;
- (struct __CFRunLoop { } *)wifiRunLoopRef;
- (void)_updateSignalStrengthFromRawRSSI:(int)a0 andScaledRSSI:(float)a1;
- (void)_powerStateDidChange;
- (void)_lock_spawnManagerCallbackThread;
- (void)_updateWiFiDevice;
- (id)_wifiInterface;
- (void)_lock_setWiFiDevice:(struct __WiFiDeviceClient { } *)a0;
- (BOOL)isPowered;
- (void).cxx_destruct;
- (void)setPowered:(BOOL)a0;
- (id)init;
- (void)setWiFiEnabled:(BOOL)a0;
- (BOOL)isPrimaryInterface;
- (id)currentNetworkName;
- (void)_updateCurrentNetwork;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_cachedIsAssociated;
- (void)_updateDevicePresence;
- (BOOL)isAssociatedToIOSHotspot;
- (BOOL)isAssociated;
- (void)_updateSignalStrength;
- (BOOL)wiFiEnabled;
- (void)_updateWiFiState;
- (void)_linkDidChange;

@end
