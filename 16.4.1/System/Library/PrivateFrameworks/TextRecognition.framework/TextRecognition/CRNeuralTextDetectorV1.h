@class CRTextDetectorModel;

@interface CRNeuralTextDetectorV1 : CRNeuralTextDetector

@property (retain) CRTextDetectorModel *model;

+ (void)aggregateScoreAndGeoMap:(id)a0 inputGeo:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 outputScoreMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3 outputGeoMap:(struct vImage_Buffer **)a4 outputOrigin:(struct CGPoint { double x0; double x1; })a5;
+ (struct vImage_Buffer **)allocGeometricMaps:(struct CGSize { double x0; double x1; })a0;
+ (void)calculateTargetOutputSize:(struct CGSize { double x0; double x1; } *)a0 adjustedInputScale:(double *)a1 paddedSize:(struct CGSize { double x0; double x1; } *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 maximumSize:(struct CGSize { double x0; double x1; })a4;
+ (void)deallocGeometricMaps:(struct vImage_Buffer **)a0;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })extractImageMap:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)genPolyResults:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 geoMap:(struct vImage_Buffer **)a1 scale:(struct CGSize { double x0; double x1; })a2 mergingType:(int)a3;
+ (void)getMasksForScoreMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 imageMask:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 binaryMask:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2;
+ (void)scaleBufferNearestNeighbor:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 geoMap:(struct vImage_Buffer **)a1 dest:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2 destGeomap:(struct vImage_Buffer **)a3 binaryMask:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)detectInImage:(id)a0 error:(id *)a1;
- (id)processScoreMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 geoMap:(struct vImage_Buffer **)a1 targetSize:(struct CGSize { double x0; double x1; })a2 scale:(struct CGSize { double x0; double x1; })a3;

@end
