@class UIImageView, PKAlignedContentContainerView, NSObject, PKTransactionHistoryHeaderPresenter, PKNavigationController, PKFamilyMemberCollection, UIButton, NSString, PKSpendingSummaryFooterView, PKAnimatedNavigationBarTitleView, PKPaymentTransaction, PKSpendingSummaryFooterContainer, PKContactAvatarManager, PKTransactionSourceCollection, NSIndexPath;
@protocol OS_dispatch_source;

@interface PKTransactionHistoryViewController : PKDashboardViewController <CNAvatarViewDelegate> {
    PKSpendingSummaryFooterView *_footer;
    PKSpendingSummaryFooterContainer *_footerContainer;
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
    PKTransactionHistoryHeaderPresenter *_headerPresenter;
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

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)updateGroup:(id)a0;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)updateContent;
- (id)_barButtonItems;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransactionGroup:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4 fetcher:(id)a5 transactionHistory:(id)a6;
- (id)initWithFetcher:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4 featuredTransaction:(id)a5 selectedTransactions:(id)a6 transactionHistory:(id)a7;
- (id)initWithInstallmentPlan:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;
- (id)initWithTransactionGroups:(id)a0 headerGroup:(id)a1 groupPresenter:(id)a2 regionUpdater:(id)a3 tokens:(id)a4 transactionSourceCollection:(id)a5 familyCollection:(id)a6 account:(id)a7 accountUserCollection:(id)a8;
- (void)updateGroups:(id)a0 headerGroup:(id)a1;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)a0;
- (void)_updateHeaderCellWithAnimationProgress:(id)a0;
- (void)_updateButtonConfigurationsDisablingBlur:(BOOL)a0;
- (void)_updateNavigationBarIconWithLogoURL:(id)a0;
- (BOOL)_shouldBlurButtons;
- (void)_handleInfoButtonTapped;
- (void)_handlePhoneButtonTapped;
- (void)_handleMessageButtonTapped;
- (void)_showMapsDetailsViewController;
- (void)_showContactDetailsViewController;

@end
