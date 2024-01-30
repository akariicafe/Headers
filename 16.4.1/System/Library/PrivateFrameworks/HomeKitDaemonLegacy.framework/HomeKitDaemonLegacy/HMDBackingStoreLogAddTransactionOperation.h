@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreTransactionBlock *transaction;
@property (nonatomic) long long pushFlags;
@property (readonly, nonatomic) BOOL isAtomicSaveEnabled;

- (id)initWithTransaction:(id)a0;
- (void).cxx_destruct;
- (id)initWithAtomicSaveEnabled:(BOOL)a0 transaction:(id)a1;
- (id)mainReturningError;

@end
