@class CRKWiProxTrackerScanner, NSSet, NSString, NSMutableSet;
@protocol CRKClassSessionBeaconBrowserDelegate;

@interface CRKClassSessionBeaconBrowser : NSObject <CRKWiProxTrackerScannerDelegate> {
    long long mZoneTrackerLastState;
    NSMutableSet *mScanningZones;
    long long mIncreasedScanRequestCount;
}

@property (retain, nonatomic) CRKWiProxTrackerScanner *trackerScanner;
@property (copy, nonatomic) NSSet *trackingUUIDs;
@property (nonatomic) BOOL isBrowsing;
@property (nonatomic) BOOL isScanning;
@property (weak, nonatomic) id<CRKClassSessionBeaconBrowserDelegate> delegate;
@property (copy, nonatomic) NSSet *organizationUUIDs;
@property (nonatomic) BOOL allowInvitationSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)invitationUUID;

- (void)stopBrowsing;
- (void)updateScanner;
- (void)startBrowsing;
- (void).cxx_destruct;
- (id)init;
- (id)stateDictionary;
- (void)dealloc;
- (void)delegateDidFailWithError:(id)a0;
- (void)trackerScanner:(id)a0 didUpdateZoneTrackerState:(id)a1;
- (void)trackerScanner:(id)a0 zoneTracker:(id)a1 enteredZone:(id)a2;
- (void)trackerScanner:(id)a0 zoneTracker:(id)a1 exitedZone:(id)a2;
- (void)trackerScanner:(id)a0 zoneTracker:(id)a1 didFailToRegisterZones:(id)a2 withError:(id)a3;
- (void)trackerScanner:(id)a0 didUpdateDeviceScannerState:(id)a1;
- (void)trackerScanner:(id)a0 scanner:(id)a1 foundRequestedDevices:(id)a2;
- (void)trackerScanner:(id)a0 scanner:(id)a1 foundDevice:(id)a2 withData:(id)a3;
- (void)trackerScanner:(id)a0 scanner:(id)a1 didFailToRegisterDevices:(id)a2 withError:(id)a3;
- (void)updateZones;
- (void)startInitialScan;
- (void)stopScanningForDevicesInAllZones;
- (void)increasedScanDurationElapsed;
- (id)zoneDataForAdvertisementUUID:(id)a0;
- (id)organizationUUIDsMatchingZoneData:(id)a0;
- (id)zoneDataForOrganizationUUID:(id)a0;
- (void)stopScanningForDevicesInZone:(id)a0;
- (void)startScanningForDevicesInZone:(id)a0;
- (void)delegateDidFindInvitationSessionWithEndpoint:(id)a0;
- (void)delegateDidFindClassSession:(id)a0 flags:(unsigned short)a1;
- (void)increaseScanFrequencyForDuration:(double)a0;

@end
