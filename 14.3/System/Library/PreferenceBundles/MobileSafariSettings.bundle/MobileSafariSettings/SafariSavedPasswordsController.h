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

- (id)contentScrollView;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)editablePasswordTableViewControllerShouldShowSecurityRecommendationsItem:(id)a0;
- (void)handleAutoFillDrillInForEditablePasswordTableViewController:(id)a0;
- (void).cxx_destruct;
- (void)_applicationDidEnterForeground:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleResourceDictionaryWhenAlreadyPresented:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)hideContentUnavailableViewForEditablePasswordTableViewController:(id)a0;
- (void)editablePasswordTableViewController:(id)a0 showContentUnavailableViewForSearchQuery:(id)a1;
- (BOOL)editablePasswordTableViewControllerShouldShowAutoFillItem:(id)a0;
- (void)viewDidLoad;
- (void)_setUpAutoFillQuirksManager;
- (void)_authenticateSoon;
- (void)_processInitialResourceDictionary;

@end
