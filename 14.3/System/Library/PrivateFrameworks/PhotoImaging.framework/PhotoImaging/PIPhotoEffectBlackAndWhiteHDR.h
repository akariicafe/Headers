@class CIImage;

@interface PIPhotoEffectBlackAndWhiteHDR : CIFilter

@property (retain) CIImage *inputImage;

+ (id)kernelBlackAndWhite;

- (void).cxx_destruct;
- (id)outputImage;
- (id)photoEffectName;

@end
