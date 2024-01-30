@class NSError, PKAccountAutomaticPaymentsSetupCompleteViewController, PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController, NSDate, PKPaymentAuthorizationCoordinator, PKAccountWebServiceSchedulePaymentRequest, NSTimeZone, UIViewController, NSCalendar, NSString, PKAccount, PKAccountAutomaticPaymentsPresetViewController, PKApplePayTrustSignatureRequest, PKAccountAutomaticPaymentsConfigurationViewController, PKAccountAutomaticPaymentsDateViewController, NSArray, PKAccountAutomaticPaymentsHeroViewController, PKPaymentWebService, PKCurrencyAmount, PKAccountService;
@protocol PKAccountAutomaticPaymentsControllerDelegate;

@interface PKAccountAutomaticPaymentsController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKAccountService *_accountService;
    PKPaymentWebService *_paymentWebService;
    NSCalendar *_productCalendar;
    NSTimeZone *_productTimeZone;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
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

- (void).cxx_destruct;
- (id)_paymentRequest;
- (void)_addNewBankAccountIfNecessary:(id)a0;
- (id)_paymentSummaryItems;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)a0 completion:(id /* block */)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeApplePayTrustSignature:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didUpdateAccountServicePaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_performPaymentRequest:(id)a0;
- (void)_resetPaymentConfiguration;
- (id)_schedulePaymentRequestWithBankAccount:(id)a0;
- (id)alertControllerForScheduledDate:(id)a0;
- (BOOL)canPerformScheduleAutomaticPaymentsWithPreset:(long long)a0 frequency:(long long)a1 amount:(id)a2 paymentDate:(id)a3;
- (id)initWithAccountService:(id)a0 paymentWebService:(id)a1 account:(id)a2 context:(long long)a3;
- (long long)minimumPaymentDayForPreset:(long long)a0;
- (void)nextViewControllerFromViewController:(id)a0 withCompletion:(id /* block */)a1;
- (void)performScheduleAutomaticPayments:(id /* block */)a0;
- (void)performScheduleAutomaticPaymentsFromViewController:(id)a0;
- (void)presentNextViewControllerFromViewController:(id)a0;

@end
