@class UIView;

@interface PKRightAngleRotatingView : UIView

@property (readonly, nonatomic) UIView *rotatedView;
@property (nonatomic) long long orientation;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)_dimensionsAreRotated;
- (id)initWithRotatedView:(id)a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTransform;

@end
