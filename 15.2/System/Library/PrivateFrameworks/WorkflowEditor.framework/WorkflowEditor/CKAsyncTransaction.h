@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CKAsyncTransaction : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_operations;
}

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) unsigned long long state;

- (void)addCompletionBlock:(id /* block */)a0;
- (void)commit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)addOperationWithBlock:(id /* block */)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithCallbackQueue:(id)a0 completionBlock:(id /* block */)a1;
- (void)addAsyncOperationWithBlock:(id /* block */)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_ensureTransactionData;

@end
