@class UIActivityIndicatorView, NSString, PKPaymentTransactionCellController, UITableViewHeaderFooterView, UIImageView, PKPaymentTransaction, PKTransactionSource, PKBusinessChatController, PKPaymentWebService, PKAccount, UIBarButtonItem, PKPaymentService;

@interface PKReportIssueViewController : PKSectionTableViewController <PKPaymentServiceDelegate, UITextViewDelegate> {
    PKPaymentTransaction *_transaction;
    PKTransactionSource *_transactionSource;
    PKAccount *_account;
    PKPaymentService *_paymentService;
    PKPaymentTransactionCellController *_transactionCellController;
    PKBusinessChatController *_businessChatController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_submitButton;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _hasIssueSelected;
    long long _selectedIssue;
    BOOL _hasMapsIssueSelected;
    long long _selectedMapsIssue;
    BOOL _hasDisputeTypeSelected;
    long long _selectedDisputeType;
    BOOL _reportingIssue;
    NSString *_statementName;
    BOOL _cancelingPayment;
    BOOL _canPerformUnrecognizedTransaction;
    BOOL _canPerformDispute;
    BOOL _canPerformCancelAccountServicePayment;
    BOOL _canPerformOther;
    BOOL _canPerformIncorrectMerchant;
    UITableViewHeaderFooterView *_footerView;
    UIImageView *_logoView;
    PKPaymentWebService *_paymentWebService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canReportIssueForTransaction:(id)a0 transactionSource:(id)a1;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (void)_resetMapsMerchantAndBrandWithIssueReportIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithTransaction:(id)a0 transactionSource:(id)a1 account:(id)a2 detailViewStyle:(long long)a3;
- (void)_cancelButtonTapped:(id)a0;
- (void)_updateNavigationButtons;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_submitButtonTapped:(id)a0;
- (void)_updateFooterPlacement;
- (id)_statementName;
- (unsigned long long)_numberOfIssueTypesEnabled;
- (id)_transactionCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_cancelPayment;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)textViewDidChange:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)_statementNameCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_issueTypeCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_disputeTypeCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_mapsIssueCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_commentsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_handleIssueTypeSelectedInTableView:(id)a0 atIndexPath:(id)a1;
- (void)_handleMapsIssueTypeSelectedInTableView:(id)a0 atIndexPath:(id)a1;
- (void)_handleDisputeTypeSelectedInTableView:(id)a0 atIndexPath:(id)a1;
- (long long)_issueTypeForRowIndex:(long long)a0;
- (long long)_rowIndexForIssueType:(long long)a0;
- (id)_formattedStatementNameFromRawName:(id)a0;
- (BOOL)_issueTypeEnabled:(long long)a0;
- (void)_reportIssueInBusinessChat;
- (void)_reportIssueToMaps;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 dismissAfter:(BOOL)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
