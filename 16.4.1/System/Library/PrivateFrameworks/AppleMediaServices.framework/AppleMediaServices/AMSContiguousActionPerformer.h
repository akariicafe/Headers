@interface AMSContiguousActionPerformer : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ suspendableQueue;
}

- (void)dealloc;
- (void)async:(id /* block */)a0;
- (id)init;
- (void)sync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)continueContiguousActionWithIdentifier:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)finishContiguousActionWithIdentifier:(unsigned long long)a0;
- (unsigned long long)performInitialContiguousActionWithBlock:(id /* block */)a0;

@end
