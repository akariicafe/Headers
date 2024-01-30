@class CIImage;

@interface PITempTintFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;

- (id)outputImage;
- (void).cxx_destruct;
- (void)setInputVectorsForFilter:(id)a0;

@end
