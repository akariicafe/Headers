@class NSData, NSString, PKPaymentTransaction, NSObject, NPKPaymentBarcode, PKAssertion, PKPaymentPass, PKPaymentService;
@protocol OS_dispatch_source, OS_dispatch_queue, NPKBarcodePaymentSessionDelegate;

@interface NPKBarcodePaymentSession : NSObject <PKPaymentServiceDelegate>

@property (retain, nonatomic) NPKPaymentBarcode *currentPaymentBarcode;
@property (nonatomic) unsigned long long currentTransactionStatus;
@property (retain, nonatomic) PKPaymentTransaction *currentTransaction;
@property (nonatomic) BOOL sessionStarted;
@property (nonatomic) BOOL submittingAuthenticationResult;
@property (retain, nonatomic) NSData *authorizationCredential;
@property (retain, nonatomic) PKPaymentService *paymentService;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sessionTimeoutTimer;
@property (retain, nonatomic) PKAssertion *notificationSuppressionAssertion;
@property (retain, nonatomic) PKAssertion *expressTransactionSuppressionAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) id<NPKBarcodePaymentSessionDelegate> delegate;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateSession;
- (void).cxx_destruct;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void)_insertPaymentTransactionForActiveBarcode;
- (void)startSession;
- (id)initWithPaymentPass:(id)a0 authorizationCredential:(id)a1;
- (void)retryFetchingBarcode;
- (void)submitUserIntentionConfirmation:(BOOL)a0;
- (void)submitPinCode:(id)a0;
- (void)_startSessionTimeoutTimer;
- (void)_updateCurrentPaymentBarcodeWithBarcodeIdentifier:(id)a0 decryptedBarcodeCredential:(id)a1 error:(id)a2;
- (void)_fetchDecryptedBarcodeWithCredential:(id)a0;
- (void)_acquireNotificationSuppressionAssertion;
- (void)_acquireExpressTransactionSuppressAssertion;
- (void)_extendSessionTimeoutTimer;
- (void)_stopSessionTimeoutTimer;
- (void)_releaseNotificationSuppressionAssertion;
- (void)_releaseExpressTransactionSuppressionAssertion;
- (void)_handleUpdatedPaymentTransaction:(id)a0;
- (void)_completedAuthenticationForTransaction:(id)a0;
- (void)_handleUpdatedTransactionStatus:(unsigned long long)a0;
- (void)_invokeExtensionToCollectPaymentInformation;
- (void)_processedAuthenticationMechanismForTransaction:(id)a0;
- (void)_updateCurrentTransactionStatus:(unsigned long long)a0 transaction:(id)a1;
- (void)_handleSessionTimeout;

@end
