@class NSString, UIVisualEffectView;

@interface PXPhotosGridTitleBackdropBlurView : UIView <PXGReusableView> {
    UIVisualEffectView *_visualEffectView;
}

@property (copy, nonatomic) NSString *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)becomeReusable;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
