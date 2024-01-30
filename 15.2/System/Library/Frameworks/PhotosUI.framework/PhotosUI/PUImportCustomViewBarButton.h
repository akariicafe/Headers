@class NSString, UIView;

@interface PUImportCustomViewBarButton : UIButton

@property (readonly, nonatomic) UIView *customView;
@property (copy, nonatomic) NSString *customAccessibilityLabel;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCustomView:(id)a0;
- (id)accessibilityLabel;
- (void)sizeToFit;

@end
