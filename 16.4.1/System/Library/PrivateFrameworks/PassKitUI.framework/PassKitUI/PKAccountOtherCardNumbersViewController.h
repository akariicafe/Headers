@class PKPhysicalCard, PKPaymentPass;

@interface PKAccountOtherCardNumbersViewController : PKSettingsTableViewController <PKVirtualCardEnrollmentViewControllerDelegate> {
    PKPhysicalCard *_physicalCard;
    PKPaymentPass *_paymentPass;
    unsigned long long _accountFeatureIdentifier;
    long long _context;
    BOOL _didBeginPassManagementSubject;
}

- (id)_localizedStringForKey:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_beginReportingIfNecessary;
- (id)_analyticsPageTag;
- (void)_appendApplePayCardNumberSectionToConfiguration:(id)a0;
- (void)_appendNetworkSectionToConfiguration:(id)a0;
- (void)_appendPhysicalCardSectionToConfiguration:(id)a0;
- (void)_appendSetUpVirtualCardSectionToConfiguration:(id)a0;
- (id)_applePayCardNumberFooterWithTableView:(id)a0;
- (void)_endReportingIfNecessary;
- (BOOL)_isVirtualCardSupportedButNotEnabled;
- (id)_setUpVirtualCardFooterWithTableView:(id)a0;
- (id)_titaniumCardNumberFooterWithTableView:(id)a0;
- (void)_updateCardNumbersConfigurationAnimated:(BOOL)a0;
- (id)initWithPaymentPass:(id)a0 accountFeatureIdentifier:(unsigned long long)a1 context:(long long)a2;
- (id)initWithPhysicalCard:(id)a0 paymentPass:(id)a1 accountFeatureIdentifier:(unsigned long long)a2 context:(long long)a3;
- (void)virtualCardEnrollmentViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;

@end
