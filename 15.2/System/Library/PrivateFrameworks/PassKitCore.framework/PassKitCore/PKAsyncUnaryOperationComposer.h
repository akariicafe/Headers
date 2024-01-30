@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_operations;
}

- (id)evaluatorWithInput:(id)a0;
- (id)evaluateWithInput:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addOperation:(id /* block */)a0;

@end
