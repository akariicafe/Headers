@class AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerViewLayer : CALayer

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues;

- (void)setMaskedCorners:(unsigned long long)a0;
- (double)cornerRadius;
- (id)cornerCurve;
- (void)setMasksToBounds:(BOOL)a0;
- (BOOL)masksToBounds;
- (void)setContinuousCorners:(BOOL)a0;
- (void)setCornerCurve:(id)a0;
- (unsigned long long)maskedCorners;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (BOOL)continuousCorners;

@end
