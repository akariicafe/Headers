@class CUIPSDGradient;

@interface CUIPSDGradientLayer : CUIPSDLayer

@property (readonly, nonatomic) CUIPSDGradient *gradient;

- (void)dealloc;
- (id)initWithGradient:(id)a0;

@end
