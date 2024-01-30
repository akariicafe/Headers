@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl> {
    id _result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)initWithResult:(id)a0;
- (void)updateDescriptionWithBuilder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (BOOL)cancel;

@end
