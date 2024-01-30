@class PSSpecifier, UITextField, NSURL, NSString;

@interface VUIAccountSettingsViewController : PSListController <UITableViewDataSource, UITextFieldDelegate>

@property (nonatomic) BOOL authenticationInProgress;
@property (nonatomic) long long watchListAppsCount;
@property (retain, nonatomic) PSSpecifier *credentialsAppleIDSpecifier;
@property (retain, nonatomic) PSSpecifier *credentialsPasswordSpecifier;
@property (retain, nonatomic) PSSpecifier *signInSpecifier;
@property (retain, nonatomic) PSSpecifier *createAccountSpecifier;
@property (retain, nonatomic) UITextField *credentialsAppleIDTextField;
@property (retain, nonatomic) UITextField *credentialsPasswordTextField;
@property (retain, nonatomic) NSURL *addFundsUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)_dismissViewController;
- (BOOL)textFieldShouldReturn:(id)a0;
- (long long)_alertStyle;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)_accountSpecifiers;
- (id)_sourcesSpecifiers;
- (id)_externalSpecifiers;
- (id)_clearHistorySpecifiers;
- (id)_signOutSpecifiers;
- (id)_credentialsSpecifiers;
- (id)_signInSpecifiers;
- (id)_createAccountSpecifiers;
- (void)_loadDynamicIdentifiers;
- (void)_didSelectSpecifier:(id)a0;
- (id)_getConnectedAppsCountString;
- (void)_clearPlayHistory:(id)a0;
- (void)_openiForgotAppleURL;
- (void)_checkConnectedAppsWithDispatchGroup:(id)a0;
- (void)_checkExternalLinksWithDispatchGroup:(id)a0;

@end
