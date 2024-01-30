@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreTransactionBlock *transaction;
@property (nonatomic) long long pushFlags;
@property (readonly, nonatomic) BOOL isAtomicSaveEnabled;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0;
- (id)mainReturningError;
- (id)initWithAtomicSaveEnabled:(BOOL)a0 transaction:(id)a1;

@end
