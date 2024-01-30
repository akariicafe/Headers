@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_operations;
}

- (void)addOperation:(id /* block */)a0;
- (id)evaluatorWithInput:(id)a0;
- (id)init;
- (id)evaluateWithInput:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
