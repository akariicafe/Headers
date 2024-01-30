@class NSArray, DMCEnrollmentInterface, MCUIBridgeSpecifierProvider, NSString, MCUIMCSpecifierProvider;

@interface MCUIListController : MCURLListenerListController <UITableViewDelegate, MCUISpecifierProviderDelegate, DMCAccountSpecifierProviderDelegate>

@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (retain, nonatomic) MCUIMCSpecifierProvider *mcSpecifierProvider;
@property (retain, nonatomic) MCUIBridgeSpecifierProvider *bridgeSpecifierProvider;
@property (nonatomic) BOOL needsToReloadManageAccountSpecifiers;
@property (retain, nonatomic) NSArray *managedAccountSpecifiers;
@property (retain, nonatomic) DMCEnrollmentInterface *dmcEnrollmentInterface;
@property (retain, nonatomic) NSArray *vpnSpecifiers;
@property (retain, nonatomic) NSArray *vpnBundleControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_mcuiUpdated;
- (void)dealloc;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleURL:(id)a0;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)reloadAccountSpecifiersForProvider:(id)a0;
- (void).cxx_destruct;
- (void)accountCellWasTapped:(id)a0;
- (BOOL)prepareHandlingURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 animatePush:(BOOL *)a2;
- (void)_cleanCacheAndReloadSpecifiers;
- (void)_handleDeferredPush;
- (void)_loadManagedAccountSpecifiersWithCompletionHandler:(id /* block */)a0;
- (void)_loadVPNSpecifiersWithCompletionHandler:(id /* block */)a0;
- (void)_showAccountDetailsPaneWithUsername:(id)a0 completion:(id /* block */)a1;
- (id)_specifiersForPhone;
- (void)_watchFetchFailed:(id)a0;
- (id)mcuiViewController;

@end
