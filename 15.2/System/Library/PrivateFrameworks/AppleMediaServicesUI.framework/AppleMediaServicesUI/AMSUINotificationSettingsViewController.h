@class NSString, AMSUILoadingView, _UIContentUnavailableView, AMSBagKeySet, UITableView, ACAccount, AMSUINotificationSettingsViewModel, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUINotificationSettingsViewController : UIViewController <AMSUINotificationSettingsViewModelDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) _UIContentUnavailableView *errorView;
@property (retain, nonatomic) AMSUILoadingView *loadingView;
@property (retain, nonatomic) AMSUINotificationSettingsViewModel *model;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithIdentifier:(id)a0 account:(id)a1 bag:(id)a2;
- (void).cxx_destruct;
- (void)_loadData;
- (void)commonSetup;
- (void)viewModel:(id)a0 didReceiveValueChange:(id)a1 forItem:(id)a2;

@end
