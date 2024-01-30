@class CIImage, NSDictionary;

@interface RAWOpcodeFixVignetteRadial : CIFilter

@property (retain) CIImage *inputImage;
@property (retain, nonatomic) NSDictionary *arguments;

- (id)outputImage;
- (void).cxx_destruct;
- (id)initWithArguments:(id)a0;

@end
