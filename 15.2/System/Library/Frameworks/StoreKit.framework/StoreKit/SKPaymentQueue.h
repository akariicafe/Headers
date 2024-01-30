@class NSArray, SKStorefront, SKPaymentQueueClient;
@protocol SKPaymentQueueDelegate;

@interface SKPaymentQueue : NSObject {
    id _internal;
}

@property (readonly, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKPaymentQueueDelegate> delegate;
@property (readonly, nonatomic) SKStorefront *storefront;
@property (readonly, nonatomic) NSArray *transactionObservers;
@property (readonly, nonatomic) NSArray *transactions;

+ (BOOL)canMakePayments;
+ (id)defaultQueue;

- (void)cancelDownloads:(id)a0;
- (void)pauseDownloads:(id)a0;
- (void)finishTransaction:(id)a0;
- (void)_establishConnection;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)_establishConnectionIfNeeded;
- (void)resumeDownloads:(id)a0;
- (void)dealloc;
- (void)addPayment:(id)a0;
- (void)addTransactionObserver:(id)a0;
- (id)initWithPaymentQueueClient:(id)a0;
- (void)askToShowMessageWithReplyBlock:(id /* block */)a0;
- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)updatedTransactions:(id)a0;
- (void)removedTransactions:(id)a0;
- (void)downloadAdded:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)downloadRemoved:(id)a0;
- (void)storefrontChanged:(id)a0;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)forceSandboxForBundleIdentifier:(id)a0 untilDate:(id)a1;
- (void)presentCodeRedemptionSheet;
- (id)_initSKPaymentQueue;
- (void)_notifyObserversAboutChanges:(id)a0 sendUpdatedDownloads:(BOOL)a1;
- (void)_processTransaction:(id)a0;
- (void)_checkServerQueue;
- (void)_checkForMessages;
- (void)_sendCommand:(long long)a0 forDownloads:(id)a1;
- (void)_removeLocalTransaction:(id)a0;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)a0;
- (void)_updatedTransactions:(id)a0 restored:(BOOL)a1;
- (void)_presentCodeRedemptionSheet;
- (void)_sendAppEnteredForegroundMessage;
- (void)_refreshPaymentsWithPolicy:(long long)a0;
- (void)_notifyObserversAboutPurchaseIntentsForProducts:(id)a0;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)a0;
- (void)_handleConnectionDisconnect;
- (void)_handleMessage:(id)a0 connection:(id)a1;
- (void)_setTransactionsWithReply:(id)a0;
- (void)_notifyObserversAboutRemovals:(id)a0;
- (void)_updateDownloadsForMessage:(id)a0;
- (void)_updatePaymentsForMessage:(id)a0;
- (void)_removePaymentsForMessage:(id)a0;
- (void)_completeRestoreWithMessage:(id)a0;
- (void)_sendAppStorePendingPaymentsRequestForMessage:(id)a0;
- (BOOL)_shouldContinueTransactionForMessage:(id)a0;
- (void)_removeNilTransactionObservers;
- (void)_processTransactionDict:(id)a0 forTransaction:(id)a1 error:(id)a2;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)a0;
- (void)_finishRefreshPayments;
- (id)_copyDownloadIDsForDownloads:(id)a0;
- (void)_processUpdates:(id)a0 trimUnmatched:(BOOL)a1 sendUpdatedDownloads:(BOOL)a2;
- (id)_copyTransactionsFromXPCArray:(id)a0;
- (id)_applyDownloadChangeset:(id)a0;
- (void)_notifyObserversAboutDownloadChanges:(id)a0;
- (void)removeTransactionObserver:(id)a0;
- (void)restoreCompletedTransactions;
- (void)showPriceConsentIfNeeded;
- (void)startDownloads:(id)a0;
- (void)shouldContinueTransaction:(id)a0 withNewStorefront:(id)a1 replyBlock:(id /* block */)a2;
- (void)_daemonLaunchedNotification;

@end
