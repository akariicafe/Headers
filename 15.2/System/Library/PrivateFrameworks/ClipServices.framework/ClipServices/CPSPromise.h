@class NSError, NSMutableArray, NSConditionLock;

@interface CPSPromise : NSObject {
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

+ (id)promise;

- (void)finish;
- (void)_flushCompletionBlocks;
- (void)finishWithError:(id)a0;
- (void)finishWithResult:(id)a0;
- (void)addCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_finishWithResult:(id)a0 error:(id)a1;
- (BOOL)_isFinished;

@end
