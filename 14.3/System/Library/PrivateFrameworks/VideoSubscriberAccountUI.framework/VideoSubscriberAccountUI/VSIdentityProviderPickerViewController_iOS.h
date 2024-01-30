@class NSString, VSIdentityProviderTableViewDataSource, VSIdentityProvider, VSOnboardingInfoCenter, UISearchController, VSIdentityProviderFilter, NSArray, VSSearchBarDelegate, VSFontCenter;
@protocol VSIdentityProviderPickerViewControllerDelegate;

@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <UISearchControllerDelegate, VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController>

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter;
@property (retain, nonatomic) VSIdentityProviderFilter *filter;
@property (retain, nonatomic) VSSearchBarDelegate *searchBarDelegate;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *unfilteredDataSource;
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *filteredDataSource;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (nonatomic, getter=isDismissingSearchDueToSelection) BOOL dismissingSearchDueToSelection;
@property (retain, nonatomic) VSIdentityProvider *selectedIdentityProvider;
@property (nonatomic) BOOL sectionContentInsetInitialized;
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

- (void)willMoveToParentViewController:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (BOOL)_isRegularWidth;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)didDismissSearchController:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)deselectSelectedProviderAnimated:(BOOL)a0;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)a0;
- (void)_updateTableHeaderTitle;
- (id)_titleForTableHeaderView;
- (void)_didPickIdentityProvider:(id)a0;
- (void)_didPickAdditionalIdentityProviders;
- (void)_performSelectionForIdentityProvider:(id)a0;
- (id)titleForTableFooterView;
- (void)_showAboutPrivacy:(id)a0;

@end
