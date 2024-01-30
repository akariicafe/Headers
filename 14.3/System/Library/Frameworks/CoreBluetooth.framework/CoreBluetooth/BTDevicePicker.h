@class NSString, BluetoothManager, NSPredicate, UIWindow, PSSpecifierStub, NSMutableArray, UIAlertController, UITableView;
@protocol BTDevicePickerDelegate;

@interface BTDevicePicker : NSObject <UITableViewDelegate, UITableViewDataSource> {
    UIAlertController *_alertView;
    UIWindow *_alertWindow;
    UIWindow *_btAlertWindow;
    UITableView *_tableView;
    NSMutableArray *_deviceList;
    NSString *_title;
    unsigned int _service;
    NSPredicate *_predicate;
    BOOL _showingAlert;
    BOOL _checkingPaired;
    PSSpecifierStub *_connectingSpec;
    BluetoothManager *_btManager;
    Class _btSSPRequestClass;
    Class _btAlertClass;
    id _btSSPAlert;
    id _btAlert;
}

@property (nonatomic) id<BTDevicePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillResignActive:(id)a0;
- (void)show;
- (void)powerChanged:(id)a0;
- (void)deviceDiscoveryStoppedHandler:(id)a0;
- (void)deviceFoundHandler:(id)a0;
- (void)deviceLostHandler:(id)a0;
- (void)deviceNameChangedHandler:(id)a0;
- (void)authenticationRequestHandler:(id)a0;
- (void)devicePairedHandler:(id)a0;
- (void)deviceConnectionCompleteHandler:(id)a0;
- (void)checkAttachTimeout;
- (void)showInternal;
- (void)cancelDevicePicker;
- (void)createAlertWindow;
- (void)cleanupPairing;
- (void)_btSSPConfirmationHandler:(id)a0;
- (void)_btSSPNumericComparisonHandler:(id)a0;
- (void)_btSSPPasskeyDisplayHandler:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)createBTAlertWindow;
- (id)initWithTitle:(id)a0 service:(unsigned int)a1 discoveryNameFilter:(id)a2;
- (void)alertSheetDismissed:(id)a0;
- (void)showPairingAlert:(id)a0;
- (void)dismissPairingAlert:(id)a0;
- (void)dealloc;
- (void)showAlert:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)startScanning;
- (void)dismissAnimated:(BOOL)a0;

@end
