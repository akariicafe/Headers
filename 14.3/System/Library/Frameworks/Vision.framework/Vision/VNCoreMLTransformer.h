@class VNCoreMLModel;

@interface VNCoreMLTransformer : VNDetector

@property (readonly) VNCoreMLModel *model;

- (void).cxx_destruct;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id)initWithOptions:(id)a0 model:(id)a1 error:(id *)a2;
- (BOOL)needsMetalContext;

@end
