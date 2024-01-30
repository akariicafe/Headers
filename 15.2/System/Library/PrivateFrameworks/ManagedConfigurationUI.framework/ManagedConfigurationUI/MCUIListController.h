@class NSArray, DMCEnrollmentInterface, MCUIBridgeSpecifierProvider, NSString, MCUIMCSpecifierProvider;

@interface MCUIListController : MCURLListenerListController <UITableViewDelegate, MCUISpecifierProviderDelegate, DMCAccountSpecifierProviderDelegate>

@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (retain, nonatomic) MCUIMCSpecifierProvider *mcSpecifierProvider;
@property (retain, nonatomic) MCUIBridgeSpecifierProvider *bridgeSpecifierProvider;
@property (retain, nonatomic) DMCEnrollmentInterface *dmcEnrollmentInterface;
@property (retain, nonatomic) NSArray *vpnSpecifiers;
@property (retain, nonatomic) NSArray *vpnBundleControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleURL:(id)a0;
- (void)_mcuiUpdated:(id)a0;
- (id)specifiers;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)accountCellWasTapped:(id)a0;
- (void)reloadAccountSpecifiersForProvider:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)mcuiViewController;
- (void)_reloadSpecifiersOnMainQueue;
- (id)_specifiersForPhone;
- (void)_loadVPNSpecifiersAsync;
- (void)_handleDeferredPush;
- (void)_showAccountDetailsPaneWithUsername:(id)a0 completion:(id /* block */)a1;
- (void)mcuiReloadSpecifiers;

@end
