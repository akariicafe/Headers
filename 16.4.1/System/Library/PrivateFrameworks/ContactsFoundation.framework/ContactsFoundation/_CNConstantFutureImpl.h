@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl> {
    id _result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResult:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isFinished;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)updateDescriptionWithBuilder:(id)a0;
- (BOOL)isCancelled;
- (BOOL)cancel;
- (void).cxx_destruct;

@end
