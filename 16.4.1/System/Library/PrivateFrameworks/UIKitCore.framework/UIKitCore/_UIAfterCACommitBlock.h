@interface _UIAfterCACommitBlock : NSObject {
    _UIAfterCACommitBlock *_next;
    id /* block */ _block;
    _Atomic BOOL _transactionCleared;
}

+ (id)blockWithBlock:(id /* block */)a0;

- (BOOL)run;
- (void).cxx_destruct;

@end
