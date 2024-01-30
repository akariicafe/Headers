@class PXCPLUIStatus;

@interface PXCPLActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCPLUIStatus *cplUIStatus;

- (void).cxx_destruct;
- (void)performActionWithCPLUIStatus:(id)a0 completionHandler:(id /* block */)a1;

@end
