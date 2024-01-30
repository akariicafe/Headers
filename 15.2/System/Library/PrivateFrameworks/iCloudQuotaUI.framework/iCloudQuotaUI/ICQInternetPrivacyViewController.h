@class ICQInternetPrivacyDetailSpecifierProvider, ICQInternetPrivacyViewModel, NSString;
@protocol ICQInternetPrivacyDelegate;

@interface ICQInternetPrivacyViewController : PSListController <AAUISpecifierProviderDelegate, ICQInternetPrivacyDetailDelegate>

@property (retain, nonatomic) ICQInternetPrivacyDetailSpecifierProvider *detailSpecifierProvider;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (weak, nonatomic) id<ICQInternetPrivacyDelegate> specifierDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isEnabled;
- (void)statusDidChange;
- (void)_setupNavigationBar;
- (void).cxx_destruct;
- (void)showAlert:(id)a0;
- (void)reloadSpecifiersForProvider:(id)a0 oldSpecifiers:(id)a1 animated:(BOOL)a2;
- (void)specifierProvider:(id)a0 willBeginLoadingSpecifier:(id)a1;
- (void)specifierProvider:(id)a0 showViewController:(id)a1;
- (void)specifierProvider:(id)a0 didFinishLoadingSpecifier:(id)a1;
- (void)insertSpecifier:(id)a0 afterSpecifierNamed:(id)a1 animated:(BOOL)a2;
- (id)initWithViewModel:(id)a0 accountManager:(id)a1;
- (void)presentSystemStatus;
- (void)presentLearnMoreFrom:(id)a0;
- (void)presentIncompatibleSitesHelp;

@end
