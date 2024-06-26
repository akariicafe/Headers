@class PKBalanceSummaryFetcher, PKDashboardFooterTextView, PKDashboardBalanceSummaryItemPresenter, PKDashboardBalanceItem, PKDashboardBalancePresenter, PKDashboardBalanceSummaryItem, PKDashboardTransactionFetcher, PKFamilyMemberCollection, PKBalanceSummary, NSDictionary, NSDateFormatter, PKAccount, NSString, PKCreditAccountStatement, PKDashboardTitleHeaderView, NSArray, PKAccountUserCollection, PKPaymentWebService, PKTransactionSourceCollection, PKCreditAccountSummary;

@interface PKCreditBalanceDetailsViewController : UICollectionViewController <PKAccountServiceObserver> {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    unsigned long long _feature;
    PKCreditAccountStatement *_statement;
    PKCreditAccountStatement *_previousStatement;
    PKBalanceSummaryFetcher *_fetcher;
    PKCreditAccountSummary *_accountSummary;
    PKPaymentWebService *_webService;
    PKFamilyMemberCollection *_familyCollection;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKDashboardBalancePresenter *_balancePresenter;
    PKDashboardBalanceSummaryItemPresenter *_balanceSummaryItemPresenter;
    PKDashboardBalanceItem *_balanceItem;
    PKDashboardBalanceSummaryItem *_lastStatementSummaryItem;
    PKDashboardBalanceSummaryItem *_currentSpendingSummaryItem;
    PKDashboardBalanceSummaryItem *_interestSummaryItem;
    PKDashboardBalanceSummaryItem *_paymentsAndCreditsSummaryItem;
    PKDashboardBalanceSummaryItem *_paymentsSummaryItem;
    PKDashboardBalanceSummaryItem *_creditsSummaryItem;
    PKDashboardBalanceSummaryItem *_dailyCashSummaryItem;
    PKDashboardBalanceSummaryItem *_installmentBalanceSummaryItem;
    PKDashboardBalanceSummaryItem *_creditLimitSummaryItem;
    PKDashboardBalanceSummaryItem *_totalBalanceSummaryItem;
    PKDashboardBalanceSummaryItem *_availableCreditSummaryItem;
    NSArray *_totalBalanceItems;
    NSArray *_spendLimitItems;
    PKDashboardBalanceSummaryItem *_accountMergingItem;
    NSArray *_mergeBalances;
    NSArray *_usageItems;
    PKDashboardBalanceSummaryItem *_statementDownloadSummaryItem;
    PKDashboardBalanceSummaryItem *_exportTransactionDataSummaryItem;
    NSArray *_buttonItems;
    PKBalanceSummary *_balanceSummary;
    NSArray *_statements;
    NSDictionary *_statementsByYear;
    NSArray *_sortedYears;
    NSDateFormatter *_monthYearFormatter;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKDashboardFooterTextView *_sampleFooterView;
    NSArray *_sectionMap;
    unsigned long long _numberOfStaticSections;
    long long _style;
    NSString *_pageTagForAnalyticsReporting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)statementsChangedForAccountIdentifier:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_reloadData;
- (unsigned long long)_sectionForIndex:(unsigned long long)a0;
- (id)initWithStyle:(long long)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 webService:(id)a3 account:(id)a4 accountUserCollection:(id)a5 statement:(id)a6 previousStatements:(id)a7;
- (void)_reportEventForPassIfNecessary:(id)a0;
- (void)showStatement:(id)a0 style:(long long)a1;
- (id)_createSummaryItemOfType:(unsigned long long)a0;
- (BOOL)_statementIsFromMonthOfMerge;
- (id)_summaryItemForIndexPath:(id)a0;
- (BOOL)_hasHeaderForSectionIndex:(unsigned long long)a0;
- (void)_configureHeaderView:(id)a0 inSectionIndex:(unsigned long long)a1;
- (BOOL)_hasFooterForSectionIndex:(unsigned long long)a0;
- (void)_configureFooterView:(id)a0 inSectionIndex:(unsigned long long)a1;
- (id)_footerForTransactionLimitSection;
- (void)_updateStatements;
- (void)_sortStatementsForPresentation;

@end
