@class UISearchController, NSArray, NSString;

@interface PUILockdownModeWebController : PSListController <UISearchResultsUpdating>

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) NSArray *_allSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBecomeActive;
- (void)reloadSpecifiers;
- (void)updateSearchResultsForSearchController:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)dataDidChange;
- (void)didTapHeaderLearnMoreLink:(id)a0;
- (id)isSpecifierEnabled:(id)a0;
- (void)presentAboutController;
- (void)refreshLinkStatusInParent;
- (id)safariSettingsBundle;
- (void)setAppLockdownModeEnabled:(id)a0 forSpecifier:(id)a1;
- (BOOL)shouldShowBundleID:(id)a0;

@end
