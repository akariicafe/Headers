@class AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerViewLayer : CALayer

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues;

- (unsigned long long)maskedCorners;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (double)cornerRadius;
- (void)setMaskedCorners:(unsigned long long)a0;
- (id)cornerCurve;
- (void)setMasksToBounds:(BOOL)a0;
- (BOOL)continuousCorners;
- (void)setContinuousCorners:(BOOL)a0;
- (BOOL)masksToBounds;
- (void)setCornerCurve:(id)a0;

@end
