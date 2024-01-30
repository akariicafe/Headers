@class NSString, AMSUILoadingView, NSMutableDictionary, _UIContentUnavailableView, AMSBagKeySet, UNUserNotificationCenter, UITableView, ACAccount, AMSUINotificationSettingsViewModel, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUINotificationSettingsViewController : UIViewController <AMSUINotificationSettingsViewModelDelegate, UITableViewDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) NSMutableDictionary *changedItems;
@property (retain, nonatomic) _UIContentUnavailableView *errorView;
@property (retain, nonatomic) AMSUILoadingView *loadingView;
@property (retain, nonatomic) AMSUINotificationSettingsViewModel *model;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL shouldDeepLink;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isAuthenticated;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 account:(id)a1 bag:(id)a2;
- (void)_loadData;
- (void)_commonSetup;
- (void)_appWillEnterForeground:(id)a0;
- (void)_handleAllowNotificationsButton;
- (void)_commitChangedItemsUpdates;
- (void)_handleAuthenticationError:(id)a0;
- (id)_promptForAuthentication;
- (void)_updateNotificationStatus;
- (id)initWithIdentifier:(id)a0 bag:(id)a1;
- (void)viewModel:(id)a0 didReceiveValueChange:(id)a1 forItem:(id)a2;

@end
