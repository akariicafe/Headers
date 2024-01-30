@class NSString, NSArray, NSOperationQueue, NSMutableArray, FPItemManager;

@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate> {
    NSArray *_items;
    struct CGSize { double width; double height; } _desiredSize;
    double _screenScale;
    FPItemManager *_itemManager;
    NSOperationQueue *_subOperationQueue;
    NSMutableArray *_subOperations;
}

@property (copy, nonatomic) id /* block */ perThumbnailCompletionBlock;
@property (copy, nonatomic) id /* block */ thumbnailsFetchCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void)operation:(id)a0 didReceiveProgressInfo:(id)a1 error:(id)a2;
- (void)_perItemCompletionBlockFor:(id)a0 thumbnail:(id)a1 contentType:(id)a2 error:(id)a3;
- (id)initWithItems:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2 itemManager:(id)a3;

@end
