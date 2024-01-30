@class CIImage, NSDictionary;

@interface RAWOpcodeFixVignetteRadial : CIFilter

@property (retain) CIImage *inputImage;
@property (retain, nonatomic) NSDictionary *arguments;

- (void).cxx_destruct;
- (id)outputImage;
- (id)initWithArguments:(id)a0;

@end
