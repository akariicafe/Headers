@class UIImage, SBHomeScreenMaterialView, UIView;

@interface SBHomeScreenButton : UIButton

@property (retain, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIImage *defaultContentImage;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;
@property (readonly, nonatomic) SBHomeScreenMaterialView *materialView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundView:(id)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
