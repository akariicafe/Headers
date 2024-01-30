@class UIColor;

@interface HKGradientFillStyle : HKFillStyle

@property (retain, nonatomic) UIColor *firstColor;
@property (retain, nonatomic) UIColor *secondColor;
@property (nonatomic) double fillPercentage;
@property (nonatomic) long long fillDirection;
@property (nonatomic) double gradientSize;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_renderInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_useReversedFillDirection;

@end
