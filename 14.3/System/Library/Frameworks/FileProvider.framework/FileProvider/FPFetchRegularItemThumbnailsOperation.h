@class NSArray, FPItemManager;
@protocol FPOperationProgressDelegate;

@interface FPFetchRegularItemThumbnailsOperation : FPOperation <FPOperationClient> {
    NSArray *_itemIDs;
    struct CGSize { double width; double height; } _desiredSizeToScale;
    FPItemManager *_itemManager;
}

@property (weak, nonatomic) id<FPOperationProgressDelegate> delegate;

- (void).cxx_destruct;
- (void)main;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithRegularItems:(id)a0 desiredSizeToScale:(struct CGSize { double x0; double x1; })a1 itemManager:(id)a2;

@end
