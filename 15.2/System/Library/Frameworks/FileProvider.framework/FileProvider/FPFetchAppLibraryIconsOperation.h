@class NSDictionary;
@protocol FPOperationProgressDelegate;

@interface FPFetchAppLibraryIconsOperation : FPOperation <FPOperationClient> {
    NSDictionary *_itemIdentifierByAppBundleID;
    struct CGSize { double width; double height; } _desiredSize;
    double _screenScale;
}

@property (weak, nonatomic) id<FPOperationProgressDelegate> delegate;

- (void)main;
- (void).cxx_destruct;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAppLibraryItems:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2;

@end
