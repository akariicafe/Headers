@class CIImage, NSArray, NSNumber;

@interface GUBilateralConvolution : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSArray *inputPoints;
@property (retain) NSArray *inputWeights;
@property (retain) NSNumber *inputEdgeDetail;
@property (retain) NSNumber *inputVersion;

+ (id)LabToRGBKernel;
+ (id)RGBToLabKernels;
+ (id)RGBToLabKernel;
+ (id)bilateralAdd1Kernel;
+ (id)bilateralAdd2Kernel;
+ (id)bilateralAdd3Kernel;
+ (id)bilateralAdd4Kernel;
+ (id)bilateralAdd5Kernel;
+ (id)bilateralAdd6Kernel;
+ (id)bilateralAdd7Kernel;
+ (id)bilateralAdd8Kernel;
+ (id)bilateralAdd9Kernel;
+ (id)bilateralFinalizeKernel;
+ (id)bilateralKernels;

- (id)outputImage;
- (void).cxx_destruct;
- (unsigned long long)samplesPerPass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bilateralAddROI:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForPointArray:(id)a0;
- (id)doBilateralPass:(id)a0 points:(id)a1 weights:(id)a2 sums:(id)a3 slope:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enlargedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPoints:(id)a1;

@end
