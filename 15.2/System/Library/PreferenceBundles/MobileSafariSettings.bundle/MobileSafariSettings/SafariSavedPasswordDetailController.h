@class SafariSettingsFeatureManager, NSString, PSTextFieldSpecifier, PSSpecifier, SFSafariViewController, WBSSavedPassword, NSArray;

@interface SafariSavedPasswordDetailController : PSListController <SFSafariViewControllerDelegate> {
    PSTextFieldSpecifier *_websiteSpecifier;
    PSTextFieldSpecifier *_usernameSpecifier;
    PSTextFieldSpecifier *_passwordSpecifier;
    PSSpecifier *_changePasswordButtonSpecifier;
    SFSafariViewController *_changePasswordSafariViewController;
    WBSSavedPassword *_savedPassword;
    NSArray *_reusedSavedPasswords;
    BOOL _editing;
    SafariSettingsFeatureManager *_featureManager;
}

@property (nonatomic) BOOL showsChangePasswordControllerOnAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setValue:(id)a0 forSpecifier:(id)a1;
+ (id)_valueOfSpecifier:(id)a0;
+ (id)_specifierWithName:(id)a0 placeholder:(id)a1 keyboardType:(long long)a2 textChangeHandler:(id /* block */)a3;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willResignActive;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)setSpecifier:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)_edit:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)willBecomeActive;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_cancelEditing:(id)a0;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canBecomeFirstResponder;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_willHideUIMenuController:(id)a0;
- (void)safari_copyUserName:(id)a0;
- (void)safari_copyPassword:(id)a0;
- (void)safari_sharePassword:(id)a0;
- (void)safariViewControllerDidFinish:(id)a0;
- (void)_setEditing:(BOOL)a0;
- (void)_updateSpecifiers;
- (void)_updateRightBarButtonItem;
- (void)_endEditing:(id)a0;
- (void)_updateDoneButtonForWebsite:(id)a0 user:(id)a1 password:(id)a2;
- (void)_sharePassword:(id)a0 fromCell:(id)a1;
- (void)_refreshSpecifiers;
- (id)_warningFooterText;
- (void)_changePassword:(id)a0;
- (id)_sharePasswordMenuItem;
- (BOOL)_isShowingWeakOrReusedPassword;
- (BOOL)_savedUserIsEmpty;
- (BOOL)_savedPasswordIsEmpty;
- (BOOL)_isSpecifierForAutoFillItem:(id)a0;

@end
