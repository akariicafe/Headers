@class PUReviewAsset, NSArray, NSString;
@protocol PUVideoAssetNode, PUImageDataRenderNode, PUReviewImageURLNode, PUImageInfoNode, PXRunNodeDelegate, PUVideoURLExportNode, PUReviewVideoURLNode, PUAdjustmentURLNode;

@interface PUReviewCreateAssetNode : PXRunNode <PUReviewAssetNode>

@property (readonly, nonatomic) PUReviewAsset *inputAsset;
@property (readonly, nonatomic) id<PUReviewImageURLNode> imageInfoNode;
@property (readonly, nonatomic) id<PUImageInfoNode> renderImageInfoNode;
@property (readonly, nonatomic) id<PUImageDataRenderNode> renderImageDataNode;
@property (readonly, nonatomic) id<PUReviewVideoURLNode> videoURLNode;
@property (readonly, nonatomic) id<PUVideoAssetNode> videoAssetNode;
@property (readonly, nonatomic) id<PUVideoURLExportNode> renderVideoURLNode;
@property (readonly, nonatomic) id<PUVideoAssetNode> renderVideoAssetNode;
@property (readonly, nonatomic) id<PUAdjustmentURLNode> adjustmentURLNode;
@property (readonly, nonatomic) PUReviewAsset *reviewAsset;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id)initWithInputAsset:(id)a0 imageInfoNode:(id)a1 renderImageInfoNode:(id)a2 renderImageDataNode:(id)a3 videoURLNode:(id)a4 videoAssetNode:(id)a5 renderVideoURLNode:(id)a6 renderVideoAssetNode:(id)a7 adjustmentURLNode:(id)a8;

@end
