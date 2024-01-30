@class NSString, NSMapTable, NSHashTable;

@interface SKClientBroker : NSObject <SKClientProtocol> {
    NSMapTable *_clients;
    NSHashTable *_subscriptionStatusListeners;
    NSHashTable *_storefrontListeners;
    NSHashTable *_transactionListeners;
    NSHashTable *_messageListeners;
    NSHashTable *_purchaseIntentListeners;
    NSString *_storefrontIdentifier;
    int _storefrontChangedToken;
    int _unfinishedTransactionsToken;
    int _receivedPurchaseIntentsToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultBroker;

- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)storefrontChanged:(id)a0;
- (void)_handleUnfinishedTransactionsNotification;
- (void)downloadAdded:(id)a0;
- (void)updatedTransactions:(id)a0;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)_cancelNotifyTokenIfValid:(int)a0;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)unregisterTransactionListener:(id)a0;
- (void)registerStorefrontListener:(id)a0;
- (BOOL)hasTransactionListener;
- (void)unregisterSubscriptionStatusListener:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (void)dealloc;
- (void)downloadRemoved:(id)a0;
- (void)_checkStorefrontChangedNotify:(BOOL)a0;
- (id)_unfinishedTransactionsNotificationName;
- (void)registerSubscriptionStatusListener:(id)a0;
- (void)registerPurchaseIntentsListener:(id)a0;
- (void)removedTransactions:(id)a0;
- (void)receivedTransactions:(id)a0;
- (void)unregisterClientWithIdentifier:(id)a0;
- (id)init;
- (void)_storefrontObserverAdded;
- (void)receivedPurchaseIntentsForProductIdentifiers:(id)a0;
- (void)unregisterStorefrontListener:(id)a0;
- (void)registerMessageListener:(id)a0;
- (void)_checkForPendingPurchaseIntents;
- (void)hasAnyMessageListenersWithReply:(id /* block */)a0;
- (void)askToShowMessageWithReplyBlock:(id /* block */)a0;
- (void)pendingMessages:(id)a0;
- (void).cxx_destruct;
- (void)receivedStatuses:(id)a0;
- (void)unregisterMessageListener:(id)a0;
- (void)unregisterPurchaseIntentsListener:(id)a0;
- (void)_purchaseIntentObserverRemoved;
- (void)_storefrontObserverRemoved;
- (void)registerTransactionListener:(id)a0;
- (void)_purchaseIntentObserverAdded;

@end
