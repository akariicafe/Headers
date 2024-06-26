@class NSObject, NSString, PKOSVersionRequirement, PKPaymentService, PKSecureElement, NSHashTable, PKPaymentWebService;
@protocol OS_dispatch_queue, PKPaymentDataProviderDelegate;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider> {
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDeviceInRestrictedMode;
@property (readonly, nonatomic) NSString *secureElementIdentifier;
@property (readonly, nonatomic) BOOL secureElementIsProductionSigned;
@property (retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property (readonly, nonatomic) BOOL isPaymentHandoffDisabled;
@property (weak, nonatomic) id<PKPaymentDataProviderDelegate> delegate;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) PKOSVersionRequirement *deviceVersion;
@property (readonly, nonatomic) PKPaymentWebService *paymentWebService;

- (void)removeDelegate:(id)a0;
- (long long)apiVersion;
- (void)photosForFamilyMembersWithDSIDs:(id)a0 completion:(id /* block */)a1;
- (void)addDelegate:(id)a0;
- (void)transactionsForRequest:(id)a0 completion:(id /* block */)a1;
- (void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)a0 withTransactionSource:(unsigned long long)a1 withBackingData:(unsigned long long)a2 calendar:(id)a3 calendarUnit:(unsigned long long)a4 includePurchaseTotal:(BOOL)a5 completion:(id /* block */)a6;
- (void)credentialWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)cashbackByPeriodForTransactionSourceIdentifiers:(id)a0 withStartDate:(id)a1 endDate:(id)a2 calendar:(id)a3 calendarUnit:(unsigned long long)a4 type:(long long)a5 completion:(id /* block */)a6;
- (id)init;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didEnableTransactionService:(BOOL)a1;
- (void)submitTransactionAnswerForTransaction:(id)a0 questionType:(unsigned long long)a1 answer:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)transactionsForTransactionSourceIdentifiers:(id)a0 withTransactionType:(long long)a1 withTransactionSource:(unsigned long long)a2 withBackingData:(unsigned long long)a3 startDate:(id)a4 endDate:(id)a5 limit:(long long)a6 completion:(id /* block */)a7;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)a0;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)a0;
- (void)hasTransactionsForTransactionSourceIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)installmentPlansWithTransactionReferenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void)dealloc;
- (void)transactionReceiptForTransactionWithIdentifier:(id)a0 updateIfNecessary:(BOOL)a1 completion:(id /* block */)a2;
- (void)_accessDelegatesWithHandler:(id /* block */)a0;
- (void)removeExpressPassWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setBalanceReminder:(id)a0 forBalance:(id)a1 pass:(id)a2 completion:(id /* block */)a3;
- (void)archiveMessageWithIdentifier:(id)a0;
- (void)mapsMerchantsWithCompletion:(id /* block */)a0;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateCredential:(id)a1;
- (id)expressPassesInformationWithCardType:(long long)a0;
- (void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)a0 accountIdentifier:(id)a1 withRedemptionType:(long long)a2 startDate:(id)a3 endDate:(id)a4 completion:(id /* block */)a5;
- (void)setDefaultPaymentApplication:(id)a0 forPassUniqueIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)transactionWithReferenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)a0 withCompletion:(id /* block */)a1;
- (void)transactionsForTransactionSourceIdentifiers:(id)a0 matchingMerchant:(id)a1 withTransactionSource:(unsigned long long)a2 withBackingData:(unsigned long long)a3 limit:(long long)a4 completion:(id /* block */)a5;
- (void)familyMembersWithCompletion:(id /* block */)a0;
- (void)transactionWithIdentifier:(id)a0 didDownloadTransactionReceipt:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (void)transactionsForTransactionSourceIdentifiers:(id)a0 withMerchantCategory:(long long)a1 withTransactionSource:(unsigned long long)a2 withBackingData:(unsigned long long)a3 startDate:(id)a4 endDate:(id)a5 limit:(long long)a6 completion:(id /* block */)a7;
- (void)transactionSourceIdentifier:(id)a0 didRemoveTransactionWithIdentifier:(id)a1;
- (void)setExpressWithPassInformation:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)transactionsForTransactionSourceIdentifiers:(id)a0 withTransactionSource:(unsigned long long)a1 withBackingData:(unsigned long long)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveMessage:(id)a1;
- (void)transactionsForTransactionSourceIdentifiers:(id)a0 withTransactionSource:(unsigned long long)a1 withBackingData:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4 limit:(long long)a5 completion:(id /* block */)a6;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)a0;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didEnableMessageService:(BOOL)a1;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)a0;
- (id)initWithPaymentService:(id)a0 secureElement:(id)a1;
- (void)deletePaymentTransactionWithIdentifier:(id)a0;
- (void)setCommutePlanReminder:(id)a0 forCommutePlan:(id)a1 pass:(id)a2 completion:(id /* block */)a3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)transitStateWithPassUniqueIdentifier:(id)a0 paymentApplication:(id)a1 completion:(id /* block */)a2;
- (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)a0;
- (void)setPaymentHandoffDisabled:(BOOL)a0;
- (void)approvedTransactionsForTransactionSourceIdentifiers:(id)a0 withTransactionSource:(unsigned long long)a1 withBackingData:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4 limit:(long long)a5 completion:(id /* block */)a6;
- (void)transactionWithServiceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeExpressPassesWithCardType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)supportsNotificationsForPass:(id)a0;
- (BOOL)supportsInAppPaymentsForPass:(id)a0;
- (void)transactionReceiptWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)commutePlanReminderForCommutePlan:(id)a0 pass:(id)a1 withCompletion:(id /* block */)a2;
- (void)passUpgradeWithRequest:(id)a0 pass:(id)a1 visibleViewController:(id)a2 completion:(id /* block */)a3;
- (BOOL)supportsTransactionsForPass:(id)a0;
- (BOOL)supportsMessagesForPass:(id)a0;
- (id)expressPassesInformation;
- (BOOL)supportsLowPowerExpressMode;
- (BOOL)supportsAddingPaymentPasses;
- (void)transactionWithServiceIdentifier:(id)a0 transactionSourceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)pendingTransactionsForTransactionSourceIdentifiers:(id)a0 withTransactionSource:(unsigned long long)a1 withBackingData:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4 limit:(long long)a5 completion:(id /* block */)a6;
- (void)transactionsForTransactionSourceIdentifiers:(id)a0 withTransactionSource:(unsigned long long)a1 withBackingData:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4 orderedByDate:(long long)a5 limit:(long long)a6 completion:(id /* block */)a7;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateBalanceReminder:(id)a1 forBalanceWithIdentifier:(id)a2;
- (void)transactionsForTransactionSourceIdentifiers:(id)a0 withPeerPaymentCounterpartHandles:(id)a1 withTransactionSource:(unsigned long long)a2 withBackingData:(unsigned long long)a3 limit:(long long)a4 completion:(id /* block */)a5;
- (void)balanceReminderThresholdForBalance:(id)a0 pass:(id)a1 withCompletion:(id /* block */)a2;

@end
