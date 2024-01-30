@class SSPromise;

@interface SSBinaryPromise : NSObject

@property (retain, nonatomic) SSPromise *backingPromise;

+ (id)promiseWithPromise:(id)a0;
+ (id)promiseWithSuccess;
+ (id)promiseWithError:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;

- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (void)addErrorBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id /* block */)completionHandlerAdapter;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (void)_removeFromGlobalPromiseStorage;
- (void)waitUntilFinished;
- (BOOL)finishWithSuccess;
- (id)promiseAdapter;

@end
