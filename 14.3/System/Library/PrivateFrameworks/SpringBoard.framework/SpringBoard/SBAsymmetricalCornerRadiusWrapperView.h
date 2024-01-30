@class BSCornerRadiusConfiguration, UIView;

@interface SBAsymmetricalCornerRadiusWrapperView : UIView {
    UIView *_trailingCornersMaskingView;
}

@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long maskedCorners;

- (void)addContentView:(id)a0;
- (void).cxx_destruct;
- (void)_updateCornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setClipsToBounds:(BOOL)a0;
- (void)bringContentViewToFront:(id)a0;
- (void)sendContentViewToBack:(id)a0;
- (void)_updateMaskedCorners;

@end
