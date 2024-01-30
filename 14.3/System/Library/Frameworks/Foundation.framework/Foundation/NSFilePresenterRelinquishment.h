@class NSCountedSet, NSMutableArray;

@interface NSFilePresenterRelinquishment : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSCountedSet *_blockingAccessClaimIDs;
    NSMutableArray *_relinquishReplies;
    id /* block */ _reacquirer;
    NSMutableArray *_blockingPrerelinquishReplies;
    BOOL _prerelinquishInProgress;
}

- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(id /* block */)a0 withReply:(id /* block */)a1;
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)a0 usingBlock:(id /* block */)a1 withReply:(id /* block */)a2;
- (void)removeBlockingAccessClaimID:(id)a0 thenContinue:(id /* block */)a1;
- (void)dealloc;
- (void)didRelinquish;
- (void)_locked_addPrerelinquishReply:(id /* block */)a0;
- (void)removeAllBlockingAccessClaimIDs;
- (void)setReacquirer:(id /* block */)a0;
- (void)removeBlockingAccessClaimID:(id)a0;
- (BOOL)_locked_addRelinquishReply:(id /* block */)a0;

@end
