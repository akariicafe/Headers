@class AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerViewLayer : CALayer

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues;

- (BOOL)continuousCorners;
- (void)setMaskedCorners:(unsigned long long)a0;
- (void)setCornerCurve:(id)a0;
- (id)cornerCurve;
- (void)setMasksToBounds:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)masksToBounds;
- (void)setContinuousCorners:(BOOL)a0;
- (void)setCornerRadius:(double)a0;
- (double)cornerRadius;
- (unsigned long long)maskedCorners;

@end
