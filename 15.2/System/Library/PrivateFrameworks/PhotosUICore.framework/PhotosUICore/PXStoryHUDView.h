@class UILabel, PXStoryHUDViewConfiguration;

@interface PXStoryHUDView : UIView <PXGReusableView>

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *bodyLabel;
@property (copy, nonatomic) PXStoryHUDViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)layoutSubviews;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
