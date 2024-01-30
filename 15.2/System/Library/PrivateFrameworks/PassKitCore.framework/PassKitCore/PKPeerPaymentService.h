@class PKPeerPaymentAccount, PKPeerPaymentPreferences, NSHashTable, PKPeerPaymentWebServiceContext, NSObject, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentService : NSObject <PKPeerPaymentServiceExportedInterface, PKPeerPaymentTargetDeviceDelegate> {
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    NSHashTable *_observers;
    long long _accountChangedNotificationSuspensionCount;
}

@property (retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;
@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentPreferences *preferences;

+ (id)sharedInstance;

- (void)updateAccountWithCompletion:(id /* block */)a0;
- (void)cloudStoreStatusWithCompletion:(id /* block */)a0;
- (void)_preferencesChanged:(id)a0;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)a0;
- (void)resumeAccountChangedNotifications;
- (void)_postAccountChangeNotificationIfNecessaryForAccount:(id)a0 previousAccount:(id)a1;
- (void)presentRegistrationFlowWithAccount:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (void)updateMessageReceivedDate:(id)a0 forTransactionWithIdentifier:(id)a1;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)registerObserver:(id)a0;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)_accountChanged:(id)a0;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)a0;
- (void)presentIdentityVerificationFlowWithResponse:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setPreferences:(id)a0 completion:(id /* block */)a1;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)a0;
- (void)unregisterObserver:(id)a0;
- (void)unregisterDeviceWithCompletion:(id /* block */)a0;
- (void)accountWithCompletion:(id /* block */)a0;
- (void)updateAssociatedAccountsWithCompletion:(id /* block */)a0;
- (void)updateAccountAndAssociatedAccountsWithCompletion:(id /* block */)a0;
- (void)deleteAccountWithCompletion:(id /* block */)a0;
- (void)preferencesWithCompletion:(id /* block */)a0;
- (void)balanceForPass:(id)a0 completion:(id /* block */)a1;
- (void)updatePreferencesWithCompletion:(id /* block */)a0;
- (void)deletePreferencesWithCompletion:(id /* block */)a0;
- (void)registerDeviceWithForceReregister:(BOOL)a0 completion:(id /* block */)a1;
- (void)registrationStatusWithCompletion:(id /* block */)a0;
- (void)registerDeviceWithRegistrationURL:(id)a0 pushToken:(id)a1 forceReregister:(BOOL)a2 completion:(id /* block */)a3;
- (void)presentRegistrationFlowWithAccount:(id)a0 amount:(id)a1 state:(unsigned long long)a2 senderAddress:(id)a3 orientation:(id)a4 completion:(id /* block */)a5;
- (void)updateMockAccountBalanceByAddingAmount:(id)a0 completion:(id /* block */)a1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)a0;
- (void)remoteRegistrationRequest:(id)a0 forHandle:(id)a1 completion:(id /* block */)a2;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)suspendAccountChangedNotifications;
- (void)receivedPeerPaymentMessageData:(id)a0;
- (void)registerDeviceWithCompletion:(id /* block */)a0;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(id /* block */)a0;

@end
