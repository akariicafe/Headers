@class NSDate, PKTransactionSource, PKSpendingSummaryPresenter, PKTransactionGroupItemPresenter, NSDateFormatter, PKSpendingSummaryLayout, NSCalendar, NSString, PKSpendingSummaryFooterView, PKSpendingSummary, PKAccount, UIGestureRecognizer, PKDashboardTitleHeaderView, NSArray, PKAccountServiceAccountResolutionController, PKDashboardFooterTextView, PKAccountService;
@protocol PKSpendingSingleSummaryViewControllerDelegate;

@interface PKSpendingSingleSummaryViewController : UICollectionViewController <PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKSpendingSummaryFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKSpendingSummaryResponder> {
    PKTransactionSource *_transactionSource;
    PKAccount *_account;
    PKAccountService *_accountService;
    unsigned long long _feature;
    PKSpendingSummaryFooterView *_currentFooter;
    BOOL _footerNeedsConfiguration;
    unsigned long long _summaryType;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _hasTransactions;
    NSCalendar *_currentCalendar;
    double _transitionAlpha;
    NSArray *_currentMonthTransactions;
    NSArray *_upcomingScheduledPayments;
    NSDateFormatter *_formatterMonth;
    NSDateFormatter *_formatterFullMonth;
    NSDateFormatter *_formatterDay;
    NSDateFormatter *_formatterYear;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKSpendingSummaryPresenter *_summaryPresenter;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKDashboardFooterTextView *_sampleFooterView;
    PKAccountServiceAccountResolutionController *_resolutionController;
    PKSpendingSummaryLayout *_layout;
    BOOL _isLowEndDevice;
}

@property (weak, nonatomic) id<PKSpendingSingleSummaryViewControllerDelegate> scrollingDelegate;
@property (readonly, nonatomic) PKSpendingSummary *summary;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) unsigned long long selectionType;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)footer;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (id)initWithTransationSource:(id)a0 account:(id)a1 transactionGroupPresenter:(id)a2 summaryPresenter:(id)a3 currentMonthTransactions:(id)a4 upcomingScheduledPayments:(id)a5;
- (void)accountServiceAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)setSummary:(id)a0 swap:(BOOL)a1;
- (void)setAlphaForTransition:(double)a0;
- (void)_accountsChanged:(id)a0;
- (id)indexPathForSummary;
- (void)_configureHeaderView:(id)a0 inSection:(unsigned long long)a1;
- (void)_configureFooterView:(id)a0 inSection:(unsigned long long)a1;
- (void)_configureFooter;
- (unsigned long long)_aggregateCellAtIndex:(unsigned long long)a0;
- (long long)_numberOfNonSpendingTransactionTypeRowsEnabled;
- (void)_applyMaskToCell:(id)a0 firstInSection:(BOOL)a1 lastInSection:(BOOL)a2;
- (unsigned long long)_nonSpendingTransactionTypeForRow:(long long)a0;
- (id)_nonSpendingTransactionGroupForType:(unsigned long long)a0;
- (BOOL)_hasHeaderForSection:(unsigned long long)a0;
- (BOOL)_hasFooterForSection:(unsigned long long)a0;
- (void)buttonTappedInFooterView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
