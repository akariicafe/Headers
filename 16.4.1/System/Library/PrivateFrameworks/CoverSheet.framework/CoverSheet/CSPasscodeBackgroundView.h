@class UIView, UIColor, MTMaterialView;

@interface CSPasscodeBackgroundView : UIView

@property (retain, nonatomic) MTMaterialView *materialView;
@property (retain, nonatomic) UIView *lightenSourceOverView;
@property (retain, nonatomic) UIView *plusDView;
@property (retain, nonatomic) UIView *reduceTransparencyTintingView;
@property (retain, nonatomic) UIView *reduceTransparencyBackingView;
@property (retain, nonatomic) UIColor *reduceTransparencyBackingColor;

- (void)setWeighting:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setPlusDBackgroundColorWithWeighting:(double)a0;

@end
