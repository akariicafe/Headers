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

- (struct __CFRunLoop { } *)wifiRunLoopRef;
- (void)_primaryInterfaceChanged:(BOOL)a0;
- (void)setWiFiEnabled:(BOOL)a0;
- (void)setPowered:(BOOL)a0;
- (void)_updateWiFiDevice;
- (BOOL)isAssociated;
- (int)signalStrengthBars;
- (void)_lock_spawnManagerCallbackThread;
- (void)_updateSignalStrength;
- (id)_wifiInterface;
- (void)_updateDevicePresence;
- (id)currentNetworkName;
- (void)_updateCurrentNetwork;
- (void)_powerStateDidChange;
- (struct __WiFiManagerClient { } *)_lock_manager;
- (void)_linkDidChange;
- (BOOL)wiFiEnabled;
- (BOOL)_cachedIsAssociated;
- (void)_updateSignalStrengthFromRawRSSI:(int)a0 andScaledRSSI:(float)a1;
- (int)signalStrengthRSSI;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isPrimaryInterface;
- (BOOL)isPowered;
- (void)_runManagerCallbackThread;
- (void)_lock_setWiFiDevice:(struct __WiFiDeviceClient { } *)a0;
- (id)init;
- (void)_updateWiFiState;
- (BOOL)isAssociatedToIOSHotspot;
- (void).cxx_destruct;

@end
