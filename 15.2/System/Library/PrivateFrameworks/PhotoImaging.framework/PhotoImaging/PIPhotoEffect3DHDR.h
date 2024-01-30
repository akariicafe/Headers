@class CIImage;

@interface PIPhotoEffect3DHDR : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDepthMap;
@property float inputThreshold;

+ (id)kernel;

- (id)outputImage;
- (void).cxx_destruct;
- (id)photoEffectName;

@end
