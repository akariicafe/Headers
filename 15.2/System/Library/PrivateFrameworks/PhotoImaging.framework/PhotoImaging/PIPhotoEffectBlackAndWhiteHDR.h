@class CIImage;

@interface PIPhotoEffectBlackAndWhiteHDR : CIFilter

@property (retain) CIImage *inputImage;

+ (id)kernelBlackAndWhite;

- (id)outputImage;
- (void).cxx_destruct;
- (id)photoEffectName;

@end
