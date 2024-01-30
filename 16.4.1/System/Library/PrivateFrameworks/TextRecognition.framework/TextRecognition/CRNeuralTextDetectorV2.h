@class CRTextDetectorModel;

@interface CRNeuralTextDetectorV2 : CRNeuralTextDetector

@property (retain) CRTextDetectorModel *model;

+ (void)aggregateScoreAndGeoMap:(id)a0 inputGeo:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 outputScoreMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3 outputGeoMap:(void *)a4 outputOrigin:(struct CGPoint { double x0; double x1; })a5;
+ (void)calculateTargetOutputSize:(struct CGSize { double x0; double x1; } *)a0 adjustedInputScale:(double *)a1 paddedSize:(struct CGSize { double x0; double x1; } *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 maximumSize:(struct CGSize { double x0; double x1; })a4;
+ (struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<CRImageBuffer> *, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x0; } x2; })createGeometricMaps:(struct CGSize { double x0; double x1; })a0;
+ (struct unique_ptr<CRImageBuffer, std::default_delete<CRImageBuffer>> { struct __compressed_pair<CRImageBuffer *, std::default_delete<CRImageBuffer>> { struct CRImageBuffer *x0; } x0; })createImageMap:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (void)genPolyResultsForMIVSNMS:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 geoMap:(void *)a1 output:(void *)a2 mergingType:(int)a3;
+ (void)getMasksForScoreMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 imageMask:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 binaryMask:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2;
+ (void)scaleBufferNearestNeighbor:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 geoMap:(void *)a1 dest:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2 destGeomap:(void *)a3 binaryMask:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)detectInImage:(id)a0 error:(id *)a1;
- (id)processScoreMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 geoMap:(void *)a1 adjustedSize:(struct CGSize { double x0; double x1; })a2 scoreMapFullTile:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3 geoMapFullTile:(void *)a4 adjustedFullTileSize:(struct CGSize { double x0; double x1; })a5 targetSize:(struct CGSize { double x0; double x1; })a6 targetSizeFullTile:(struct CGSize { double x0; double x1; })a7 intermediateResults:(id *)a8 tileRects:(id)a9;

@end
