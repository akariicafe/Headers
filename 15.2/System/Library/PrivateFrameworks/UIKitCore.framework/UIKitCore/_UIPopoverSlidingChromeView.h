@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

+ (double)arrowBase;
+ (double)arrowHeight;
+ (double)cornerRadius;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (void)layoutSubviews;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;
- (double)_shadowOpacity;
- (double)_shadowRadius;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)a0;
- (void)setArrowOffset:(double)a0;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (unsigned long long)arrowDirection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;

@end
