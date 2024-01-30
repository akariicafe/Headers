@class CRTextDetectorModelV3;

@interface CRNeuralTextDetectorV3 : CRNeuralTextDetector

@property (retain) CRTextDetectorModelV3 *model;

+ (void)aggregateRegionMap:(id)a0 affinityMap:(id)a1 scriptMap:(id)a2 linkMap:(id)a3 targetSize:(struct CGSize { double x0; double x1; })a4 outputRegionMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a5 outputAffinityMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a6 outputScriptMap:(void *)a7 outputLinkMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a8 outputOrigin:(struct CGPoint { double x0; double x1; })a9;
+ (void)calculateTargetOutputSize:(struct CGSize { double x0; double x1; } *)a0 adjustedInputScale:(double *)a1 paddedSize:(struct CGSize { double x0; double x1; } *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 maximumSize:(struct CGSize { double x0; double x1; })a4 minimumSize:(struct CGSize { double x0; double x1; })a5 inputLengthLimit:(double)a6;
+ (struct unique_ptr<CRImageBuffer, std::default_delete<CRImageBuffer>> { struct __compressed_pair<CRImageBuffer *, std::default_delete<CRImageBuffer>> { struct CRImageBuffer *x0; } x0; })createImageMap:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })scaledImageSizeForConfiguration:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })scaledImageSizeForMaxSize:(struct CGSize { double x0; double x1; })a0 minSize:(struct CGSize { double x0; double x1; })a1 inputLengthLimit:(double)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(double *)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)preheatWithError:(id *)a0;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)detectInImage:(id)a0 error:(id *)a1;
- (id)enumerateTilesForImage:(id)a0 guidedByScoreMapFullTile:(void *)a1 block:(id /* block */)a2;
- (id)processRegionMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 affinityMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 linkMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2 adjustedSize:(struct CGSize { double x0; double x1; })a3 regionMapFullTile:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a4 affinityMapFullTile:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a5 linkMapFullTile:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a6 adjustedFullTileSize:(struct CGSize { double x0; double x1; })a7 targetSize:(struct CGSize { double x0; double x1; })a8 targetSizeFullTile:(struct CGSize { double x0; double x1; })a9 intermediateResults:(id *)a10 withScaleIds:(void *)a11 sourceImageSize:(struct CGSize { double x0; double x1; })a12 tileRects:(id)a13;

@end
