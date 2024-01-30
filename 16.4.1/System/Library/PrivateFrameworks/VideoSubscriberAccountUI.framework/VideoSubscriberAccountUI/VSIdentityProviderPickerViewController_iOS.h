@class NSString, VSIdentityProviderTableViewDataSource, VSIdentityProvider, VSOnboardingInfoCenter, UISearchController, VSIdentityProviderFilter, NSDictionary, NSArray, VSSearchBarDelegate, VSFontCenter, VSStorefrontFilter;
@protocol VSIdentityProviderPickerViewControllerDelegate;

@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController>

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter;
@property (retain, nonatomic) VSIdentityProviderFilter *filter;
@property (retain, nonatomic) VSSearchBarDelegate *searchBarDelegate;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *unfilteredDataSource;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *filteredDataSource;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) VSIdentityProvider *selectedIdentityProvider;
@property (nonatomic) BOOL sectionContentInsetInitialized;
@property (retain, nonatomic) NSDictionary *providersByStorefrontCountryCode;
@property (retain, nonatomic) NSArray *tvProviderSupportedStorefronts;
@property (retain, nonatomic) NSArray *identityProvidersToDisplay;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) VSStorefrontFilter *storefrontFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSIdentityProviderPickerViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (copy, nonatomic) NSArray *identityProviders;
@property (nonatomic) unsigned long long additionalProvidersMode;
@property (copy, nonatomic) NSString *requestingAppDisplayName;
@property (copy, nonatomic) NSString *resourceTitle;
@property (copy, nonatomic) NSString *requestedStorefrontCountryCode;
@property (copy, nonatomic) NSArray *allStorefronts;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (void)tableViewDidFinishReload:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)_cancelButtonPressed:(id)a0;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;
- (void)_didPickAdditionalIdentityProviders;
- (void)_didPickIdentityProvider:(id)a0;
- (void)_didPickStorefront:(id)a0;
- (void)_dismissSearchController;
- (void)_performSelectionForIdentityProvider:(id)a0;
- (BOOL)_shouldInsetListView;
- (void)_showAboutPrivacy:(id)a0;
- (id)_titleForTableHeaderView;
- (id)_titleForViewController;
- (void)_updateTableHeaderTitle;
- (void)deselectSelectedProviderAnimated:(BOOL)a0;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)a0;
- (void)setRequestedStorefrontCountryCode:(id)a0 defaultToDeveloperProviders:(BOOL)a1;
- (id)titleForTableFooterView;

@end
