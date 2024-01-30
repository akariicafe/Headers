@class NSString;

@interface PHAsynchronousPhotoLibraryExecutionContext : NSObject <PHPhotoLibraryExecutionContext>

@property (class, readonly) PHAsynchronousPhotoLibraryExecutionContext *asynchronousExecutionContext;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatchOnQueue:(id)a0 block:(id /* block */)a1;
- (void)callTransactionCompletionHandler:(id /* block */)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)sendChangesRequest:(id)a0 onClient:(id)a1 reply:(id /* block */)a2;

@end
