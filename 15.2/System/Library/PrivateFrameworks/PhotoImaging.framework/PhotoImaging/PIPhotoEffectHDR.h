@class CIImage;

@interface PIPhotoEffectHDR : CIFilter

@property (retain) CIImage *inputImage;

+ (id)kernel;

- (id)outputImage;
- (void).cxx_destruct;
- (id)photoEffectName;

@end
