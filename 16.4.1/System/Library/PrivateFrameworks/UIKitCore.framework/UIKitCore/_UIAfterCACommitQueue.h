@class _UIAfterCACommitBlock;

@interface _UIAfterCACommitQueue : NSObject {
    _UIAfterCACommitBlock *_first;
    _UIAfterCACommitBlock *_last;
}

- (void)enqueuePostCommitBlock:(id /* block */)a0;
- (BOOL)flush;
- (id)init;
- (void).cxx_destruct;
- (void)enqueuePostSynchronizeBlock:(id /* block */)a0;

@end
