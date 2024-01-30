@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

+ (double)cornerRadius;
+ (double)arrowBase;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (double)arrowHeight;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)setArrowDirection:(unsigned long long)a0;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)layoutSubviews;
- (double)arrowOffset;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)a0;

@end
