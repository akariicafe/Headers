@class NSNumber, PMLMutableDenseVector;

@interface PMLGradientResults : NSObject

@property (readonly, nonatomic) PMLMutableDenseVector *gradient;
@property (readonly, nonatomic) NSNumber *loss;

- (void).cxx_destruct;
- (id)initWithGradient:(id)a0 loss:(id)a1;

@end
