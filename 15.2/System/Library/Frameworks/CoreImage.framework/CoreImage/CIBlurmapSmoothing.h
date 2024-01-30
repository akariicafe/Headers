@class CIImage, NSNumber, NSDictionary;

@interface CIBlurmapSmoothing : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelH;
- (id)_kernelV;
- (id)performPass:(id)a0 reference:(id)a1 values:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
