@interface UISwipeActionCircularButton : UISwipeActionButton

+ (double)defaultButtonWidth;
+ (id)titleFont;
+ (double)maximumButtonHeight;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
