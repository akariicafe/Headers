@class _UIBannerContent, UIImageView, CALayer, UIView, UILabel;

@interface _UIBannerView : UIView

@property (retain, nonatomic) _UIBannerContent *content;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL highlighted;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0 initialPress:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
