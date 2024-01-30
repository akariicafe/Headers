@class NSOperationQueue, NSOperation, NSObject;
@protocol OS_dispatch_queue;

@interface _DKSyncSerializer : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSOperation *_previousOperation;
}

+ (void)performSyncBlock:(id /* block */)a0;
+ (void)addOperation:(id)a0;
+ (id)underlyingQueue;
+ (void)addDependentOperationWithBlock:(id /* block */)a0;
+ (id)operationQueue;
+ (void)addOperationWithBlock:(id /* block */)a0;
+ (void)addDependentOperation:(id)a0;
+ (void)performAfter:(double)a0 block:(id /* block */)a1;
+ (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
+ (void)performAsyncBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end
