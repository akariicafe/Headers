@class NSDictionary, FPItemManager;
@protocol FPOperationProgressDelegate;

@interface FPFetchRegularItemThumbnailsOperation : FPOperation <FPOperationClient> {
    NSDictionary *_dictionary;
    struct CGSize { double width; double height; } _desiredSizeToScale;
    FPItemManager *_itemManager;
}

@property (weak, nonatomic) id<FPOperationProgressDelegate> delegate;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 desiredSizeToScale:(struct CGSize { double x0; double x1; })a1 itemManager:(id)a2;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end
