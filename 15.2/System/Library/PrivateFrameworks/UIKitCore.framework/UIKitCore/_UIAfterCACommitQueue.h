@class _UIAfterCACommitBlock;

@interface _UIAfterCACommitQueue : NSObject {
    _UIAfterCACommitBlock *_first;
    _UIAfterCACommitBlock *_last;
}

- (BOOL)flush;
- (void).cxx_destruct;
- (id)init;
- (void)enqueuePostSynchronizeBlock:(id /* block */)a0;
- (void)enqueuePostCommitBlock:(id /* block */)a0;

@end
