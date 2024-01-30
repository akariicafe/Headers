@class NSString, NSMutableSet;
@protocol FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {
    BOOL _commitAllowed;
    BOOL _readyForCommit;
    BOOL _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
}

@property (weak, nonatomic) id<FBSynchronizedTransactionGroupDelegate> synchronizationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_checkPreconditionsAndCommitIfReady;
- (void)performSynchronizedCommit;
- (void)_childTransactionDidComplete:(id)a0;
- (void)_performSynchronizedCommitIfReady;
- (id)init;
- (void)addSynchronizedTransaction:(id)a0;
- (void)synchronizedTransaction:(id)a0 willCommitSynchronizedTransactions:(id)a1;
- (id)synchronizedTransactions;
- (void).cxx_destruct;
- (void)_performSynchronizedCommit:(id)a0;
- (void)synchronizedTransaction:(id)a0 didCommitSynchronizedTransactions:(id)a1;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (BOOL)isReadyForSynchronizedCommit;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;

@end
