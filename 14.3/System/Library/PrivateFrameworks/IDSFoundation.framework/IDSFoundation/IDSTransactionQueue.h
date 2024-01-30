@class NSMutableArray;

@interface IDSTransactionQueue : NSObject

@property (retain, nonatomic) NSMutableArray *transactions;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)_removeTransaction:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_readyTransaction:(id)a0;
- (void)appendItem:(id)a0;
- (void)executeReadyItemsWithBlock:(id /* block */)a0;
- (void)_appendTransaction:(id)a0;
- (void)prependItem:(id)a0;
- (id /* block */)appendPendingItem:(id)a0;
- (void)_prependTransaction:(id)a0;

@end
