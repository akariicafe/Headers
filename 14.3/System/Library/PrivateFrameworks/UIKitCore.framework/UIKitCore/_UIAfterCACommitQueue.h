@class _UIAfterCACommitBlock;

@interface _UIAfterCACommitQueue : NSObject {
    _UIAfterCACommitBlock *_first;
    _UIAfterCACommitBlock *_last;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)flush;
- (void)enqueuePostSynchronizeBlock:(id /* block */)a0;
- (void)enqueuePostCommitBlock:(id /* block */)a0;

@end
