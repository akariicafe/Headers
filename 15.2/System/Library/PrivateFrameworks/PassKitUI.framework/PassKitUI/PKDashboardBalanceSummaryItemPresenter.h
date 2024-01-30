@class NSData, PKDashboardButtonCollectionViewCell, NSString, PKDashboardTitleMessageCell, UIImage, PKPaymentTransactionCollectionViewCell, QLItem, NSDateFormatter, PKDashboardCurrencyAmountCell, QLPreviewController;

@interface PKDashboardBalanceSummaryItemPresenter : NSObject <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, PKDashboardItemPresenter> {
    PKPaymentTransactionCollectionViewCell *_sampleTransactionCell;
    PKDashboardButtonCollectionViewCell *_sampleButtonCell;
    PKDashboardCurrencyAmountCell *_sampleCurrencyCell;
    PKDashboardButtonCollectionViewCell *_downloadPDFCell;
    PKDashboardButtonCollectionViewCell *_exportStatementDataCell;
    PKDashboardTitleMessageCell *_sampleTitleMessageCell;
    NSDateFormatter *_formatterMonthYear;
    NSDateFormatter *_formatterMonthAndDay;
    NSDateFormatter *_formatterMonthDayYear;
    NSDateFormatter *_formatterMonth;
    UIImage *_statementIcon;
    NSData *_pdfData;
    NSData *_exportedStatementData;
    QLItem *_pdfItem;
    QLItem *_exportedStatementDataItem;
    QLPreviewController *_previewController;
}

@property (nonatomic) long long cellStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (id)provideDataForItem:(id)a0;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void).cxx_destruct;
- (Class)itemClass;
- (id)init;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3 forSizing:(BOOL)a4;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (id)_statementCellTitleForItem:(id)a0;
- (void)_downloadAndPresentStatementForItem:(id)a0 inCollectionView:(id)a1;
- (void)_selectFileFormatForExportedStatementDataForItem:(id)a0 inCollectionView:(id)a1;
- (void)_configureStatementBalanceCell:(id)a0 forItem:(id)a1;
- (void)_configureStatementCell:(id)a0 forItem:(id)a1;
- (void)_configureSpendingCell:(id)a0 forItem:(id)a1;
- (void)_configureInstallmentBalanceCell:(id)a0 forItem:(id)a1;
- (void)_configureTransactionLimitCell:(id)a0 forItem:(id)a1;
- (void)_configureMonthlySpendLimitCell:(id)a0 forItem:(id)a1;
- (void)_configureMergeBalanceCell:(id)a0 forItem:(id)a1;
- (void)_configureTotalBalanceCell:(id)a0 forItem:(id)a1;
- (void)_configureInterestCell:(id)a0 forItem:(id)a1;
- (void)_configurePaymentsAndCreditsCell:(id)a0 forItem:(id)a1;
- (void)_configureDailyCashCell:(id)a0 forItem:(id)a1;
- (void)_configureStatementDownloadCell:(id)a0 forItem:(id)a1;
- (void)_configureExportStatementDataCell:(id)a0 forItem:(id)a1;
- (void)_configureMergeNoticeCell:(id)a0 forItem:(id)a1;
- (id)statementIcon;
- (BOOL)_statementIsFromMonthPriorToSummaryForItem:(id)a0;
- (id)_readableFileTypeForFormat:(id)a0 feature:(unsigned long long)a1;
- (void)_downloadExportedStatementDataForItem:(id)a0 withFileFormat:(id)a1 inCollectionView:(id)a2;

@end
