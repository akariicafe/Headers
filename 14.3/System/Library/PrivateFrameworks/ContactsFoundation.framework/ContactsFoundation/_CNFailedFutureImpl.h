@class NSString, NSError;

@interface _CNFailedFutureImpl : NSObject <CNFutureImpl> {
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)initWithError:(id)a0;
- (void)updateDescriptionWithBuilder:(id)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isCancelled;
- (BOOL)isFinished;

@end
