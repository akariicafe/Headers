@class NSString, UIView;

@interface PUImportCustomViewBarButton : UIButton

@property (readonly, nonatomic) UIView *customView;
@property (copy, nonatomic) NSString *customAccessibilityLabel;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)updateConstraints;
- (id)accessibilityLabel;
- (id)initWithCustomView:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
