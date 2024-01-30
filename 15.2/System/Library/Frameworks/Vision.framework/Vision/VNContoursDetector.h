@class VNCIContrastWithPivotColorFilter, VNCIContrastFromAverageColorFilter, CIContext;

@interface VNContoursDetector : VNDetector {
    CIContext *_ciContext;
    VNCIContrastFromAverageColorFilter *_ciContrastFromAvgFilter;
    VNCIContrastWithPivotColorFilter *_ciContrastWithPivotFilter;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
