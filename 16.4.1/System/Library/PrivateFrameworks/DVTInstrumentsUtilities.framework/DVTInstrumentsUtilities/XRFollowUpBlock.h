@class NSOperation;

@interface XRFollowUpBlock : NSObject {
    id /* block */ _block;
    NSOperation *_op;
    XRFollowUpBlock *_myselfOrNil;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _shouldntExecuteBlock;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)go;
- (id)initWithBlock:(id /* block */)a0 operation:(id)a1;

@end
