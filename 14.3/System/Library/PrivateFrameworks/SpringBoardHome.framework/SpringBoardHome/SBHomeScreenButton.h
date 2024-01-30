@class UIImage, SBHomeScreenMaterialView, UIView;

@interface SBHomeScreenButton : UIButton

@property (class, readonly, nonatomic) UIImage *defaultContentImage;
@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;

@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) SBHomeScreenMaterialView *materialView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundView:(id)a1;
- (void)setHighlighted:(BOOL)a0;

@end
