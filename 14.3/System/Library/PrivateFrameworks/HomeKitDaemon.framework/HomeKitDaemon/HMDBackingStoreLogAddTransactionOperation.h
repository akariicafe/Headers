@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreTransactionBlock *transaction;
@property (nonatomic) long long pushFlags;

- (id)initWithTransaction:(id)a0;
- (void).cxx_destruct;
- (id)mainReturningError;

@end
