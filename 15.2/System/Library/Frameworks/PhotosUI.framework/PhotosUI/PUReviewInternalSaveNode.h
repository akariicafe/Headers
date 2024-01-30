@class NSData, NSString, NSURL, PUEditableMediaProviderVideoURLNode, PUImageDataRenderNode, NSArray, PUVideoExportNode, PUPhotoEditIrisModel, PUEditableMediaProviderImageDataNode;
@protocol PXRunNodeDelegate;

@interface PUReviewInternalSaveNode : PXRunNode <PUImageInfoNode, PUVideoURLExportNode, PUAdjustmentURLNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUImageDataRenderNode>

@property (readonly, nonatomic) PUEditableMediaProviderImageDataNode *imageDataNode;
@property (readonly, nonatomic) PUImageDataRenderNode *imageRenderNode;
@property (readonly, nonatomic) PUEditableMediaProviderVideoURLNode *videoURLNode;
@property (readonly, nonatomic) PUVideoExportNode *videoRenderNode;
@property (readonly, nonatomic) NSURL *directory;
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *livePhotoModel;
@property (readonly, nonatomic) NSURL *imageDataURL;
@property (readonly, nonatomic) NSString *imageDataUTI;
@property (readonly, nonatomic) BOOL useEmbeddedPreview;
@property (readonly, nonatomic) long long imageExifOrientation;
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
@property (readonly, nonatomic) struct CGSize { double width; double height; } renderedVideoSize;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) NSURL *adjustmentURL;
@property (readonly, nonatomic) NSURL *providedFullsizeImageURL;
@property (readonly, nonatomic) NSURL *providedVideoURL;
@property (readonly, nonatomic) struct CGSize { double width; double height; } baseImageSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } renderedImageSize;
@property (readonly, nonatomic) NSData *imageData;

- (void)run;
- (long long)_adjustmentBaseVersion;
- (double)_baseDuration;
- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0 imageDataNode:(id)a1 imageRenderNode:(id)a2 videoURLNode:(id)a3 videoRenderNode:(id)a4 livePhotoModel:(id)a5;
- (long long)_baseExifOrientation;
- (id)_exportProperties;

@end
