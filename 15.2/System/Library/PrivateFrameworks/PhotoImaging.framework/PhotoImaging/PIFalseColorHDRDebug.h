@class CIImage;

@interface PIFalseColorHDRDebug : CIFilter

@property double inputCutoff;
@property (retain) CIImage *inputImage;

+ (id)kernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
