@class NSNumber;

@interface CheapRandomness : CIFilter

@property (retain, nonatomic) NSNumber *inputDither;
@property (retain, nonatomic) NSNumber *inputScale;

- (id)outputImage;

@end
