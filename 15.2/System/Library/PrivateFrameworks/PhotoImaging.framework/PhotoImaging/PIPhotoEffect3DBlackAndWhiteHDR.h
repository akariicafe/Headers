@class CIImage;

@interface PIPhotoEffect3DBlackAndWhiteHDR : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDepthMap;
@property float inputThreshold;

+ (id)kernelBlackAndWhite;

- (id)outputImage;
- (void).cxx_destruct;
- (id)photoEffectName;

@end
