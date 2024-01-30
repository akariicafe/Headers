@class CIImage, NSDictionary;

@interface RAWOpcodeDeltaPerRow : CIFilter

@property (retain) CIImage *inputImage;
@property (retain, nonatomic) NSDictionary *arguments;

- (id)outputImage;
- (void).cxx_destruct;
- (id)initWithArguments:(id)a0;

@end
