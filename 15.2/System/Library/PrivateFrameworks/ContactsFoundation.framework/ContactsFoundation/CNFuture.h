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

+ (id)sequence:(id)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0;
+ (id)future;
+ (id)_joinMany:(id)a0;
+ (id)futureWithBlock:(id /* block */)a0 schedulerProvider:(id)a1;
+ (void)finishPromise:(id)a0 withFuture:(id)a1;
+ (id)flatMap:(id)a0 withBlock:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)recover:(id)a0 withBlock:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)promiseFuture;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)futureWithResult:(id)a0;
+ (id)join:(id)a0;
+ (id)futureWithError:(id)a0;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1 schedulerProvider:(id)a2;
+ (id)_joinZero;
+ (id)_joinOne:(id)a0;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)chain:(id)a0;

- (id)flatMap:(id /* block */)a0;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)_flushCompletionBlocks;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)recover:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id /* block */)completionHandlerAdapter;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (id)result:(id *)a0;
- (void)didCancel;
- (id)recover:(id /* block */)a0 schedulerProvider:(id)a1;
- (id)initWithImpl:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (id)flatMap:(id /* block */)a0 schedulerProvider:(id)a1;
- (void).cxx_destruct;
- (id)initWithSchedulerProvider:(id)a0;
- (id)init;
- (void)addCalculationDependency:(id)a0;
- (BOOL)cancel;

@end
