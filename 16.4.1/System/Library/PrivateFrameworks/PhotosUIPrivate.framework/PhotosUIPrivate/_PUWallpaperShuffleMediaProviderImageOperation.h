@class PXCGImage, PUWallpaperShuffleSegmentationLoadingOperation, NUBufferRenderRequest, PXImageRequestDescriptor, NSError;

@interface _PUWallpaperShuffleMediaProviderImageOperation : PXAsyncOperation {
    NUBufferRenderRequest *_renderRequest;
}

@property (readonly, nonatomic) PXImageRequestDescriptor *requestDescriptor;
@property (readonly, nonatomic) id /* block */ resultHandler;
@property (readonly, nonatomic) PUWallpaperShuffleSegmentationLoadingOperation *segmentationLoadingOperation;
@property (readonly, nonatomic) PXCGImage *resultImage;
@property (readonly, nonatomic) NSError *error;

- (void)cancel;
- (void).cxx_destruct;
- (void)px_start;
- (void)_handleRenderResponse:(id)a0;
- (id)initWithSegmentationOperation:(id)a0 requestDescriptor:(id)a1 resultHandler:(id /* block */)a2;

@end
