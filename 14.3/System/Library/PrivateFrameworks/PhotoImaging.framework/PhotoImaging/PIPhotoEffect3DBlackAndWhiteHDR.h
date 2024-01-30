@class CIImage;

@interface PIPhotoEffect3DBlackAndWhiteHDR : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDepthMap;
@property float inputThreshold;

+ (id)kernelBlackAndWhite;

- (void).cxx_destruct;
- (id)outputImage;
- (id)photoEffectName;

@end
