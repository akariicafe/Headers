@class NSError, NSMutableArray, NSConditionLock;

@interface CPSPromise : NSObject {
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

+ (id)promise;

- (void)finish;
- (void)finishWithError:(id)a0;
- (BOOL)_isFinished;
- (void)_flushCompletionBlocks;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)finishWithResult:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_finishWithResult:(id)a0 error:(id)a1;

@end
