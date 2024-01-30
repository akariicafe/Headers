@class CIImage, NSDictionary, NSNumber;

@interface CISparseRendererPreFiltering : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (copy) NSNumber *inputApertureScaling;
@property (retain) NSNumber *inputScale;

- (id)outputImage;
- (id)_kernel:(BOOL)a0;
- (void)dumpImage:(id)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 prefixFilename:(id)a2;
- (id)outputImage:(id)a0 horizontal:(BOOL)a1 width:(double)a2;

@end
