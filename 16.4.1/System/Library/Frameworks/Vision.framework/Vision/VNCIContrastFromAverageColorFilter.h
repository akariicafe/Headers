@class NSNumber;

@interface VNCIContrastFromAverageColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast;

- (id)outputImage;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInputParameters:(id)a0;

@end
