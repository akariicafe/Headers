@class CIRenderTask, NUCVPixelBuffer, NUColorSpace, CIRenderInfo, CIImage, NUPixelFormat;

@interface _PIParallaxRenderCacheEntry : NSObject {
    NUCVPixelBuffer *_pixelBuffer;
}

@property (readonly, nonatomic) CIImage *image;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, nonatomic) CIRenderTask *renderTask;
@property (readonly, nonatomic) CIRenderInfo *renderInfo;
@property (readonly, nonatomic) CIImage *cachedImage;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 format:(id)a1 colorSpace:(id)a2;
- (BOOL)render:(id)a0 error:(out id *)a1;
- (BOOL)waitForRender:(out id *)a0;

@end
