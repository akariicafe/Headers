@class PREditingButtonMaterialView, UIImage, MTMaterialView;

@interface PREditingButton : UIButton

@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (readonly, nonatomic) PREditingButtonMaterialView *materialView;
@property (readonly, nonatomic) UIImage *defaultContentImage;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_didInvalidateContentImageMetrics;

@end
