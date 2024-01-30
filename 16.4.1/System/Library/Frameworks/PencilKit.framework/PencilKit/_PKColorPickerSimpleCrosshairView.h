@class UIView;

@interface _PKColorPickerSimpleCrosshairView : UIView

@property (nonatomic) double borderCornerRadius;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *borderView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_cornerRadiusForBorderView;
- (double)_cornerRadiusForShadowView;
- (void)configureBorderView:(id)a0;
- (void)configureShadowView:(id)a0;

@end
