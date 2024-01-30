@class NSString, FMFuture;

@interface FMPromise : NSObject <FMPromise>

@property (readonly) FMFuture *future;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)finishWithNoResult;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFuture:(id)a0;

@end
