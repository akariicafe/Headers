@class AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerViewLayer : CALayer

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues;

- (unsigned long long)maskedCorners;
- (void)setMaskedCorners:(unsigned long long)a0;
- (void)setCornerCurve:(id)a0;
- (id)cornerCurve;
- (void)setCornerRadius:(double)a0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setMasksToBounds:(BOOL)a0;
- (BOOL)masksToBounds;

@end
