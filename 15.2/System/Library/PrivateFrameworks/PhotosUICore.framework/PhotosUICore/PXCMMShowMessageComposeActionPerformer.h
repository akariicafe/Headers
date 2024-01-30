@class NSURL;

@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer

@property (readonly, nonatomic) NSURL *shareURL;

- (id)performActionWithSession:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)performMessageComposeActionWithSession:(id)a0 shareURL:(id)a1 completionHandler:(id /* block */)a2;

@end
