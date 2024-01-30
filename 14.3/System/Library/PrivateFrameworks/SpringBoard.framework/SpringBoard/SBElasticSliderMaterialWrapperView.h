@class MTMaterialShadowView, UIView, SBElasticSliderView;

@interface SBElasticSliderMaterialWrapperView : UIView {
    UIView *_sliderWrapperView;
}

@property (readonly, nonatomic) SBElasticSliderView *sliderView;
@property (readonly, nonatomic) MTMaterialShadowView *baseMaterialView;
@property (readonly, nonatomic) UIView *maskView;
@property (nonatomic) long long shadowMode;

- (void)_setContinuousCornerRadius:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateShadowMode;

@end
