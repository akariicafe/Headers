@class CCUIContinuousSliderView, UIView, MTMaterialView;
@protocol SBElasticGlyphView;

@interface SBElasticSliderMaterialWrapperView : UIView {
    MTMaterialView *_captureOnlyMaterialView;
    MTMaterialView *_baseMaterialView;
    UIView *_shadowView;
    UIView *_sliderWrapperView;
    UIView *_maskView;
}

@property (readonly, nonatomic) CCUIContinuousSliderView<SBElasticGlyphView> *sliderView;
@property (nonatomic) long long shadowMode;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_updateShadowMode;
- (id)initWithSliderView:(id)a0;

@end
