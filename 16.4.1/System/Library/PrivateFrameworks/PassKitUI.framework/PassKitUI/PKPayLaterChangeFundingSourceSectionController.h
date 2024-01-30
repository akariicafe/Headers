@class PKPayLaterPaymentIntentController, PKPayLaterSwitchRow, NSMutableDictionary, PKPayLaterButtonRow, PKPeerPaymentAccount, NSDateFormatter, PKPayLaterPaymentSource, NSString, PKPaymentPass, PKPayLaterFinancingPlan, PKPassSnapshotter, NSArray, PKAccountWebServiceFinancingPlanPaymentIntentResponse;
@protocol PKPayLaterChangeFundingSourceSectionControllerDelegate;

@interface PKPayLaterChangeFundingSourceSectionController : PKPayLaterSectionController <PKPaymentSetupDelegate> {
    PKPeerPaymentAccount *_peerPaymentAccount;
    id<PKPayLaterChangeFundingSourceSectionControllerDelegate> _delegate;
    PKPassSnapshotter *_snapshotter;
    PKPaymentPass *_payLaterPass;
    BOOL _autoPayment;
    BOOL _preventTouches;
    NSArray *_availableFundingSources;
    PKPayLaterButtonRow *_addPaymentMethodRow;
    PKPayLaterSwitchRow *_autoPaySwitchRow;
    PKPayLaterPaymentSource *_selectedFundingSource;
    NSString *_selectedFundingSourceCellIdentifier;
    NSMutableDictionary *_paymentSourceRows;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (retain, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController;
@property (retain, nonatomic) PKAccountWebServiceFinancingPlanPaymentIntentResponse *intentDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureFundingSourceSection:(id)a0;
- (void)_configureAddPaymentMethodSection:(id)a0;
- (void)_configureAutoPaymentAgreementSection:(id)a0;
- (void)_configureAutoPaymentNextPaymentSection:(id)a0;
- (void)_configureAutoPaymentSection:(id)a0;
- (void)_handleAutoPaySwitchEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_passImageSize;
- (id)_paymentSourceRowForBankFundingSource:(id)a0;
- (id)_paymentSourceRowForPassFundingSource:(id)a0;
- (void)_presentAutoPayOverdueAlertWithCompletion:(id /* block */)a0;
- (void)_presentMakePaymentWithCompletion:(id /* block */)a0;
- (void)_presentProvisioningFlowFromRow:(id)a0;
- (id)_rowForPaymentSource:(id)a0;
- (BOOL)_shouldShowAddPaymentMethodSection;
- (BOOL)_shouldShowAutoPaymentAgreementSection;
- (BOOL)_shouldShowNextPaymentSection;
- (void)_showButtonSpinnerForRow:(id)a0 showSpinner:(BOOL)a1;
- (id)_snapshotForPass:(id)a0 completion:(id /* block */)a1;
- (id)_unavailablePaymentSourceRowForFundingSource:(id)a0;
- (void)_updateCachedValues;
- (id)footerContentForSectionIdentifier:(id)a0;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterPass:(id)a1 paymentIntentController:(id)a2 intentDetails:(id)a3 dynamicContentPage:(id)a4 delegate:(id)a5;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)paymentSetupDidFinish:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
