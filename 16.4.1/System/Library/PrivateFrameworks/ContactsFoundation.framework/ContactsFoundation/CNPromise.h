@class NSString, CNFuture;

@interface CNPromise : NSObject <CNPromise>

@property (readonly) CNFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)boolErrorCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)a0;
- (id)initWithSchedulerProvider:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)init;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (void).cxx_destruct;

@end
