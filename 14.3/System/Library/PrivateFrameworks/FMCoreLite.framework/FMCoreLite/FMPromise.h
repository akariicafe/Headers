@class NSString, FMFuture;

@interface FMPromise : NSObject <FMPromise>

@property (readonly) FMFuture *future;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (BOOL)finishWithNoResult;
- (void).cxx_destruct;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithFuture:(id)a0;

@end
