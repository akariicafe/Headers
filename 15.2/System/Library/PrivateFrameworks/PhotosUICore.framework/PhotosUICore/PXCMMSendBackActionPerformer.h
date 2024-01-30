@class PXCMMContext;

@interface PXCMMSendBackActionPerformer : PXCMMActionPerformer

@property (retain, nonatomic) PXCMMContext *sendBackContext;

- (void).cxx_destruct;
- (id)performSendBackActionWithSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)_completeSendBackActionWithSuccess:(BOOL)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end
