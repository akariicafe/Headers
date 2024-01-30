@class NSObject, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HFCharacteristicValueCacheManager : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unprocessedTransctionLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *transactionsByCharacteristicID;
@property (retain, nonatomic) NSMutableDictionary *transactionsByActionSetID;
@property (retain, nonatomic) NSMutableOrderedSet *unprocessedAddedTransactions;
@property (retain, nonatomic) NSMutableOrderedSet *unprocessedRemovedTransactions;

- (id)init;
- (void).cxx_destruct;
- (id)cachedValueForCharacteristic:(id)a0;
- (id)transactionsExecutingActionSet:(id)a0;
- (void)_enumerateTransactionsRemovingFailingItems:(id)a0 block:(id /* block */)a1;
- (void)_locked_updateWithAddedTransaction:(id)a0;
- (void)_locked_updateWithRemovedTransaction:(id)a0;
- (id)_perfomUpdatedCacheRead:(id /* block */)a0;
- (id)_performLock:(struct os_unfair_lock_s { unsigned int x0; } *)a0 block:(id /* block */)a1;
- (BOOL)_transaction:(id)a0 isWritingCharacteristic:(id)a1;
- (BOOL)_transaction:(id)a0 isWritingCharacteristic:(id)a1 allowingActions:(BOOL)a2;
- (BOOL)containsTransactionsExecutingActionSet:(id)a0;
- (BOOL)containsTransactionsReadingCharacteristic:(id)a0 filterBlock:(id /* block */)a1;
- (BOOL)containsTransactionsWritingCharacteristic:(id)a0;
- (void)transactionAdded:(id)a0;
- (void)transactionRemoved:(id)a0;
- (id)transactionsReadingCharacteristic:(id)a0 filterBlock:(id /* block */)a1;
- (id)transactionsWritingCharacteristic:(id)a0;

@end
