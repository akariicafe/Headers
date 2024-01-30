@class CIImage;

@interface PICurvesFilterHDR : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputTableImage;

- (id)outputImage;
- (void).cxx_destruct;
- (id)curvesKernel;

@end
