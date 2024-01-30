@class HMFTimer, NSString, CUWiFiScanner, NSMutableSet, NSDate;
@protocol HAPWACAccessoryBrowserDelegate, HAPAirPlayAccessoryBrowserDelegate;

@interface HAPWACAccessoryBrowser : HAPAccessoryServerBrowser <HMFTimerDelegate, HMFLogging>

@property (retain, nonatomic) NSString *browsingIdentifier;
@property (retain, nonatomic) NSDate *browsingStartTime;
@property (weak, nonatomic) id<HAPAirPlayAccessoryBrowserDelegate> airplayDelegate;
@property (retain, nonatomic) NSString *scanning2Pt4SSID;
@property (copy, nonatomic) id /* block */ found2Pt4Completion;
@property (readonly, weak, nonatomic) id<HAPWACAccessoryBrowserDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *foundUnconfiguredUnpairedAccessories;
@property (retain, nonatomic) NSMutableSet *foundUnconfiguredPairedAccessories;
@property (retain, nonatomic) NSMutableSet *found2Pt4Networks;
@property (retain, nonatomic) CUWiFiScanner *cuWiFiScanner;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) HMFTimer *backoffTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)timerDidFire:(id)a0;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)handleFoundUnconfiguredUnpairedWACDevice:(id)a0;
- (void)stopDiscoveringAccessoryServers;
- (void)handleRemovedUnconfiguredWACDevice:(id)a0;
- (void)startDiscoveringAccessoryServers;
- (void)handleFoundAPDevice:(id)a0;
- (void)_startBrowsingForWACAccessories;
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)a0;
- (void)initWiFiScannerWithScanner:(id)a0;
- (void)scan2Pt4APWithSSID:(id)a0 completion:(id /* block */)a1;
- (void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)a0;
- (void)_initWiFiScannerWithScanner:(id)a0;
- (void)_restartBrowsingWithAllNetworks;
- (void).cxx_destruct;
- (void)handleFoundUnconfiguredPairedWACDevice:(id)a0;
- (void)_handleNewUnconfiguredUnpairedWACDevice:(id)a0;
- (void)_handleUnconfiguredPairedWACDevice:(id)a0;
- (void)_handleBrowsingBackOffTimerExpiry;
- (void)_handleChangeUnconfiguredPairedWACAccessory:(id)a0;
- (id)_removeUnconfiguredWACDevice:(id)a0;
- (void)handleChangeUnconfiguredWACDevice:(id)a0;
- (id)visible2Pt4Networks;
- (void)_reportFound2Pt4Network:(id)a0;
- (void)_addFoundUnconfiguredUnpairedWACDevice:(id)a0;
- (void)_stopBrowsingForWACAccessories;

@end
