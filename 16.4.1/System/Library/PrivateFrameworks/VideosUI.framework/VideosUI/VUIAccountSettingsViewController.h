@class PSSpecifier, UITextField, NSTimer, NSURL, NSNumber, NSString;

@interface VUIAccountSettingsViewController : PSListController <UITableViewDataSource, UITextFieldDelegate>

@property (nonatomic) BOOL authenticationInProgress;
@property (nonatomic) long long watchListAppsCount;
@property (retain, nonatomic) PSSpecifier *credentialsAppleIDSpecifier;
@property (retain, nonatomic) PSSpecifier *credentialsPasswordSpecifier;
@property (retain, nonatomic) PSSpecifier *signInSpecifier;
@property (retain, nonatomic) PSSpecifier *createAccountSpecifier;
@property (retain, nonatomic) PSSpecifier *syncMySportsSpecifier;
@property (retain, nonatomic) UITextField *credentialsAppleIDTextField;
@property (retain, nonatomic) UITextField *credentialsPasswordTextField;
@property (nonatomic) long long notifAuthStatus;
@property (retain, nonatomic) NSNumber *_syncMySportsEnabled;
@property (retain, nonatomic) NSTimer *syncMySportsDebouncer;
@property (retain, nonatomic) NSURL *addFundsUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_accountSpecifiers;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_dismissViewController;
- (long long)_alertStyle;
- (void)_addPrivacyFooterToGroup:(id)a0;
- (void)_checkConnectedAppsWithDispatchGroup:(id)a0;
- (void)_checkExternalLinksWithDispatchGroup:(id)a0;
- (id)_clearHistorySpecifiers;
- (void)_clearPlayHistory:(id)a0;
- (id)_createAccountSpecifiers;
- (id)_createAxIdFromTableCell:(id)a0;
- (id)_credentialsSpecifiers;
- (id)_dialogMetricsData;
- (void)_didSelectSpecifier:(id)a0;
- (id)_externalSpecifiers;
- (id)_getConnectedAppsCountString;
- (void)_handleAccountSettingsEventWithAmsWebView:(id)a0;
- (void)_handleAccountSettingsEventWithAmsWebView:(id)a0 storeServicesBagKey:(id)a1 storeServicesUrl:(id)a2;
- (void)_handleAccountSettingsEventWithUrl:(id)a0 amsBagKey:(id)a1 useAMSWebView:(BOOL)a2;
- (void)_handleNotificationsOff;
- (void)_loadDynamicIdentifiers;
- (id)_mySportsSpecifiers;
- (id)_notificationGroupSpecifierIdentifier;
- (id)_notificationSpecifiers;
- (void)_openiForgotAppleURL;
- (void)_parseUrl:(id)a0;
- (void)_promptForNotificationsAuth;
- (void)_recordDialogClick:(id)a0;
- (void)_setSyncMySportsEnabled:(id)a0;
- (void)_showPrivacySheet:(id)a0;
- (id)_signInSpecifiers;
- (id)_signOutSpecifiers;
- (id)_sourcesSpecifiers;
- (void)_syncMySportsSettingDidChange:(id)a0;

@end
