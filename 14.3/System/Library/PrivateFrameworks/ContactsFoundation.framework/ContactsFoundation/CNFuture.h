@class NSString, NSMutableArray;
@protocol CNFutureImpl;

@interface CNFuture : NSObject <CNFuture, CNPromise> {
    id<CNFutureImpl> _impl;
    NSMutableArray *_calculationDependencies;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)future;
+ (id)sequence:(id)a0;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)promiseFuture;
+ (id)futureWithBlock:(id /* block */)a0 schedulerProvider:(id)a1;
+ (id)lazyFutureWithBlock:(id /* block */)a0;
+ (id)futureWithResult:(id)a0;
+ (void)finishPromise:(id)a0 withFuture:(id)a1;
+ (id)_joinMany:(id)a0;
+ (id)futureWithError:(id)a0;
+ (id)_joinOne:(id)a0;
+ (id)flatMap:(id)a0 withBlock:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)recover:(id)a0 withBlock:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1 schedulerProvider:(id)a2;
+ (id)chain:(id)a0;
+ (id)_joinZero;
+ (id)join:(id)a0;

- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addCalculationDependency:(id)a0;
- (id)initWithSchedulerProvider:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)recover:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (id)result:(id *)a0;
- (void)didCancel;
- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (void)_flushCompletionBlocks;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (id)initWithImpl:(id)a0;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (id)recover:(id /* block */)a0 schedulerProvider:(id)a1;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id)flatMap:(id /* block */)a0 schedulerProvider:(id)a1;

@end
