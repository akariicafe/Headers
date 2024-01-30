@class MCUIAppSigner, NSObject;
@protocol OS_dispatch_group;

@interface MCAppSignerViewController : MCUITableViewController

@property (nonatomic) BOOL isNetworkReachable;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup;
@property (retain, nonatomic) MCUIAppSigner *appSigner;

- (void)_setup;
- (void)networkReachabilityChanged:(id)a0;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithAppSigner:(id)a0;
- (void)effectiveSettingsChanged:(id)a0;
- (void)appSignerApplicationsChanged:(id)a0;
- (BOOL)_isEnterpriseAppTrustAllowed;
- (void)refreshAppSigner;
- (void)_presentNetworkRequiredAlert;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)a0;
- (BOOL)_isAppRemovalAllowed;
- (BOOL)_isShowingTrustUntrustRowAllowed;
- (void)_presentAppRemovalAlert;
- (void)_presentTrustAlert;
- (void)_presentVerifyAppAlert;
- (void)trustAppSigner;
- (void)verifyApps;
- (void)removeAppSignerApps;

@end
