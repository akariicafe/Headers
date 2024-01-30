@class NSMutableDictionary, PKPaymentService, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NPKPeerPaymentMessagesTransactionsManager : NSObject <PKPaymentServiceDelegate> {
    NSObject<OS_dispatch_queue> *_transactionsQueue;
    NSObject<OS_dispatch_queue> *_peerPaymentPassQueue;
}

@property (readonly, nonatomic) PKPaymentService *paymentService;
@property (readonly, nonatomic) NSMutableDictionary *transactionDetails;
@property (readonly, nonatomic) NSMutableSet *currentLookupIdentifiers;
@property (copy) NSString *peerPaymentPassUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)transactionSourceIdentifier:(id)a0 didRemoveTransactionWithIdentifier:(id)a1;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (id)initWithPeerPaymentPassUniqueID:(id)a0;
- (id)initWithPeerPaymentPassUniqueID:(id)a0 paymentService:(id)a1;
- (void)_fetchAllPeerPaymentTransactionsWithPeerPaymentPassID:(id)a0;
- (void)_passLibraryChanged:(id)a0;
- (unsigned long long)_transactionQueue_statusOfPaymentTransactionWithServiceIdentifier:(id)a0;
- (void)_transactionsQueue_setStatus:(unsigned long long)a0 forPaymentTransactionWithServiceIdentifier:(id)a1 notifyUpdate:(BOOL)a2;
- (id)_transactionsQueue_transactionDetailsCreatedIfNecessaryForServiceIdentifier:(id)a0;
- (void)_transactionsQueue_notifyStatusUpdateOfTransactionWithServiceIdentifier:(id)a0;
- (id)_sharedPeerPaymentWebService;
- (unsigned long long)statusOfPaymentTransactionWithServiceIdentifier:(id)a0;
- (id)availableActionsForPaymentTransactionWithServiceIdentifier:(id)a0;
- (void)setStatus:(unsigned long long)a0 forPaymentTransactionWithServiceIdentifier:(id)a1;
- (id)peerPaymentTransactionWithServiceIdentifier:(id)a0;
- (void)lookupTransactionActionsIfNeededWithServiceIdentifier:(id)a0;

@end
