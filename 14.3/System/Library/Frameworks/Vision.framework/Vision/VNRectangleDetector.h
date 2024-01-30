@interface VNRectangleDetector : VNDetector {
    float *_perMeshPtr;
}

+ (id)supportedImageSizeSetForProcessingOptions:(id)a0;

- (void)dealloc;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id)supportedImageSizeSetForProcessingOptions:(id)a0;
- (BOOL)needsMetalContext;

@end
