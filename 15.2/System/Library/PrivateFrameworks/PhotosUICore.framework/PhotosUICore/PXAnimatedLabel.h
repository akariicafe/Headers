@class UIFont, NSString, PXAnimatedCounter, UILabel, NSLayoutConstraint;

@interface PXAnimatedLabel : UIView

@property (retain) PXAnimatedCounter *counter;
@property (retain) UILabel *label;
@property (readonly) NSLayoutConstraint *counterWidthConstraint;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *text;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setText:(id)a0 withAnimationStyle:(long long)a1 completionBlock:(id /* block */)a2;
- (void)_updateConstraintsForText;

@end
