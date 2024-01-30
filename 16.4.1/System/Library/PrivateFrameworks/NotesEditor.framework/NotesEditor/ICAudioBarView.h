@class CALayer, UIButton, NSLayoutConstraint;

@interface ICAudioBarView : UIView

@property (nonatomic) double oldWidth;
@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UIButton *doneButton;
@property (nonatomic) double height;

- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)setHeight:(double)a0;
- (double)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateLayoutMargins;
- (void).cxx_destruct;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;

@end
