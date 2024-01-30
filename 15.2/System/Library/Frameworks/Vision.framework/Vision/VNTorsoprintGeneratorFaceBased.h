@interface VNTorsoprintGeneratorFaceBased : VNTorsoprintGeneratorBase

+ (struct CGSize { double x0; double x1; })torsoprintDescriptorSize;
+ (float)minimumTorsoInsideInputImageThreshold;
+ (float)magnifiedBBoxScaleFactor;
+ (struct CGSize { double x0; double x1; })torsoprintInputImageSizeForFaceOrientation:(int)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (id)torsoprintForImageBuffer:(struct __CVBuffer { } *)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_calculateTorsoBBoxFromFaceBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insideImageWithSize:(struct CGSize { double x0; double x1; })a1 faceOrientationRelativeToUpright:(int)a2 torsoBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 error:(id *)a4;

@end
