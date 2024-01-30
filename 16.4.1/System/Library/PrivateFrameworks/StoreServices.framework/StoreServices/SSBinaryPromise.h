@class SSPromise;

@interface SSBinaryPromise : NSObject

@property (retain, nonatomic) SSPromise *backingPromise;

+ (id)promiseWithPromise:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)promiseWithSuccess;
+ (id)promiseWithError:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;

- (BOOL)finishWithError:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (void)waitUntilFinished;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithSuccess;
- (void)addFinishBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id /* block */)completionHandlerAdapter;
- (id)promiseAdapter;
- (id)init;
- (void)_removeFromGlobalPromiseStorage;
- (void).cxx_destruct;

@end
