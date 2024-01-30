@class NSNumber;

@interface VNCIContrastWithPivotColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast;
@property (copy, nonatomic) NSNumber *inputPivot;

- (id)outputImage;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInputParameters:(id)a0;

@end
