@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView {
    double arrowOffset;
    unsigned long long arrowDirection;
}

+ (double)arrowBase;
+ (double)arrowHeight;
+ (BOOL)wantsDefaultContentAppearance;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (double)_shadowOpacity;
- (double)_shadowRadius;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)a0;
- (void)setArrowOffset:(double)a0;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (unsigned long long)arrowDirection;

@end
