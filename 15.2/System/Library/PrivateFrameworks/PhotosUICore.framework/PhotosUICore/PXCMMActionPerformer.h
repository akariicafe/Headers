@class PXCMMSession, NSProgress;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCMMSession *session;
@property (retain, nonatomic) NSProgress *progress;
@property (weak, nonatomic) id<PXCMMActionPerformerDelegate> delegate;

- (id)performActionWithSession:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)canPerformActionWithSession:(id)a0;
- (id)createActionProgress;

@end
