@class CIImage;

@interface PIPhotoEffect3DHDR : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDepthMap;
@property float inputThreshold;

+ (id)kernel;

- (void).cxx_destruct;
- (id)outputImage;
- (id)photoEffectName;

@end
