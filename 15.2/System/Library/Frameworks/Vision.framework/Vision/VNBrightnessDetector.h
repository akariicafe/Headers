@interface VNBrightnessDetector : VNDetector

+ (BOOL)isReentrant;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (struct __CVBuffer { } *)_createPixelBufferFromImageBuffer:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 maximumIntermediateSideLength:(unsigned long long)a2 options:(id)a3 error:(id *)a4;

@end
