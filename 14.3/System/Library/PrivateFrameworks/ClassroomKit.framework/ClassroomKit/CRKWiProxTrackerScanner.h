@class NSString, WPDeviceScanner, WPZoneTracker;
@protocol CRKWiProxTrackerScannerDelegate;

@interface CRKWiProxTrackerScanner : NSObject <WPZoneTrackerDelegate, WPDeviceScannerDelegate>

@property (retain, nonatomic) WPZoneTracker *zoneTracker;
@property (retain, nonatomic) WPDeviceScanner *deviceScanner;
@property (weak, nonatomic) id<CRKWiProxTrackerScannerDelegate> delegate;
@property (readonly, nonatomic) long long zoneTrackerState;
@property (readonly, nonatomic) long long deviceScannerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)unregisterForZoneChanges:(id)a0;
- (void)unregisterAllZoneChanges;
- (void)dealloc;
- (void)registerForZoneChangesMatching:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)unregisterAllDeviceChanges;
- (void)registerForDevicesMatching:(id)a0 options:(id)a1;
- (void)invalidate;
- (void)deviceScannerDidUpdateState:(id)a0;
- (void)scanner:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)scanner:(id)a0 foundRequestedDevices:(id)a1;
- (void)scanner:(id)a0 didFailToRegisterDevices:(id)a1 withError:(id)a2;
- (void)zoneTracker:(id)a0 enteredZone:(id)a1;
- (void)zoneTracker:(id)a0 exitedZone:(id)a1;
- (void)zoneTracker:(id)a0 didFailToRegisterZones:(id)a1 withError:(id)a2;
- (void)zoneTrackerDidUpdateState:(id)a0;

@end
