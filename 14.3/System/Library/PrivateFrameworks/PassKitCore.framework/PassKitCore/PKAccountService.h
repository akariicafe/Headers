@class NSObject, NSHashTable, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface> {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    NSHashTable *_observers;
    long long _accountChangedNotificationSuspensionCount;
}

+ (id)sharedInstance;

- (void)registerObserver:(id)a0;
- (id)init;
- (void)accountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)noteVirtualCardAutoFilledBySafari:(id)a0 completion:(id /* block */)a1;
- (void)accountChanged:(id)a0;
- (void)deleteAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id /* block */)errorHandlerForMethod:(SEL)a0 completion:(id /* block */)a1;
- (void)_accountsChanged:(id)a0;
- (void)activateBroadwayPhysicalCardWithActivationCode:(id)a0 completion:(id /* block */)a1;
- (void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)activatePhysicalCard:(id)a0 withActivationCode:(id)a1 forFeatureIdentifier:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)scheduledPaymentsWithAccountIdentifier:(id)a0 includeFailedRecurringPayments:(BOOL)a1 completion:(id /* block */)a2;
- (void)noteAccountDeleted;
- (void)markUserViewedIntroduction:(BOOL)a0 forInstallmentIdentifiers:(id)a1 accountIdentifier:(id)a2;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)unregisterObserver:(id)a0;
- (void)updateAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)accountAdded:(id)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)updateAccountsWithCompletion:(id /* block */)a0;
- (void)accountsForProvisioningWithCompletion:(id /* block */)a0;
- (void)updateAccountWithIdentifier:(id)a0 extended:(BOOL)a1 completion:(id /* block */)a2;
- (void)accountsWithCompletion:(id /* block */)a0;
- (void)defaultAccountForFeature:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)accountsWithPassLocallyProvisionedWithCompletion:(id /* block */)a0;
- (void)accountWithVirtualCardIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)accountForPassWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)deleteLocalAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteEventsWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)performAccountAction:(id)a0 withAccountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)termsWithIdentifier:(id)a0 accepted:(BOOL)a1 withAccountIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)userInfoForAccountIdentifier:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateUserInfoForAccountIdentifier:(id)a0 contact:(id)a1 completion:(id /* block */)a2;
- (void)beginPhysicalCardRequestWithOrder:(id)a0 forAccountWithIdentifier:(id)a1 deviceMetadata:(id)a2 completion:(id /* block */)a3;
- (void)eventsForAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)completePhysicalCardRequest:(id)a0 withSignature:(id)a1 completion:(id /* block */)a2;
- (void)completePhysicalCardActionRequest:(id)a0 withSignature:(id)a1 completion:(id /* block */)a2;
- (void)beginPhysicalCardAction:(id)a0 onPhysicalCardWithIdentifier:(id)a1 forAccountWithIdentifier:(id)a2 deviceMetadata:(id)a3 completion:(id /* block */)a4;
- (void)scheduleSetupReminderForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)eventsForAccountIdentifier:(id)a0 types:(id)a1 startDate:(id)a2 endDate:(id)a3 orderedByDate:(long long)a4 limit:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)deleteEventWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteEventsWithAccountIdentifier:(id)a0 excludingTypes:(id)a1 completion:(id /* block */)a2;
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)creditStatementsForAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)createVirtualCard:(long long)a0 forAccountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)performVirtualCardAction:(long long)a0 forVirtualCardIdentifier:(id)a1 forAccountIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)virtualCardsInKeychainWithCompletion:(id /* block */)a0;
- (void)updateVirtualCardsWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)cardCredentialsForVirtualCard:(id)a0 authorization:(id)a1 completion:(id /* block */)a2;
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)a0 forAccountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)writeVirtualCardToKeychain:(id)a0 completion:(id /* block */)a1;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)a0 withStatementIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)a0 withStartDate:(id)a1 endDate:(id)a2 completion:(id /* block */)a3;
- (void)scheduledPaymentsWithAccountIdentifier:(id)a0 includeFailedRecurringPayments:(BOOL)a1 allowFetchFromServer:(BOOL)a2 completion:(id /* block */)a3;
- (void)accountRemoved:(id)a0;
- (void)statementsChangedForAccountIdentifier:(id)a0;
- (void)exportTransactionDataForAccountIdentifier:(id)a0 withFileFormat:(id)a1 beginDate:(id)a2 endDate:(id)a3 productTimeZone:(id)a4 completion:(id /* block */)a5;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)a0;
- (void)insertEvents:(id)a0 withAccountidentifier:(id)a1 completion:(id /* block */)a2;
- (void)updateScheduledPaymentsWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)updateMockAccountWithAccount:(id)a0 completion:(id /* block */)a1;

@end
