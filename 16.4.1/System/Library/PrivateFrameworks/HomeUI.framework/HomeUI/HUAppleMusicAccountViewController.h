@class NAFuture, UIAlertController, NADeallocationSentinel, HUAppleMusicAccountModuleController, HUPrimaryUserSettingsItemModuleController, NSString;

@interface HUAppleMusicAccountViewController : HUItemTableViewController <HUAppleMusicAccountModuleControllerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol>

@property (retain, nonatomic) HUAppleMusicAccountModuleController *appleMusicAccountModuleController;
@property (retain, nonatomic) HUPrimaryUserSettingsItemModuleController *primaryUserModuleController;
@property (retain, nonatomic) NAFuture *accountArbitrationFuture;
@property (retain, nonatomic) NADeallocationSentinel *appleMusicLoadingViewControllerDeallocationSentinel;
@property (retain, nonatomic) UIAlertController *appleMusicLoadingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)_accessorySupportsMultiUser;
- (id)_appleMusicFooterMessage;
- (id)_appleMusicFooterView;
- (void)appleMusicModuleController:(id)a0 willPresentContext:(id)a1 account:(id)a2;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(id)a0;
- (void)appleMusicModuleControllerPresentSignInFlow:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;
- (id)initWithHFItem:(id)a0 mediaProfileContainer:(id)a1;
- (id)itemModuleControllers;

@end
