@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer

@property (retain, nonatomic) NSURL *publishedURL;

- (BOOL)isCancellable;
- (void).cxx_destruct;
- (id)createActionProgress;
- (id)performPublishActionWithSession:(id)a0 shareOrigin:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_completePublishActionWithSuccess:(BOOL)a0 error:(id)a1 shareOrigin:(long long)a2 completionHandler:(id /* block */)a3;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;

@end
