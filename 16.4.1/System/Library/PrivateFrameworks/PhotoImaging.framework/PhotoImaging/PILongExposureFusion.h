@class CIImage, NSNumber, CIVector;

@interface PILongExposureFusion : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputStillImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) NSNumber *inputRenderScale;
@property (retain, nonatomic) NSNumber *inputVideoScale;
@property (retain, nonatomic) CIVector *inputAlignmentExtent;
@property (retain, nonatomic) CIVector *inputAlignmentTransform;

+ (void)initialize;
+ (BOOL)_debugDumpIntermediateImages;
+ (BOOL)debugDumpIntermediateImages;
+ (void)loadFusionTuningParameters;

- (id)outputImage;
- (void).cxx_destruct;
- (id)_computeNCCMapFromImage:(id)a0 toImage:(id)a1 scale:(double)a2;
- (id)_fuseImage:(id)a0 withGuideImage:(id)a1 weightImage:(id)a2 maskImage:(id)a3;
- (id)_refineMaskImage:(id)a0 guideImage:(id)a1 scale:(double)a2;
- (id)alignImage:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
