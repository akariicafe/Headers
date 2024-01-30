@class NSMutableArray;

@interface SYStoreResetSessionOwner : SYStoreSessionOwner {
    NSMutableArray *_buffer;
    unsigned int _bufferedState;
}

@property (copy, nonatomic) id /* block */ fetchNextBatch;

- (void).cxx_destruct;
- (id)init;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (BOOL)isResetSync;
- (unsigned int)_sendBufferedChanges:(id /* block */)a0;

@end
