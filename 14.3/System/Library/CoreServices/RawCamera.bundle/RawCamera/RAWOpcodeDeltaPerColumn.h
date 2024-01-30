@class CIImage, NSDictionary;

@interface RAWOpcodeDeltaPerColumn : CIFilter

@property (retain) CIImage *inputImage;
@property (retain, nonatomic) NSDictionary *arguments;

- (void).cxx_destruct;
- (id)outputImage;
- (id)initWithArguments:(id)a0;

@end
