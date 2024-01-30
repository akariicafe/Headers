@class CIImage;

@interface PITempTintFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;

- (void).cxx_destruct;
- (id)outputImage;
- (void)setInputVectorsForFilter:(id)a0;

@end
