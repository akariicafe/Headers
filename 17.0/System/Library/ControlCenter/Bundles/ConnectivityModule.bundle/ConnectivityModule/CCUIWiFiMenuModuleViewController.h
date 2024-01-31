@class NSString, WFNetworkListController, NSArray, UIImage;
@protocol WFNetworkListRecord, WFNetworkListDelegate;

@interface CCUIWiFiMenuModuleViewController : CCUIAlwaysExpandedMenuModuleViewController <WFNetworkListing, WFNetworkViewProvider> {
    WFNetworkListController *_wifiManager;
    NSArray *_networks;
    UIImage *_hotspotImage;
    UIImage *_wifiSecureImage;
    UIImage *_wifiSignalLowImage;
    UIImage *_wifiSignalMediumImage;
    UIImage *_wifiSignalHighImage;
}

@property (weak) id<WFNetworkListDelegate> listDelegate;
@property (nonatomic) BOOL showOtherNetwork;
@property float currentNetworkScaledRSSI;
@property (retain) id<WFNetworkListRecord> currentNetwork;
@property long long currentNetworkState;
@property unsigned long long currentNetworkSignalBars;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL userAutoJoinEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScanning:(BOOL)a0;
- (void)powerStateDidChange:(BOOL)a0;
- (void)viewDidLoad;
- (void)refresh;
- (void)setNetworks:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)trailingViewForMenuItem:(id)a0;
- (id)certificateViewControllerWithContext:(id)a0;
- (id)credentialsViewControllerWithContext:(id)a0;
- (void)dismissNetworkViewController:(id)a0 forContext:(id)a1;
- (id)networkDetailsViewControllerWithContext:(id)a0;
- (id)networkErrorViewControllerWithContext:(id)a0;
- (void)presentNetworkViewController:(id)a0 forContext:(id)a1;
- (id)_hotspotImage;
- (id)_menuItemFromNetworkRecord:(id)a0;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)_serializeNetworkRecord:(id)a0;
- (void)_updateWiFiMenuItems;
- (id)_wifiImageForSignalBars:(unsigned long long)a0;
- (id)_wifiSecureImage;
- (id)_wifiSignalHighImage;
- (id)_wifiSignalLowImage;
- (id)_wifiSignalMediumImage;

@end
