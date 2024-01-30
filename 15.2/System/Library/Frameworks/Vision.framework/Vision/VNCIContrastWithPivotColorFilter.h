@class NSNumber;

@interface VNCIContrastWithPivotColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast;
@property (copy, nonatomic) NSNumber *inputPivot;

- (id)outputImage;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInputParameters:(id)a0;

@end
