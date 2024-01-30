@class BSCornerRadiusConfiguration, NSArray, SBHitTestExtendedView;

@interface SBAsymmetricalCornerRadiusWrapperView : SBHitTestExtendedView {
    SBHitTestExtendedView *_trailingCornersMaskingView;
}

@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long maskedCorners;
@property (readonly, copy, nonatomic) NSArray *contentViews;

- (void)addContentView:(id)a0;
- (void)setClipsToBounds:(BOOL)a0;
- (void)bringContentViewToFront:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sendContentViewToBack:(id)a0;
- (void)_updateMaskedCorners;
- (void)_updateCornerRadius;
- (void).cxx_destruct;

@end
