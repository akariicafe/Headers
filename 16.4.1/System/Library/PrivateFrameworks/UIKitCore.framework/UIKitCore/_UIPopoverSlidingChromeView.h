@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

+ (double)cornerRadius;
+ (double)arrowHeight;
+ (double)arrowBase;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)a0;
- (double)_shadowRadius;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)a0;
- (double)_shadowOpacity;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;

@end
