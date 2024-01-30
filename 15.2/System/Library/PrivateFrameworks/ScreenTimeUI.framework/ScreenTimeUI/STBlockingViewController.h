@class STHourglassView, NSString, STManagementState, UIImageView, UIButton, STMenuButton, CNContactStore, UILabel, SBSLockScreenService;

@interface STBlockingViewController : UIViewController <CNContactViewControllerDelegate, STMenuButtonDelegate>

@property (class, readonly, copy) id /* block */ closeApplicationHandler;

@property (retain) STHourglassView *hourglassView;
@property (retain) UIImageView *communicationLimitView;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *messageLabel;
@property (retain) UIButton *okButton;
@property (retain) STMenuButton *ignoreLimitButton;
@property (retain) STMenuButton *askForMoreTimeButton;
@property (retain) UIButton *enterScreenTimePasscodeButton;
@property (retain) UIButton *addContactButton;
@property (retain) UIImageView *customImageView;
@property (retain) UIButton *customPrimaryButton;
@property (retain) UIButton *customSecondaryButton;
@property (readonly) SBSLockScreenService *lockScreenService;
@property long long policy;
@property (copy) NSString *categoryIdentifier;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSString *webDomain;
@property (copy) NSString *formattedContactHandle;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) STManagementState *managementState;
@property (readonly) BOOL shouldAllowOneMoreMinute;
@property (readonly) BOOL shouldRequestMoreTime;
@property (getter=isShowingPolicyOptions) BOOL showingPolicyOptions;
@property (copy, nonatomic) id /* block */ okButtonHandler;
@property (nonatomic, getter=isChangePolicyButtonHidden) BOOL changePolicyButtonHidden;
@property (copy) id /* block */ addContactHandler;
@property BOOL fullScreenBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newTranslucentBlockingViewController;

- (void)viewDidLoad;
- (void)_sendRequest:(id)a0;
- (void)_ok:(id)a0;
- (void)_updateButtons;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)dealloc;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)updateAppearanceUsingPolicy:(long long)a0 forWebpageURL:(id)a1;
- (void)showWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)hideWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateAppearanceUsingPolicy:(long long)a0 forBundleIdentifier:(id)a1;
- (void)updateAppearanceUsingPolicy:(long long)a0 forCategoryIdentifier:(id)a1;
- (id /* block */)_ignoreLimitMenuProvider;
- (id /* block */)_askForMoreTimeMenuProvider;
- (void)_updateAddContactButton;
- (void)_hideCustomButtons;
- (void)_updateAppearanceForAskPending;
- (void)_updateAppearanceWithCustomConfiguration:(id)a0 defaultMessageFormatKey:(id)a1 defaultMessageArgument:(id)a2;
- (void)_updateAppearanceForBlockedContent:(id)a0 messageFormatKey:(id)a1 messageKey:(id)a2;
- (void)_oneMoreMinute:(id)a0;
- (void)_ignoreLimitForAdditionalTime:(double)a0;
- (id)_oneMoreMinuteAction;
- (id)_remindMeIn15MinutesAction;
- (id)_ignoreForTodayAction;
- (id)_askForTimeResource;
- (void)_enterScreenTimePasscode:(id)a0;
- (void)_unlockDeviceIfNeededWithCompletionHandler:(id /* block */)a0;
- (id)_sendRequestAction;
- (id)_enterScreenTimePasscodeAction;
- (void)_didFinishEnteringScreenTimePasscode:(id)a0;
- (void)_showPasscodeApprovedOptions;
- (void)_addContact;
- (id)_newContact;
- (id)_iCloudContainer;
- (void)_showDefaultHourglassView;
- (id)_primaryButtonConfiguration;
- (id)_secondaryButtonConfiguration;
- (void)_handleCustomButtonResponse:(id)a0 forAction:(long long)a1 error:(id)a2;
- (void)contextMenuWillDisplayForButton:(id)a0;
- (void)contextMenuWillEndForButton:(id)a0;
- (void)updateAppearanceUsingBlockedContactHandles:(id)a0 contactNameByHandle:(id)a1 forBundleIdentifier:(id)a2 isApplicationCurrentlyLimited:(BOOL)a3 contactStore:(id)a4;
- (void)_showIgnoreLimitOptions:(id)a0;
- (void)_showAskForMoreTimeOptions:(id)a0;
- (void)_addContact:(id)a0;
- (void)_customButtonPressed:(id)a0;

@end
