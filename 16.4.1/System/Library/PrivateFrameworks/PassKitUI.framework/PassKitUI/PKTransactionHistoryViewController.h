@class PKDashboardViewControllerFooterView, UIImageView, PKAlignedContentContainerView, NSObject, PKDashboardViewControllerFooterContainer, PKNavigationController, PKFamilyMemberCollection, UIButton, PKDashboardDetailHeaderItemPresenter, NSString, PKAnimatedNavigationBarTitleView, PKPaymentTransaction, PKContactAvatarManager, PKTransactionSourceCollection, NSIndexPath;
@protocol OS_dispatch_source;

@interface PKTransactionHistoryViewController : PKDashboardViewController <CNAvatarViewDelegate> {
    PKDashboardViewControllerFooterView *_footer;
    PKDashboardViewControllerFooterContainer *_footerContainer;
    BOOL _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
    PKAlignedContentContainerView *_detailsButtonContainer;
    PKAlignedContentContainerView *_phoneButtonContainer;
    PKAlignedContentContainerView *_messageButtonContainer;
    UIButton *_detailsButton;
    UIButton *_phoneButton;
    UIButton *_messageButton;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _lastContentInset;
    double _headerHeight;
    PKNavigationController *_navigationController;
    NSIndexPath *_headerIndexPath;
    double _merchantHeaderAnimationProgress;
    PKAnimatedNavigationBarTitleView *_titleView;
    UIImageView *_titleIconImageView;
    NSString *_titleText;
    PKDashboardDetailHeaderItemPresenter *_headerPresenter;
    BOOL _isHeaderPinned;
}

@property (readonly, nonatomic) PKPaymentTransaction *transaction;
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (readonly, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (readonly, nonatomic) unsigned long long historyType;
@property (retain, nonatomic) PKContactAvatarManager *contactAvatarManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)_barButtonItems;
- (void)didMoveToParentViewController:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)updateGroup:(id)a0;
- (void)updateContent;
- (void)dealloc;
- (void)viewDidLoad;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)_handleInfoButtonTapped;
- (void)_handleMessageButtonTapped;
- (void)_handlePhoneButtonTapped;
- (BOOL)_shouldBlurButtons;
- (void)_showContactDetailsViewController;
- (void)_showMapsDetailsViewController;
- (void)_updateButtonConfigurationsDisablingBlur:(BOOL)a0;
- (void)_updateHeaderCellWithAnimationProgress:(id)a0;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)a0;
- (void)_updateNavigationBarIconWithLogoURL:(id)a0;
- (id)initWithFetcher:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4 physicalCards:(id)a5 featuredTransaction:(id)a6 selectedTransactions:(id)a7 transactionHistory:(id)a8;
- (id)initWithInstallmentPlan:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4 physicalCards:(id)a5;
- (id)initWithTransactionGroup:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4 physicalCards:(id)a5 fetcher:(id)a6 transactionHistory:(id)a7 detailViewStyle:(long long)a8;
- (id)initWithTransactionGroups:(id)a0 headerGroup:(id)a1 groupPresenter:(id)a2 regionUpdater:(id)a3 tokens:(id)a4 transactionSourceCollection:(id)a5 familyCollection:(id)a6 account:(id)a7 accountUserCollection:(id)a8 physicalCards:(id)a9;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;
- (void)updateGroups:(id)a0 headerGroup:(id)a1;

@end
