@class ASDPromiseResult, NSMutableArray, NSRecursiveLock;

@interface ASDPromise : NSObject {
    NSMutableArray *_observers;
    long long _state;
    NSRecursiveLock *_stateLock;
}

@property (readonly, getter=isResolved) BOOL resolved;
@property (readonly) ASDPromiseResult *result;

+ (id)onScheduler:(id)a0 usingBlock:(id /* block */)a1;
+ (id)promiseWithValue:(id)a0;
+ (id)promiseWithError:(id)a0;

- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)completionHandlerAdapter;
- (void)alwaysPerform:(id /* block */)a0 onScheduler:(id)a1;
- (void)thenPerform:(id /* block */)a0 orCatchError:(id /* block */)a1 onScheduler:(id)a2;
- (id)initWithValue:(id)a0;
- (id)initWithState:(long long)a0 result:(id)a1;
- (id)initOnScheduler:(id)a0 withExecutor:(id /* block */)a1;
- (void)_invokeExecutor:(id /* block */)a0 onScheduler:(id)a1;
- (void)resolveWithValue:(id)a0;
- (void)rejectWithError:(id)a0;
- (void)catchError:(id /* block */)a0 onScheduler:(id)a1;
- (id)mapUsingTransformer:(id /* block */)a0 onScheduler:(id)a1;
- (id)flatMapUsingTransformer:(id /* block */)a0 onScheduler:(id)a1;
- (id)joinWithPromise:(id)a0;

@end
