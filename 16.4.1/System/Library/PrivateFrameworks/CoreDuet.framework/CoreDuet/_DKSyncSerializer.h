@class NSOperationQueue, NSOperation, NSObject;
@protocol OS_dispatch_queue;

@interface _DKSyncSerializer : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSOperation *_previousOperation;
}

+ (void)addOperation:(id)a0;
+ (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
+ (id)operationQueue;
+ (void)performSyncBlock:(id /* block */)a0;
+ (void)addDependentOperation:(id)a0;
+ (void)addDependentOperationWithBlock:(id /* block */)a0;
+ (void)performAfter:(double)a0 block:(id /* block */)a1;
+ (void)performAsyncBlock:(id /* block */)a0;
+ (void)addOperationWithBlock:(id /* block */)a0;
+ (id)underlyingQueue;

- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
