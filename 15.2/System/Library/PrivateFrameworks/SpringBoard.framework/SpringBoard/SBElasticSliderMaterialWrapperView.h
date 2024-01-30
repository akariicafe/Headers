@class CCUIContinuousSliderView, UIView, MTMaterialShadowView;
@protocol SBElasticGlyphView;

@interface SBElasticSliderMaterialWrapperView : UIView {
    UIView *_sliderWrapperView;
}

@property (readonly, nonatomic) CCUIContinuousSliderView<SBElasticGlyphView> *sliderView;
@property (readonly, nonatomic) MTMaterialShadowView *baseMaterialView;
@property (readonly, nonatomic) UIView *maskView;
@property (nonatomic) long long shadowMode;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_updateShadowMode;
- (id)initWithSliderView:(id)a0;

@end
