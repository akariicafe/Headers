@class PXZoomableInlineHeaderViewConfiguration, UIVisualEffectView, UIView, UILabel;

@interface PXZoomableInlineHeaderView : UIView <PXGReusableView> {
    PXZoomableInlineHeaderViewConfiguration *_configuration;
    UIVisualEffectView *_effectView;
    UIView *_tintView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (copy, nonatomic) PXZoomableInlineHeaderViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0;
+ (id)_subtitleFontForStyle:(unsigned long long)a0;
+ (double)_heightForStyle:(unsigned long long)a0;
+ (id)_titleFontForStyle:(unsigned long long)a0;
+ (double)_titleBaselineDistanceForFont:(id)a0;

- (void)_updateConfiguration;
- (void)_updateButtonWithConfiguration:(id)a0;
- (void)becomeReusable;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)_setupBackgroundView;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (void)_platformSpecificViewSetup;
- (void)_configureViews;
- (void)_setEffectViewCornerRadius:(double)a0;
- (id)_tintViewBackgroundColor;

@end
