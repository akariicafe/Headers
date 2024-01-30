@class PXCMMSession, NSProgress;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCMMSession *session;
@property (retain, nonatomic) NSProgress *progress;
@property (weak, nonatomic) id<PXCMMActionPerformerDelegate> delegate;

- (void).cxx_destruct;
- (id)createActionProgress;
- (BOOL)canPerformActionWithSession:(id)a0;
- (id)performActionWithSession:(id)a0 completionHandler:(id /* block */)a1;

@end
