@class CARSessionStatus, NSMutableDictionary, SFDiagnostics, ENManager, HKHealthStore, NSMutableArray, BTAlert, NSString, BTSSPPairingRequest, NSTimer, PSSpecifier, NSMutableSet, UIAlertController, CBCentralManager;

@interface BTSDevicesController : PSListController <CBCentralManagerPrivateDelegate, CBPairingAgentDelegate, CBPeripheralDelegate, CARSessionObserving, BTAlertDelegate> {
    PSSpecifier *_myDevicesGroupSpec;
    PSSpecifier *_otherDevicesGroupSpec;
    PSSpecifier *_sharingDevicesGroupSpec;
    NSMutableDictionary *_devicesDict;
    NSMutableDictionary *_sharingDevicesDict;
    NSMutableDictionary *_ctkdLeDevicesDict;
    NSMutableSet *_connectedPoorBehaviorDevices;
    BOOL _power;
    BOOL _togglingPower;
    BOOL _bluetoothIsBusy;
    BOOL _bluetoothInitialized;
    BOOL _allowScanning;
    BOOL _scanningPausedForCarPlay;
    BOOL _bluetoothRestricted;
    BOOL _blacklistEnabled;
    BOOL _uiRefreshed;
    BOOL _mainFooterNeedsUpdate;
    BOOL _exposureNotificationManagerEnabled;
    NSString *_restrictionDetail;
    PSSpecifier *_currentDeviceSpecifier;
    NSTimer *_currentDeviceConnectionTimer;
    BTAlert *_alert;
    BTSSPPairingRequest *_sspAlert;
    UIAlertController *_syncContactsCarplayAlert;
    UIAlertController *_swUpdateAlert;
    UIAlertController *_syncContactsPrivacyAlert;
    struct NETRBClient { } *_netClient;
    CBCentralManager *_centralManager;
    HKHealthStore *_healthKitStore;
    NSMutableSet *_knownHealthDevices;
    NSMutableArray *_retrievedHealthServices;
    SFDiagnostics *_sharingClient;
    CARSessionStatus *_carplayStatus;
    ENManager *_exposureNotificationManager;
}

@property (nonatomic) struct __CFRunLoopSource { } *runLoopSource;
@property (nonatomic) struct __CFUserNotification { } *notification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidConnect:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)_removeDevice:(id)a0;
- (id)currentSpecifier;
- (void)registerForNotifications;
- (void)authenticationRequestHandler:(id)a0;
- (void)devicePairedHandler:(id)a0;
- (void)cleanupPairing;
- (id)init;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)alertSheetDismissed:(id)a0;
- (void)showPairingAlert:(id)a0;
- (void)dismissPairingAlert:(id)a0;
- (void).cxx_destruct;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)centralManager:(id)a0 didUpdatePeripheralConnectionState:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)applicationWillTerminate:(id)a0;
- (void)updateUI:(BOOL)a0;
- (id)specifiers;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)showAlert:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForFooterInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (void)startedConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)peripheralDidUpdateName:(id)a0;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (BOOL)isiPad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)deviceConnectedHandler:(id)a0;
- (void)refreshUI;
- (BOOL)isiPhone;
- (void)viewDidLoad;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)_retrievedRegisteredHealthDevices:(id)a0;
- (void)allowBluetoothConnections:(BOOL)a0;
- (void)setBluetoothIsBusy:(BOOL)a0;
- (void)cleanupAlerts;
- (id)_specifierForDevice:(id)a0;
- (void)_addDeviceSpecifier:(id)a0 withDevice:(id)a1;
- (void)_addDevice:(id)a0;
- (void)_updateDevicePosition:(id)a0;
- (void)showSyncContactsPrivacyPopup:(id)a0;
- (void)showUpgradeOSPopup:(id)a0;
- (void)allowBluetoothScans:(BOOL)a0;
- (void)updateMainGroupFooter;
- (void)pinRequestHandler:(id)a0;
- (void)sspConfirmationHandler:(id)a0;
- (void)sspNumericComparisonHandler:(id)a0;
- (void)sspPasskeyDisplayHandler:(id)a0;
- (id)_getDeviceForPeripheral:(id)a0;
- (id)_getDeviceForCTKDPeripheral:(id)a0;
- (void)_updateHealthDevices;
- (void)_setupCentralScanning;
- (void)_peripheralDidCompletePairing:(id)a0;
- (void)showSyncContactsPopup:(id)a0;
- (BOOL)shouldHideDevice:(id)a0;
- (void)_removeDeviceSpecifier:(id)a0;
- (id)_knownDevicesSpecifiers;
- (id)_shareDevicesSpecifiers;
- (BOOL)nicknameEnabled;
- (void)refreshCTKDDevices;
- (id)_specifierForSharingDevice:(id)a0;
- (void)updatePowerState:(BOOL)a0 powerSpec:(id)a1;
- (void)healthDeviceUnregisteredHandler:(id)a0;
- (void)deviceDiscoveredHandler:(id)a0;
- (void)deviceUpdatedHandler:(id)a0;
- (void)deviceRemovedHandler:(id)a0;
- (void)deviceUnpairedHandler:(id)a0;
- (void)devicePairedStatusChangedHandler:(id)a0;
- (void)effectiveMCSettingsDidChange:(id)a0;
- (void)bluetoothBlacklistChanged:(id)a0;
- (void)updatePoorConnectedDevicesList:(id)a0;
- (void)showPencilConnectionAttemptAlert:(int)a0;
- (void)peripheralConnectionTimeout:(id)a0;
- (id)connectedPoorBehaviorDeviceNames;
- (BOOL)boolFromBluetoothPreferences:(id)a0;
- (void)setSSPConfirmation:(long long)a0 forDevice:(id)a1;
- (void)userDidTapWatchLink:(id)a0;
- (id)bluetoothEnabled:(id)a0;
- (void)setBluetoothEnabled:(id)a0 specifier:(id)a1;

@end
