@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMISoftwareFlashRenderingThumbnailV1 : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _downsampleYUVToRGBThumbnail;
}

- (int)purgeResources;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)encodeDownsizeThumbnail:(SEL)a0 fullSizeLuma:(id)a1 fullSizeChroma:(id)a2 outputRGBThumbnail:(id)a3 yuvOffsets:(id)a4 thumbnailWidth:(int)a5 thumbnailHeight:(int)a6 cropRect:(struct CMISoftwareFlashRenderingCropRect { int x0; int x1; int x2; int x3; })a7;

@end
