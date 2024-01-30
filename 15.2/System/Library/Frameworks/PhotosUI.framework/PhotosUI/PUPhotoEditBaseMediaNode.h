@class NSData, NSString, NSArray, PXRunNode, PUEditableMediaProviderAdjustmentDataNode, PUEditableMediaProviderVideoAssetNode, PUEditableMediaProviderImageDataNode, AVAsset;
@protocol PXRunNodeDelegate;

@interface PUPhotoEditBaseMediaNode : PXRunNode <PUImageDataNode, PUVideoAssetNode, PXRunNodeDelegate> {
    PUEditableMediaProviderImageDataNode *_imageDataNode;
    PUEditableMediaProviderVideoAssetNode *_videoAssetNode;
    PXRunNode *_gatheringNode;
}

@property (readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode;
@property (readonly, nonatomic) NSData *imageData;
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
@property (readonly, nonatomic) AVAsset *videoAsset;

- (void)run;
- (void).cxx_destruct;
- (void)runNode:(id)a0 didCompleteWithError:(id)a1;
- (id)initWithAdjustmentNode:(id)a0;

@end
