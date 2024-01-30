@class PKAccountWebServiceSchedulePaymentRequest, UIViewController, PKApplePayTrustSignatureRequest, PKAccountAutomaticPaymentsHeroViewController, PKAccountService, PKCurrencyAmount, PKPaymentAuthorizationCoordinator, NSError, NSString, PKAccountAutomaticPaymentsSetupCompleteViewController, NSCalendar, PKAccountAutomaticPaymentsDateViewController, NSArray, PKBankAccountInformation, PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController, PKAccountAutomaticPaymentsPresetViewController, PKAccountAutomaticPaymentsConfigurationViewController, PKAccount, PKPaymentWebService, NSDate, NSTimeZone;
@protocol PKAccountAutomaticPaymentsControllerDelegate;

@interface PKAccountAutomaticPaymentsController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKAccountService *_accountService;
    PKPaymentWebService *_paymentWebService;
    NSCalendar *_productCalendar;
    NSTimeZone *_productTimeZone;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKBankAccountInformation *_bankInformation;
    PKApplePayTrustSignatureRequest *_applePayTrustSignatureRequest;
    NSError *_performScheduleAutomaticPaymentsError;
    UIViewController *_viewPaymentController;
    PKAccountAutomaticPaymentsHeroViewController *_heroViewController;
    PKAccountAutomaticPaymentsPresetViewController *_presetViewController;
    PKAccountAutomaticPaymentsDateViewController *_dateViewController;
    PKAccountAutomaticPaymentsConfigurationViewController *_configurationViewController;
    PKAccountAutomaticPaymentsSetupCompleteViewController *_setupCompleteViewController;
    PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController *_minimumPaymentDisclosureViewController;
    id /* block */ _performScheduleAutomaticPaymentsCompletion;
    PKPaymentAuthorizationCoordinator *_paymentAuthorizationCoordinator;
    BOOL _authorized;
}

@property (readonly, nonatomic) unsigned long long featureIdentifier;
@property (readonly, nonatomic) long long paymentSetupContext;
@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) NSDate *paymentDate;
@property (nonatomic) long long paymentFrequency;
@property (nonatomic) long long scheduledDay;
@property (nonatomic) long long paymentPreset;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (retain, nonatomic) NSArray *fundingSources;
@property (retain, nonatomic) NSArray *automaticPayments;
@property (weak, nonatomic) id<PKAccountAutomaticPaymentsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeApplePayTrustSignature:(id)a1 handler:(id /* block */)a2;
- (id)_schedulePaymentRequest;
- (void)paymentAuthorizationCoordinator:(id)a0 didUpdateAccountServicePaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_resetPaymentConfiguration;
- (void)_performPaymentRequest:(id)a0;
- (void)presentNextViewControllerFromViewController:(id)a0;
- (void)performScheduleAutomaticPayments:(id /* block */)a0;
- (void)nextViewControllerFromViewController:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithAccountService:(id)a0 paymentWebService:(id)a1 account:(id)a2 context:(long long)a3;
- (id)alertControllerForScheduledDate:(id)a0;
- (long long)minimumPaymentDayForPreset:(long long)a0;
- (BOOL)canPerformScheduleAutomaticPaymentsWithPreset:(long long)a0 frequency:(long long)a1 amount:(id)a2 paymentDate:(id)a3;
- (void)performScheduleAutomaticPaymentsFromViewController:(id)a0;
- (id)_paymentRequest;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)a0 completion:(id /* block */)a1;
- (id)_paymentSummaryItems;
- (id)_bankAccountsForFundingSources:(id)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;

@end
