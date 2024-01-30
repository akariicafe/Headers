@class NSNumber;

@interface CIAreaLogarithmicHistogram : CIAreaHistogram

@property (retain, nonatomic) NSNumber *inputMinimumStop;
@property (retain, nonatomic) NSNumber *inputMaximumStop;

+ (id)customAttributes;

- (id)outputImage;

@end
