@class NSData, NSString, CUMobileDeviceDiscovery, NSSet, NSMutableDictionary, NSObject, CUWiFiScanner, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface RPLegacyDeviceDiscovery : NSObject {
    BOOL _activateCalled;
    BOOL _activateInProgress;
    BOOL _activateCompleted;
    NSData *_blePayloadFilterData;
    NSData *_blePayloadFilterMask;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _verifyDevices;
    SFDeviceDiscovery *_bleDiscovery;
    struct BonjourBrowser { } *_bonjourBrowser;
    CUMobileDeviceDiscovery *_mdDiscovery;
    BOOL _wifiAirPlayWAC;
    CUWiFiScanner *_wifiScanner;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned char deviceActionType;
@property (copy, nonatomic) NSSet *deviceFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int rssiThreshold;
@property (nonatomic) BOOL scanCache;
@property (nonatomic) unsigned int scanRate;
@property (readonly, nonatomic) unsigned int scanState;
@property (copy, nonatomic) NSString *serviceType;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned int wifiScanFlags;
@property (copy, nonatomic) NSString *wifiSSID;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ scanStateChangedHandler;
@property (copy, nonatomic) id /* block */ timeoutHandler;

- (void)_lostAllDevices;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (id)description;
- (void)_bonjourHandleEventType:(unsigned int)a0 info:(id)a1;
- (void)_bonjourHandleRemoveDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (void)_bonjourHandleAddOrUpdateDevice:(id)a0;
- (int)_bonjourStart;
- (int)_mdStart;
- (int)_bleStart;
- (int)_wifiStart;
- (void)_bleHandleDeviceFound:(id)a0;
- (void)_bleHandleDeviceLost:(id)a0;
- (void)_bleHandleDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_foundDevice:(id)a0;
- (void)_lostDeviceByIdentifier:(id)a0;
- (void)_mdHandleDeviceFound:(id)a0;
- (void)_mdHandleDeviceLost:(id)a0;
- (void)_mdHandleDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_wifiHandleDeviceFound:(id)a0;
- (void)_wifiHandleDeviceLost:(id)a0;
- (void)_wifiHandleDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)setBLEPayloadFilterData:(id)a0 mask:(id)a1;

@end
