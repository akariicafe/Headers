@class PKSpendingSummaryFooterContainer, NSString, PKContinuousButton, PKSpendingSummaryFooterView, UIImageView, PKPaymentTransaction, PKTransactionSource, NSObject, PKNavigationController, PKAnimatedNavigationBarTitleView, NSIndexPath;
@protocol OS_dispatch_source;

@interface PKTransactionHistoryViewController : PKDashboardViewController <CNAvatarViewDelegate> {
    PKSpendingSummaryFooterView *_footer;
    PKSpendingSummaryFooterContainer *_footerContainer;
    BOOL _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
    PKContinuousButton *_detailsButton;
    PKContinuousButton *_phoneButton;
    PKContinuousButton *_messageButton;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _lastContentInset;
    double _headerHeight;
    PKNavigationController *_navigationController;
    NSIndexPath *_headerIndexPath;
    double _merchantHeaderAnimationProgress;
    PKAnimatedNavigationBarTitleView *_titleView;
    UIImageView *_titleIconImageView;
    NSString *_titleText;
    BOOL _isHeaderPinned;
}

@property (readonly, nonatomic) PKPaymentTransaction *transaction;
@property (readonly, nonatomic) PKTransactionSource *transactionSource;
@property (readonly, nonatomic) unsigned long long historyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)updateContent;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)a0;
- (void)_updateHeaderCellWithAnimationProgress:(id)a0;
- (void)_updateNavigationBarIconWithLogoURL:(id)a0;
- (void)_handleInfoButtonTapped:(id)a0;
- (void)_handlePhoneButtonTapped:(id)a0;
- (void)_handleMessageButtonTapped:(id)a0;
- (id)_barButtonItems;
- (id)initWithTransactionGroups:(id)a0 headerGroup:(id)a1 groupPresenter:(id)a2 regionUpdater:(id)a3 tokens:(id)a4 transactionSource:(id)a5 account:(id)a6;
- (void)updateGroups:(id)a0 headerGroup:(id)a1;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)updateGroup:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithTransactionGroup:(id)a0 transactionSource:(id)a1 account:(id)a2 fetcher:(id)a3 transactionHistory:(id)a4;
- (id)initWithFetcher:(id)a0 transactionSource:(id)a1 account:(id)a2 featuredTransaction:(id)a3 selectedTransactions:(id)a4 transactionHistory:(id)a5;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;
- (id)initWithInstallmentPlan:(id)a0 transactionSource:(id)a1 account:(id)a2;
- (void)_showMapsDetailsViewController;
- (void)_showContactDetailsViewController;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
