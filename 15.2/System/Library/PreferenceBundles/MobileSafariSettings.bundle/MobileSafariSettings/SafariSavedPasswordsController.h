@class NSString, _SFSiteMetadataManager, _UIContentUnavailableView, NSDictionary, _SFEditablePasswordTableViewController, UIViewController, WBSAutoFillQuirksManager, _SFPasswordManagerLockedView;

@interface SafariSavedPasswordsController : SafariAutoFillListController <_SFEditablePasswordTableViewControllerDelegate, PSListControllerURLHandler, _SFSettingsAuthenticationRequiring> {
    _SFEditablePasswordTableViewController *_editablePasswordTableViewController;
    NSDictionary *_initialResourceDictionary;
    _SFSiteMetadataManager *_siteMetadataManager;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    _UIContentUnavailableView *_contentUnavailableView;
    UIViewController *_lockedTopViewController;
    _SFPasswordManagerLockedView *_passwordManagerLockedView;
    NSString *_lockedViewControllerTitle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *authenticationPrompt;
@property (readonly, nonatomic) BOOL showsAuthenticationPromptAsTitle;
@property (nonatomic) BOOL hasBeenAuthenticated;

- (void)_applicationDidBecomeActive:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_applicationDidResignActive:(id)a0;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)handleResourceDictionaryWhenAlreadyPresented:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_applicationDidEnterForeground:(id)a0;
- (void)hideContentUnavailableViewForEditablePasswordTableViewController:(id)a0;
- (void)editablePasswordTableViewController:(id)a0 showContentUnavailableViewForSearchQuery:(id)a1;
- (BOOL)editablePasswordTableViewControllerShouldShowAutoFillItem:(id)a0;
- (BOOL)editablePasswordTableViewControllerShouldShowSecurityRecommendationsItem:(id)a0;
- (void)handleAutoFillDrillInForEditablePasswordTableViewController:(id)a0;
- (void)_setUpAutoFillQuirksManager;
- (void)_authenticateSoon;
- (void)_tearDownLockView;
- (void)_processInitialResourceDictionary;

@end
