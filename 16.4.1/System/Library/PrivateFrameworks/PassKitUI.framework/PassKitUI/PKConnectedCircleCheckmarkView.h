@class UIColor, UIImageView, UIView;

@interface PKConnectedCircleCheckmarkView : UIView {
    UIImageView *_imageView;
    UIView *_backgroundView;
}

@property (readonly, nonatomic) UIColor *checkmarkTintColor;
@property (readonly, nonatomic) UIColor *checkmarkBackgroundColor;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (id)initWithCheckmarkTintColor:(id)a0 checkmarkBackgroundColor:(id)a1;

@end
