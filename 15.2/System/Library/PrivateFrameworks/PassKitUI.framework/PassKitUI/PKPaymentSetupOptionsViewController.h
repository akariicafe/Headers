@class UIActivityIndicatorView, NSString, PKPaymentProvisioningController, PKPaymentSetupDockView, PKPaymentSetupHeroTitleView, PKPaymentSetupPrivacyLinkSectionController, OBPrivacyLinkController, _PKUIKVisibilityBackdropView, UIBarButtonItem, PKPaymentSetupNoResultsView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupOptionsViewController : PKDynamicCollectionViewController <PKPaymentSetupHeroTitleViewDelegate, _PKUIKVisibilityBackdropViewDelegate> {
    PKPaymentSetupHeroTitleView *_headerView;
    double _headerHeight;
    PKPaymentSetupNoResultsView *_noResultsView;
    BOOL _viewDidAppear;
    BOOL _isSearching;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    BOOL _wasBackHidden;
    UIBarButtonItem *_spinningNavBarItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    PKPaymentSetupDockView *_dockView;
    PKPaymentSetupPrivacyLinkSectionController *_privacyLinkSectionController;
    _PKUIKVisibilityBackdropView *_backdropView;
    double _backdropWeight;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (nonatomic) BOOL showSearchBar;
@property (nonatomic) BOOL showNoResultsView;
@property (nonatomic) BOOL showHeaderSpinner;
@property (nonatomic) BOOL showNavigationBarSpinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2;
- (void)setSections:(id)a0 animated:(BOOL)a1;
- (void)_keyboardSizeDidChange:(id)a0;
- (void)_addDockViewToCollectionViewIfNeeded;
- (void)setSearchBarDefaultText:(id)a0;
- (void)searchTextDidChangeTo:(id)a0;
- (void)searchBarTextDidBeginEditing;
- (void)searchBarTextDidEndEditing;
- (void)searchBarCancelButtonClicked;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;
- (void)setNoResultsSubtitle:(id)a0;
- (void)setNoResultsActionButtonTitle:(id)a0 target:(id)a1 action:(SEL)a2;

@end
