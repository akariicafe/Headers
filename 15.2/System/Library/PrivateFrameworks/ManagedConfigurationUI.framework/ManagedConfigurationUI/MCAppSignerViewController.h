@class MCUIAppSigner, NSObject;
@protocol OS_dispatch_group;

@interface MCAppSignerViewController : MCUITableViewController

@property (nonatomic) BOOL isNetworkReachable;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup;
@property (retain, nonatomic) MCUIAppSigner *appSigner;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setup;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)networkReachabilityChanged:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithAppSigner:(id)a0;
- (void)_appSignersUpdated:(id)a0;
- (void)_presentNetworkRequiredAlert;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)a0;
- (BOOL)_isEnterpriseAppTrustAllowed;
- (void)_appSignerWasAddedOnlineRequired:(BOOL)a0;
- (void)_appSignerWasRemoved;
- (BOOL)_isAppRemovalAllowed;
- (BOOL)_isShowingTrustUntrustRowAllowed;
- (void)_presentAppRemovalAlert;
- (void)_presentTrustAlert;
- (void)_presentVerifyAppAlert;
- (void)_trustAppSigner;
- (void)_verifyApps;
- (void)removeAppSignerApps;

@end
