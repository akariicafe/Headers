@class CIImage;

@interface PICurvesFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputTableImage;

+ (id)curvesKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
