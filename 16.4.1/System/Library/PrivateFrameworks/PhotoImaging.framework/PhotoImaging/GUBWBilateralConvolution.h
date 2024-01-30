@class CIImage, NSArray, NSNumber;

@interface GUBWBilateralConvolution : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSArray *inputPoints;
@property (retain) NSArray *inputWeights;
@property (retain) NSNumber *inputEdgeDetail;
@property (retain) NSNumber *inputBorder;

+ (id)BWBilateralKernels;
+ (id)bilateralLoop11Kernel;
+ (id)bilateralLoop2Kernel;
+ (id)bilateralLoop5Kernel;

- (id)outputImage;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bilateralROI:(long long)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (id)doBilateralLoop:(id)a0 points:(id)a1 weights:(id)a2 slope:(id)a3;

@end
