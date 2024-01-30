@class CIImage;

@interface PICurvesFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputTableImage;

+ (id)curvesKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
