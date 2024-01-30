@class PKBankAccountInformation, PKPaymentRequest, PKAccountEvent, NSDate, NSDecimalNumber, PKAccountWebServiceSchedulePaymentRequest, PKPeerPaymentAccount, PKPaymentAuthorizationCoordinator, NSString, PKAccount, PKPaymentPass, NSMutableSet, NSArray, PKPaymentService, PKPaymentWebService, NSError, PKAccountService;
@protocol PKAccountBillPaymentControllerDelegate;

@interface PKAccountBillPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPaymentWebService *_webService;
    PKPaymentService *_paymentService;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKPaymentAuthorizationCoordinator *_schedulePaymentAuthorizationCoordinator;
    NSError *_applePayTrustResponseError;
    PKBankAccountInformation *_bankInformation;
    PKPaymentPass *_pass;
    PKAccountService *_accountService;
    NSString *_currency;
    NSDecimalNumber *_totalPaymentAmount;
    NSDecimalNumber *_achPaymentAmount;
    NSDecimalNumber *_apcPaymentAmount;
    NSDecimalNumber *_peerPaymentBalance;
    PKPaymentRequest *_paymentRequest;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccountEvent *_billPaymentSuggestedAmountDataEvent;
    NSDate *_scheduledDate;
    NSString *_peerPaymentPassUniqueId;
    BOOL _accountPaymentSupportsPeerPaymentBalance;
    BOOL _peerPaymentAccountSupportsAccountPayments;
    BOOL _performingAction;
    BOOL _completedBillPayment;
    BOOL _fetchingData;
    NSError *_fetchingDataError;
    NSMutableSet *_dataFetchingCompletionHandlers;
}

@property (retain, nonatomic) PKAccount *account;
@property (weak, nonatomic) id<PKAccountBillPaymentControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *fundingSources;
@property (retain, nonatomic) NSArray *payments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void)_accountDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_achPayment;
- (id)initWithAccount:(id)a0 paymentPass:(id)a1;
- (void)_updateAmounts;
- (void)_fetchFundingSources;
- (BOOL)_accountPaymentSupportsPeerPaymentForDate:(id)a0;
- (BOOL)_accountPaymentSupportsPeerPayment;
- (void)_completeFetchingFundingSources;
- (void)_billPaymentHasCompletedWithState:(unsigned long long)a0 error:(id)a1;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)a0 completion:(id /* block */)a1;
- (id)_paymentSummaryItems;
- (void)_updateUseApplePayCashSetting:(BOOL)a0;
- (id)_createSchedulePaymentRequest;
- (id)_bankAccountsForFundingSources:(id)a0;
- (void)performBillPaymentActionWithAmount:(id)a0 billPaymentSuggestedAmountDataEvent:(id)a1;
- (void)performBillPaymentActionWithAmount:(id)a0 scheduledDate:(id)a1 billPaymentSuggestedAmountDataEvent:(id)a2;
- (id)_paymentRequestWithSignatureRequest:(id)a0 bankAccounts:(id)a1;
- (id)_apcPayment;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldUsePeerPaymentBalance;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)performBillPaymentActionWithAmount:(id)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeApplePayTrustSignature:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didUpdateAccountServicePaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)canPerformBillPaymentWithAmount:(id)a0 scheduledDate:(id)a1 completion:(id /* block */)a2;

@end
