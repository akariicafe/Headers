@class NSNumber, NSArray;

@interface NUBrushMaskGenerator : CIFilter

@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputSoftness;
@property (retain, nonatomic) NSNumber *inputOpacity;
@property (retain, nonatomic) NSArray *inputPoints;
@property (retain, nonatomic) NSNumber *inputTiled;
@property (retain, nonatomic) NSNumber *inputClosed;
@property (retain, nonatomic) NSNumber *inputPressureMode;

- (id)outputImage;
- (void)setDefaults;
- (void).cxx_destruct;
- (id)_applyOpacity:(double)a0 toMask:(id)a1;

@end
