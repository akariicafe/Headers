@class NSError, DSRemotePairingWrapper, NSString;
@protocol DSNavigationDelegate;

@interface DSWifiSyncController : DSOBWelcomeController <DSController>

@property (retain, nonatomic) DSRemotePairingWrapper *remotePairing;
@property (nonatomic) long long numberOfDevices;
@property (retain, nonatomic) NSError *fetchError;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllPairedDevicesOnQueue:(id)a0 completion:(id /* block */)a1;

- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (id)localizedDetailText;
- (void)setUpButtons;
- (void)getNumberOfPairedDevices:(id /* block */)a0;
- (void)learnMoreWifiSyncPressed;
- (void)presentFetchedErrorAlert;
- (void)reloadDetailText;
- (void)removeAllPairedDevicesAndPushNextPane;
- (void)shouldShowWithCompletion:(id /* block */)a0;

@end
