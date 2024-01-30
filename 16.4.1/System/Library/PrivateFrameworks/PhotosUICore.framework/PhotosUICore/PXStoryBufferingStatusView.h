@class PXStoryBufferingStatusViewConfiguration, UIActivityIndicatorView;

@interface PXStoryBufferingStatusView : UIView <PXGReusableView>

@property (readonly, nonatomic) UIActivityIndicatorView *spinnerView;
@property (copy, nonatomic) PXStoryBufferingStatusViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)didMoveToWindow;
- (void)becomeReusable;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateAnimation;

@end
