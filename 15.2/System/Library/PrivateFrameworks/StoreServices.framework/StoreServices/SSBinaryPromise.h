@class SSPromise;

@interface SSBinaryPromise : NSObject

@property (retain, nonatomic) SSPromise *backingPromise;

+ (id)_globalPromiseStorage;
+ (id)promiseWithSuccess;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithPromise:(id)a0;

- (void)addErrorBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithError:(id)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id /* block */)completionHandlerAdapter;
- (BOOL)resultWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_removeFromGlobalPromiseStorage;
- (id)init;
- (void)addFinishBlock:(id /* block */)a0;
- (BOOL)finishWithSuccess;
- (id)promiseAdapter;
- (void)waitUntilFinished;

@end
