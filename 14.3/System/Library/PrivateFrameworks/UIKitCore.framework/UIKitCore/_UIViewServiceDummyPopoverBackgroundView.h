@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView {
    double arrowOffset;
    unsigned long long arrowDirection;
}

+ (double)arrowBase;
+ (BOOL)wantsDefaultContentAppearance;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (double)arrowHeight;

- (void)setArrowDirection:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (double)arrowOffset;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)a0;

@end
